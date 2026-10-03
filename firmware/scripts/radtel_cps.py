#!/usr/bin/env python3
"""Scriptable RT-950 / RT-950 Pro codeplug shell (CPS serial path).

Reads commands from stdin. Results go to stdout. All errors go to stderr.
Exceptions are caught per command so a bad line does not kill the shell.

Codeplug I/O and, with `flash … commit`, the EnUPDATE firmware writer
in radtel_flash.py. There is no firmware read. This speaks the
codeplug protocol captured from OEM CPS:

  PROGRAMBT9000U -> 0x06
  F -> 16-byte info
  M -> model string (e.g. "RT-950")
  SEND + 21 parameter bytes -> 0x06
  Read:  'R' + addr16_be + len   -> echo + payload
  Write: raw stream in 100-byte groups, each ACKed 0x06, then 'E'
  Boot picture: 'D', then A5 frames (150 × 1024 RGB565) and 'Over'

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

import json
import os
import shlex
import subprocess
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
SCRIPT_DIR = Path(__file__).resolve().parent
DEFAULT_CPS_EXE = Path.home() / (
    "Applications/Radtel950Pro/drive_c/Program Files (x86)/RT-950PRO_CPS/BT-RT950PRO_CPS.exe"
)
DAT_HELPER = SCRIPT_DIR / "RadtelDat.exe"


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

# Boot picture, from usbmon-bootpic-20261003-050924 (OEM Import Image).
BOOT_WIDTH = 240
BOOT_HEIGHT = 320
BOOT_PAGES = 150
BOOT_PAGE_BYTES = 1024
BOOT_PIXELS = BOOT_WIDTH * BOOT_HEIGHT * 2  # 153600, little-endian RGB565


def crc16_xmodem(data: bytes) -> int:
    """CRC-16/XMODEM. The radio covers every byte after the leading 0xA5."""
    crc = 0
    for byte in data:
        crc ^= byte << 8
        for _ in range(8):
            if crc & 0x8000:
                crc = ((crc << 1) ^ 0x1021) & 0xFFFF
            else:
                crc = (crc << 1) & 0xFFFF
    return crc


def a5_frame(after_a5: bytes) -> bytes:
    crc = crc16_xmodem(after_a5)
    return b"\xa5" + after_a5 + crc.to_bytes(2, "big")


# Setup frames the CPS sent before page 0. The 0x4504 field and the
# 00 00 09 00 / 00 03 payloads were constant in this capture; the radio
# echoed the field and answered 0x59. A second image is needed before
# treating them as anything but these bytes.
BOOT_SETUP = (
    a5_frame(b"\x02\x00\x00\x00\x07PROGRAM"),
    a5_frame(b"\x03\x00\x00\x00\x04\x00\x00\x09\x00"),
    a5_frame(bytes.fromhex("0445040006000009000003")),
)
BOOT_OVER = a5_frame(b"\x06\x00\x00\x00\x04Over")


def boot_page_frame(index: int, payload: bytes) -> bytes:
    if not 0 <= index < BOOT_PAGES:
        raise ShellError(f"boot page out of range: {index}")
    if len(payload) != BOOT_PAGE_BYTES:
        raise ShellError(f"boot page must be {BOOT_PAGE_BYTES} bytes, got {len(payload)}")
    after = b"\x57" + index.to_bytes(2, "big") + BOOT_PAGE_BYTES.to_bytes(2, "big") + payload
    return a5_frame(after)


def bmp_to_rgb565_le(path: Path) -> bytes:
    """24-bit 240×320 BMP → little-endian RGB565, top row first.

    OEM CPS rejects any other size. A positive BMP height is stored
    bottom-up; the radio wants the top row first (checked against the
    wizard capture, 153600/153600 bytes).
    """
    try:
        data = path.read_bytes()
    except OSError as exc:
        raise ShellError(f"read file failed: {exc}") from exc
    if len(data) < 54 or data[:2] != b"BM":
        raise ShellError(f"not a BMP: {path}")
    pixel_off = int.from_bytes(data[10:14], "little")
    dib = int.from_bytes(data[14:18], "little")
    if dib != 40:
        raise ShellError("boot picture needs a 40-byte BMP info header")
    width = int.from_bytes(data[18:22], "little", signed=True)
    height = int.from_bytes(data[22:26], "little", signed=True)
    planes = int.from_bytes(data[26:28], "little")
    bpp = int.from_bytes(data[28:30], "little")
    compression = int.from_bytes(data[30:34], "little")
    if (
        width != BOOT_WIDTH
        or abs(height) != BOOT_HEIGHT
        or planes != 1
        or bpp != 24
        or compression != 0
    ):
        raise ShellError(
            "boot picture must be an uncompressed 24-bit "
            f"{BOOT_WIDTH}x{BOOT_HEIGHT} BMP, got {width}x{height} {bpp}bpp"
        )
    stride = (BOOT_WIDTH * 3 + 3) & ~3
    need = pixel_off + stride * BOOT_HEIGHT
    if pixel_off < 54 or len(data) < need:
        raise ShellError(f"BMP is truncated: {path}")
    bottom_up = height > 0
    rows = range(BOOT_HEIGHT - 1, -1, -1) if bottom_up else range(BOOT_HEIGHT)
    pixels = bytearray()
    for row_index in rows:
        start = pixel_off + row_index * stride
        row = data[start : start + BOOT_WIDTH * 3]
        for i in range(0, BOOT_WIDTH * 3, 3):
            blue, green, red = row[i], row[i + 1], row[i + 2]
            value = ((red & 0xF8) << 8) | ((green & 0xFC) << 3) | (blue >> 3)
            pixels.append(value & 0xFF)
            pixels.append((value >> 8) & 0xFF)
    if len(pixels) != BOOT_PIXELS:
        raise ShellError(f"internal: RGB565 length {len(pixels)}")
    return bytes(pixels)


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
        self.cps_exe = Path(os.environ.get("RT950_CPS_EXE", str(DEFAULT_CPS_EXE)))

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

    def expect_boot_status(self, command: int, field: int) -> None:
        """A5 status: command, echoed field, length 1, payload 0x59, XMODEM CRC."""
        resp = self.read_exact(9, timeout_s=3.0)
        if resp[0] != 0xA5 or crc16_xmodem(resp[1:-2]) != int.from_bytes(resp[-2:], "big"):
            raise ShellError(f"bad boot-picture reply: {hex_line(resp)}")
        body = resp[1:-2]
        got_field = int.from_bytes(body[1:3], "big")
        if body[0] != command or got_field != field or body[3:6] != b"\x00\x01\x59":
            raise ShellError(f"boot picture rejected: {hex_line(resp)}")

    def upload_boot_picture(self, pixels: bytes) -> None:
        """Send one 240×320 picture. Port must already be open.

        Matches the OEM import: PROGRAMBT9000U, 'D', close/reopen, three
        setup frames, 150 page frames, then 'Over' (no reply expected).
        """
        if len(pixels) != BOOT_PIXELS:
            raise ShellError(f"boot pixels must be {BOOT_PIXELS} bytes, got {len(pixels)}")
        self.handshake()
        self.write(b"D")
        # CPS drops the COM handle after 'D' (usbmon shows the bulk URBs
        # cancelled) and opens the port again for the A5 session.
        self.close()
        self.open()
        for index, frame in enumerate(BOOT_SETUP):
            self.write(frame)
            field = 0 if index < 2 else 0x4504
            self.expect_boot_status(frame[1], field)
        for page in range(BOOT_PAGES):
            start = page * BOOT_PAGE_BYTES
            self.write(boot_page_frame(page, pixels[start : start + BOOT_PAGE_BYTES]))
            self.expect_boot_status(0x57, page)
            if page + 1 in (1, 50, 100, BOOT_PAGES):
                print(
                    f"boot picture {page + 1}/{BOOT_PAGES}",
                    file=sys.stderr,
                    flush=True,
                )
        self.write(BOOT_OVER)


def run_dat_helper(radio: Radio, args: list[str], timeout_s: float, capture: bool = False) -> str:
    """Run RadtelDat.exe. OEM .dat I/O uses the CPS assembly's own codec."""
    if not DAT_HELPER.is_file():
        raise ShellError(f"missing {DAT_HELPER} (mcs -sdk:4.5 -out:RadtelDat.exe RadtelDat.cs)")
    if not radio.cps_exe.is_file():
        raise ShellError(f"CPS exe not found: {radio.cps_exe}")
    if radio.ser is not None:
        # Mono opens the tty itself; don't hold it here.
        radio.close()
    cmd = ["mono", str(DAT_HELPER), *args]
    try:
        proc = subprocess.run(
            cmd,
            check=False,
            capture_output=True,
            text=True,
            timeout=timeout_s,
        )
    except subprocess.TimeoutExpired as exc:
        raise ShellError(f"dat helper timed out after {timeout_s:.0f}s") from exc
    except OSError as exc:
        raise ShellError(f"failed to run mono: {exc}") from exc
    if proc.returncode != 0:
        tail = (proc.stderr or proc.stdout or "").strip().splitlines()
        detail = tail[-1] if tail else f"exit {proc.returncode}"
        if detail.startswith("error:"):
            detail = detail[len("error:") :].strip()
        # The shell prints this once. Repeating the helper's error line here
        # made the UI log show the same failure twice.
        if proc.stderr:
            for line in proc.stderr.splitlines():
                stripped = line.strip()
                if stripped and not stripped.startswith("error:"):
                    print(stripped, file=sys.stderr, flush=True)
        raise ShellError(detail)
    if proc.stderr:
        for line in proc.stderr.splitlines():
            if line.strip():
                print(line, file=sys.stderr, flush=True)
    if capture:
        return proc.stdout
    if proc.stdout:
        sys.stdout.write(proc.stdout)
        if not proc.stdout.endswith("\n"):
            sys.stdout.write("\n")
        sys.stdout.flush()
    return ""


