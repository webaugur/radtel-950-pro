#!/usr/bin/env python3
"""Scriptable RT-950 / RT-950 Pro codeplug shell (CPS serial path).

Reads commands from stdin. Results go to stdout. All errors go to stderr.
Exceptions are caught per command so a bad line does not kill the shell.

Not the EnUPDATE firmware flasher (see radtel_flash.py). This speaks the
codeplug protocol captured from OEM CPS:

  PROGRAMBT9000U -> 0x06
  F -> 16-byte info
  M -> model string (e.g. "RT-950")
  SEND + 21 parameter bytes -> 0x06
  Read:  'R' + addr16_be + len   -> echo + payload
  Write: raw stream in 100-byte groups, each ACKed 0x06, then 'E'

Interactive prompt is written to stderr so stdout stays machine-readable.

Examples:
  printf 'port /dev/ttyUSB0\\nopen\\nsession\\nread 0\\nclose\\nquit\\n' | \\
    python3 firmware/scripts/radtel_cps.py

  python3 firmware/scripts/radtel_cps.py <<'EOF'
  port /dev/ttyUSB0
  baud 115200
  open
  read-image /tmp/rt950.bin
  close
  quit
  EOF
"""

from __future__ import annotations

import sys
import time
from pathlib import Path

HANDSHAKE = b"PROGRAMBT9000U"
# Fixed SEND trailer observed to be ACKed. CPS varies these bytes between
# sessions; the radio accepts a constant blob (override with `send <hex>`).
DEFAULT_SEND_PARAMS = bytes.fromhex(
    "12 06 0A 02 0E 03 0D 0C 08 09 00 0D 09 10 0C 09 06 00 02 0E 00"
)
BLOCK = 0x80
WRITE_GROUP = 100
DEFAULT_BAUD = 115_200
READ_TIMEOUT_S = 2.0


class ShellError(Exception):
    """Expected failure reported on stderr; shell keeps running."""


def read_map() -> list[int]:
    """Addresses CPS reads (271 × 128 bytes)."""
    addrs = list(range(0x0000, 0x8000, BLOCK))
    addrs.extend(
        [
            0x8000,
            0x9000,
            0xA000,
            0xA080,
            0xA100,
            0xB000,
            0xB080,
            0xC000,
            0xC080,
            0xD000,
            0xD080,
            0xD100,
            0xD180,
            0xD200,
            0xD280,
        ]
    )
    return addrs


READ_ADDRS = read_map()
IMAGE_SIZE = max(a + BLOCK for a in READ_ADDRS)  # 0xD300 == 54016


def err(msg: str) -> None:
    print(f"error: {msg}", file=sys.stderr, flush=True)


def out(msg: str) -> None:
    print(msg, file=sys.stdout, flush=True)


def parse_int(token: str) -> int:
    try:
        return int(token, 0)
    except ValueError as exc:
        raise ShellError(f"not an integer: {token}") from exc


def parse_hex(blob: str) -> bytes:
    cleaned = "".join(blob.split())
    if cleaned.startswith("0x") or cleaned.startswith("0X"):
        cleaned = cleaned[2:]
    if len(cleaned) % 2:
        raise ShellError("hex string has odd length")
    try:
        return bytes.fromhex(cleaned)
    except ValueError as exc:
        raise ShellError(f"bad hex: {exc}") from exc


def hex_line(data: bytes) -> str:
    return data.hex(" ").upper()