def normalize_callsign(text: str) -> str:
    """APRS callsign as the radio stores it: 1–6 ASCII letters or digits.

    SetCallSign_StrToHex copies at most 6 bytes and skips an empty string,
    which would leave the previous bytes in the packed image.
    """
    sign = text.strip().upper()
    if not sign or len(sign) > 6 or any(not ch.isascii() or not ch.isalnum() for ch in sign):
        raise ShellError(
            "callsign must be 1 to 6 letters or digits (the radio stores 6 ASCII bytes)"
        )
    return sign


def run_callsign(radio: Radio, args: list[str]) -> None:
    if len(args) not in (1, 2):
        raise ShellError("usage: callsign <file.dat> [sign]")
    path = Path(args[0])
    if not path.is_file():
        raise ShellError(f"not a file: {path}")
    raw = run_dat_helper(
        radio,
        ["export", str(radio.cps_exe), str(path)],
        timeout_s=60,
        capture=True,
    )
    try:
        doc = json.loads(raw)
    except json.JSONDecodeError as exc:
        raise ShellError(f"dat export was not JSON: {exc}") from exc
    aprs = doc.get("aprsData")
    if not isinstance(aprs, dict) or "tB_CallSign" not in aprs:
        raise ShellError("codeplug has no aprsData.tB_CallSign")
    if len(args) == 1:
        out(f"ok callsign {aprs.get('tB_CallSign')}")
        return
    sign = normalize_callsign(args[1])
    aprs["tB_CallSign"] = sign
    tmp_json = path.with_name(path.name + ".callsign.json")
    tmp_dat = path.with_name(path.name + ".callsign.dat")
    try:
        tmp_json.write_text(json.dumps(doc), encoding="utf-8")
        run_dat_helper(
            radio,
            ["import", str(radio.cps_exe), str(path), str(tmp_json), str(tmp_dat)],
            timeout_s=60,
            capture=True,
        )
        if not tmp_dat.is_file() or tmp_dat.stat().st_size == 0:
            raise ShellError("dat import wrote an empty file")
        os.replace(tmp_dat, path)
    finally:
        tmp_json.unlink(missing_ok=True)
        tmp_dat.unlink(missing_ok=True)
    out(f"ok callsign {sign}")


def _load_flasher():
    if str(SCRIPT_DIR) not in sys.path:
        sys.path.insert(0, str(SCRIPT_DIR))
    try:
        import radtel_flash
    except ImportError as exc:
        raise ShellError(f"cannot load radtel_flash.py: {exc}") from exc
    return radtel_flash


def run_flash(radio: Radio, args: list[str]) -> str:
    """Dry-run a firmware image unless the line includes `commit`.

    `commit` is the only token that sends UPDATE and the 0xAA packets.
    `confirm` is rejected so a codeplug write habit cannot flash the radio.
    """
    if not args or len(args) > 3:
        raise ShellError("usage: flash <image> [raw] [commit]")
    raw = False
    commit = False
    for token in args[1:]:
        if token.lower() == "raw":
            if raw:
                raise ShellError("usage: flash <image> [raw] [commit]")
            raw = True
        elif token.lower() == "commit":
            if commit:
                raise ShellError("usage: flash <image> [raw] [commit]")
            commit = True
        else:
            raise ShellError("usage: flash <image> [raw] [commit]  (`confirm` does not flash)")
    flasher = _load_flasher()
    try:
        plan = flasher.prepare_flash(Path(args[0]), treat_as_raw=raw)
    except ValueError as exc:
        raise ShellError(str(exc)) from exc
    held = radio.ser is not None and getattr(radio.ser, "is_open", False)
    if not commit:
        if held:
            port_line = f"port {radio.port_name} held by this shell"
        else:
            try:
                flasher.probe_port(radio.port_name, radio.baud)
            except RuntimeError as exc:
                raise ShellError(str(exc)) from exc
            port_line = f"port {radio.port_name} open-ok"
        return "\n".join(
            (
                flasher.describe_plan(plan),
                port_line,
                "not sent",
            )
        )
    if held:
        radio.close()
    try:
        flasher.flash_prepared(
            plan,
            radio.port_name,
            radio.baud,
            progress=lambda message: print(message, file=sys.stderr, flush=True),
        )
    except (flasher.ProtocolError, RuntimeError, ValueError) as exc:
        raise ShellError(f"flash failed: {exc}") from exc
    return f"ok flash {plan.path} {plan.total_chunks}"


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
  dat-info <file.dat>        OEM CPS .dat summary (no radio)
  dat-export <file.dat>      OEM .dat -> JSON on stdout (UI document)
  dat-import <template.dat> <file.json> <outfile.dat>
                             overlay JSON onto template, write OEM .dat
  read-dat <outfile.dat> [template.dat]
                             pull radio into an OEM .dat
  write-dat <file.dat> confirm
                             push an OEM .dat (e.g. RT-950PRO_CPS_NI.dat)
  boot-picture <file.bmp> confirm
                             24-bit 240x320 BMP -> boot image (open the port first)
  callsign <file.dat> [sign]
                             print or set aprsData.tB_CallSign (max 6 letters/digits).
                             Does not write the radio. Blank is rejected.
  flash <image.btf> [raw] [commit]
                             dry-run checks the image and opens the port.
                             `commit` runs the EnUPDATE flash. `confirm` does not.
  cps-exe <path>             override BT-RT950PRO_CPS.exe location
  end                        send 'E'
  raw <hex> [nbytes]         write hex; if nbytes set, read that many and print
  quit | exit