class Radio:
    def __init__(self) -> None:
        self.port_name = "/dev/ttyUSB0"
        self.baud = DEFAULT_BAUD
        self.ser = None

    def open(self) -> None:
        if self.ser is not None and getattr(self.ser, "is_open", False):
            return
        try:
            import serial
        except ImportError as exc:
            raise ShellError("pyserial is not installed") from exc
        try:
            self.ser = serial.Serial(
                self.port_name,
                self.baud,
                timeout=0.2,
                write_timeout=2.0,
            )
        except Exception as exc:  # noqa: BLE001 — report any open failure
            self.ser = None
            raise ShellError(f"open {self.port_name} failed: {exc}") from exc
        try:
            self.ser.reset_input_buffer()
            self.ser.reset_output_buffer()
        except Exception as exc:  # noqa: BLE001
            raise ShellError(f"flush failed: {exc}") from exc

    def close(self) -> None:
        if self.ser is None:
            return
        try:
            self.ser.close()
        except Exception as exc:  # noqa: BLE001
            self.ser = None
            raise ShellError(f"close failed: {exc}") from exc
        self.ser = None

    def _require(self):
        if self.ser is None or not getattr(self.ser, "is_open", False):
            raise ShellError("port is not open (use: open)")
        return self.ser

    def write(self, data: bytes) -> None:
        ser = self._require()
        try:
            n = ser.write(data)
            ser.flush()
        except Exception as exc:  # noqa: BLE001
            raise ShellError(f"write failed: {exc}") from exc
        if n != len(data):
            raise ShellError(f"short write: {n}/{len(data)}")

    def read_exact(self, n: int, timeout_s: float = READ_TIMEOUT_S) -> bytes:
        ser = self._require()
        buf = bytearray()
        deadline = time.monotonic() + timeout_s
        try:
            while len(buf) < n:
                remain = deadline - time.monotonic()
                if remain <= 0:
                    break
                ser.timeout = min(0.2, remain)
                chunk = ser.read(n - len(buf))
                if chunk:
                    buf.extend(chunk)
        except Exception as exc:  # noqa: BLE001
            raise ShellError(f"read failed: {exc}") from exc
        if len(buf) != n:
            raise ShellError(
                f"timeout: wanted {n} bytes, got {len(buf)}"
                + (f" ({hex_line(bytes(buf))})" if buf else "")
            )
        return bytes(buf)

    def expect_ack(self) -> None:
        ack = self.read_exact(1)
        if ack != b"\x06":
            raise ShellError(f"expected ACK 0x06, got {hex_line(ack)}")

    def handshake(self) -> None:
        self.write(HANDSHAKE)
        self.expect_ack()

    def firmware(self) -> bytes:
        self.write(b"F")
        return self.read_exact(16)

    def model(self) -> bytes:
        self.write(b"M")
        return self.read_exact(12)

    def send(self, params: bytes) -> None:
        if len(params) != 21:
            raise ShellError(f"SEND params must be 21 bytes, got {len(params)}")
        self.write(b"SEND" + params)
        self.expect_ack()

    def session(self, params: bytes | None = None) -> tuple[bytes, bytes]:
        self.handshake()
        fw = self.firmware()
        model = self.model()
        self.send(params if params is not None else DEFAULT_SEND_PARAMS)
        return fw, model

    def read_block(self, addr: int, length: int = BLOCK) -> bytes:
        if not 0 <= addr <= 0xFFFF:
            raise ShellError(f"address out of range: {addr}")
        if not 1 <= length <= 255:
            raise ShellError(f"length out of range: {length}")
        cmd = bytes((0x52, (addr >> 8) & 0xFF, addr & 0xFF, length))
        self.write(cmd)
        resp = self.read_exact(4 + length, timeout_s=3.0)
        if resp[:4] != cmd:
            raise ShellError(
                f"bad echo at 0x{addr:04X}: {hex_line(resp[:4])} != {hex_line(cmd)}"
            )
        return resp[4:]

    def read_image(self) -> bytes:
        image = bytearray(b"\xff" * IMAGE_SIZE)
        for i, addr in enumerate(READ_ADDRS):
            payload = self.read_block(addr, BLOCK)
            image[addr : addr + BLOCK] = payload
            if (i + 1) % 32 == 0 or i + 1 == len(READ_ADDRS):
                print(
                    f"read {i + 1}/{len(READ_ADDRS)} @ 0x{addr:04X}",
                    file=sys.stderr,
                    flush=True,
                )
        return bytes(image)

    def write_stream(self, data: bytes) -> None:
        if not data:
            raise ShellError("empty write image")
        padded = data
        if len(padded) % WRITE_GROUP:
            pad = WRITE_GROUP - (len(padded) % WRITE_GROUP)
            padded = padded + (b"\xff" * pad)
            print(
                f"warning: padded {pad} byte(s) to a multiple of {WRITE_GROUP}",
                file=sys.stderr,
                flush=True,
            )
        groups = len(padded) // WRITE_GROUP
        for i in range(groups):
            chunk = padded[i * WRITE_GROUP : (i + 1) * WRITE_GROUP]
            # Match CPS USB shape: 32+32+32+4, one ACK after the group.
            self.write(chunk[:32])
            self.write(chunk[32:64])
            self.write(chunk[64:96])
            self.write(chunk[96:100])
            self.expect_ack()
            if (i + 1) % 32 == 0 or i + 1 == groups:
                print(
                    f"wrote {i + 1}/{groups}",
                    file=sys.stderr,
                    flush=True,
                )
        self.write(b"E")


HELP = """\
commands (stdin). stdout = results, stderr = errors / progress.
  help
  port <device>              default /dev/ttyUSB0
  baud <n>                   default 115200 (port must be closed)
  open
  close
  handshake                  PROGRAMBT9000U -> ACK
  firmware                   'F' -> 16 bytes hex
  model                      'M' -> model text
  send [hex21]               SEND + 21 param bytes -> ACK
  session [hex21]            handshake + firmware + model + send
  read <addr> [len]          'R' block; prints payload hex (default len 128)
  read-image <file>          full CPS map (54016 bytes, gaps 0xFF)
  write-stream <file> confirm
                             session + 100-byte ACK groups + 'E'
                             (file is the packed write blob, NOT the sparse read image)
  end                        send 'E'
  raw <hex> [nbytes]         write hex; if nbytes set, read that many and print
  quit | exit
"""


def dispatch(radio: Radio, line: str) -> bool:
    """Run one command. Return False to exit the shell."""
    parts = line.split()
    if not parts:
        return True
    cmd = parts[0].lower()
    args = parts[1:]

    if cmd in {"quit", "exit"}:
        return False
    if cmd == "help":
        print(HELP, end="", file=sys.stderr, flush=True)
        return True
    if cmd == "port":
        if len(args) != 1:
            raise ShellError("usage: port <device>")
        if radio.ser is not None:
            raise ShellError("close the port before changing it")
        radio.port_name = args[0]
        out(f"ok port {radio.port_name}")
        return True
    if cmd == "baud":
        if len(args) != 1:
            raise ShellError("usage: baud <n>")
        if radio.ser is not None:
            raise ShellError("close the port before changing baud")
        baud = parse_int(args[0])
        if baud <= 0:
            raise ShellError("baud must be positive")
        radio.baud = baud
        out(f"ok baud {radio.baud}")
        return True
    if cmd == "open":
        radio.open()
        out(f"ok open {radio.port_name} {radio.baud}")
        return True
    if cmd == "close":
        radio.close()
        out("ok close")
        return True
    if cmd == "handshake":
        radio.handshake()
        out("ok handshake")
        return True
    if cmd == "firmware":
        data = radio.firmware()
        out(f"ok firmware {hex_line(data)}")
        return True
    if cmd == "model":
        data = radio.model()
        text = data.decode("ascii", errors="replace").rstrip()
        out(f"ok model {text}")
        return True
    if cmd == "send":
        params = parse_hex(args[0]) if args else DEFAULT_SEND_PARAMS
        if len(args) > 1:
            raise ShellError("usage: send [hex21]")
        radio.send(params)
        out("ok send")
        return True
    if cmd == "session":
        params = parse_hex(args[0]) if args else None
        if len(args) > 1:
            raise ShellError("usage: session [hex21]")
        fw, model = radio.session(params)
        text = model.decode("ascii", errors="replace").rstrip()
        out(f"ok session model={text} firmware={hex_line(fw)}")
        return True
    if cmd == "read":
        if not args:
            raise ShellError("usage: read <addr> [len]")
        addr = parse_int(args[0])
        length = parse_int(args[1]) if len(args) > 1 else BLOCK
        if len(args) > 2:
            raise ShellError("usage: read <addr> [len]")
        payload = radio.read_block(addr, length)
        out(f"ok read 0x{addr:04X} {length}")
        out(hex_line(payload))
        return True
    if cmd == "read-image":
        if len(args) != 1:
            raise ShellError("usage: read-image <file>")
        radio.session()
        image = radio.read_image()
        path = Path(args[0])
        try:
            path.write_bytes(image)
        except OSError as exc:
            raise ShellError(f"write file failed: {exc}") from exc
        out(f"ok read-image {path} {len(image)}")
        return True
    if cmd == "write-stream":
        if len(args) != 2 or args[1].lower() != "confirm":
            raise ShellError("usage: write-stream <file> confirm")
        path = Path(args[0])
        try:
            data = path.read_bytes()
        except OSError as exc:
            raise ShellError(f"read file failed: {exc}") from exc
        radio.session()
        radio.write_stream(data)
        out(f"ok write-stream {path} {len(data)}")
        return True
    if cmd == "end":
        radio.write(b"E")
        out("ok end")
        return True
    if cmd == "raw":
        if not args:
            raise ShellError("usage: raw <hex> [nbytes]")
        data = parse_hex(args[0])
        nbytes = parse_int(args[1]) if len(args) > 1 else None
        if len(args) > 2:
            raise ShellError("usage: raw <hex> [nbytes]")
        radio.write(data)
        if nbytes is None:
            out(f"ok raw wrote {len(data)}")
        else:
            resp = radio.read_exact(nbytes)
            out(f"ok raw {len(data)} -> {nbytes}")
            out(hex_line(resp))
        return True

    raise ShellError(f"unknown command: {cmd} (try help)")