"""


def dispatch(radio: Radio, line: str) -> bool:
    """Run one command. Return False to exit the shell."""
    parts = shlex.split(line, posix=True)
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
    if cmd == "cps-exe":
        if len(args) != 1:
            raise ShellError("usage: cps-exe <path>")
        radio.cps_exe = Path(args[0])
        if not radio.cps_exe.is_file():
            raise ShellError(f"not a file: {radio.cps_exe}")
        out(f"ok cps-exe {radio.cps_exe}")
        return True
    if cmd == "callsign":
        run_callsign(radio, args)
        return True
    if cmd == "dat-info":
        if len(args) != 1:
            raise ShellError("usage: dat-info <file.dat>")
        run_dat_helper(radio, ["info", str(radio.cps_exe), args[0]], timeout_s=60)
        return True
    if cmd == "dat-export":
        if len(args) != 1:
            raise ShellError("usage: dat-export <file.dat>")
        run_dat_helper(radio, ["export", str(radio.cps_exe), args[0]], timeout_s=60)
        return True
    if cmd == "dat-import":
        if len(args) != 3:
            raise ShellError("usage: dat-import <template.dat> <file.json> <outfile.dat>")
        run_dat_helper(
            radio,
            ["import", str(radio.cps_exe), args[0], args[1], args[2]],
            timeout_s=60,
        )
        return True
    if cmd == "read-dat":
        if len(args) not in (1, 2):
            raise ShellError("usage: read-dat <outfile.dat> [template.dat]")
        helper_args = [
            "read",
            str(radio.cps_exe),
            radio.port_name,
            str(radio.baud),
            args[0],
        ]
        if len(args) == 2:
            helper_args.append(args[1])
        run_dat_helper(radio, helper_args, timeout_s=180)
        return True
    if cmd == "write-dat":
        if len(args) != 2 or args[1].lower() != "confirm":
            raise ShellError("usage: write-dat <file.dat> confirm")
        run_dat_helper(
            radio,
            ["write", str(radio.cps_exe), radio.port_name, str(radio.baud), args[0]],
            timeout_s=180,
        )
        return True
    if cmd == "boot-picture":
        if len(args) != 2 or args[1].lower() != "confirm":
            raise ShellError("usage: boot-picture <file.bmp> confirm")
        pixels = bmp_to_rgb565_le(Path(args[0]))
        radio.upload_boot_picture(pixels)
        out(f"ok boot-picture {args[0]} {BOOT_PAGES}")
        return True
    if cmd == "flash":
        out(run_flash(radio, args))
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