def main(argv: list[str]) -> int:
    radio = Radio()
    if argv:
        # Optional: first arg is the port so scripts can skip the port line.
        radio.port_name = argv[0]
    interactive = sys.stdin.isatty()
    failed = 0
    try:
        while True:
            if interactive:
                print("rt950> ", end="", file=sys.stderr, flush=True)
            try:
                line = sys.stdin.readline()
            except KeyboardInterrupt:
                print("", file=sys.stderr)
                err("interrupted")
                return 130
            if line == "":
                break
            # Strip comments and whitespace. Ignore blank lines.
            raw = line.split("#", 1)[0].strip()
            if not raw:
                continue
            try:
                if not dispatch(radio, raw):
                    break
            except ShellError as exc:
                failed += 1
                err(str(exc))
            except Exception as exc:  # noqa: BLE001 — never crash the shell
                failed += 1
                err(f"internal: {type(exc).__name__}: {exc}")
    finally:
        try:
            radio.close()
        except Exception as exc:  # noqa: BLE001
            err(f"close on exit: {exc}")
            failed += 1
    return 1 if failed else 0


if __name__ == "__main__":
    try:
        raise SystemExit(main(sys.argv[1:]))
    except BrokenPipeError:
        # Downstream closed stdout; not a protocol failure.
        try:
            sys.stdout.close()
        except Exception:
            pass
        raise SystemExit(0)
    except KeyboardInterrupt:
        err("interrupted")
        raise SystemExit(130)
    except Exception as exc:  # noqa: BLE001
        err(f"fatal: {type(exc).__name__}: {exc}")
        raise SystemExit(1)
