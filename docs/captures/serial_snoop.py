#!/usr/bin/env python3
"""Bidirectional serial proxy with hex log for RT-950 CPS capture.

Wine opens the PTY slave; we forward to the real USB serial device and log both
directions. Default baud 115200 (OEM CPS).

Usage:
  ./serial_snoop.py --device /dev/ttyUSB0 --link /tmp/radtel_snoop \\
      --log docs/captures/read-$(date +%Y%m%d-%H%M%S).log
"""

from __future__ import annotations

import argparse
import os
import pty
import select
import sys
import termios
import time
from datetime import datetime, timezone


def configure_serial(fd: int, baud: int = 115_200) -> None:
    attrs = termios.tcgetattr(fd)
    # iflag, oflag, cflag, lflag
    attrs[0] = 0
    attrs[1] = 0
    attrs[3] = 0
    attrs[2] = termios.CS8 | termios.CREAD | termios.CLOCAL
    speed = {
        9600: termios.B9600,
        19200: termios.B19200,
        38400: termios.B38400,
        57600: termios.B57600,
        115200: termios.B115200,
        230400: termios.B230400,
    }.get(baud, termios.B115200)
    attrs[4] = speed
    attrs[5] = speed
    attrs[6][termios.VMIN] = 0
    attrs[6][termios.VTIME] = 0
    termios.tcsetattr(fd, termios.TCSANOW, attrs)
    termios.tcflush(fd, termios.TCIOFLUSH)


def hexdump(data: bytes) -> str:
    return " ".join(f"{b:02X}" for b in data)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--device", default="/dev/ttyUSB0")
    ap.add_argument("--link", default="/tmp/radtel_snoop", help="PTY symlink Wine should open")
    ap.add_argument("--baud", type=int, default=115200)
    ap.add_argument("--log", required=True)
    args = ap.parse_args()

    os.makedirs(os.path.dirname(os.path.abspath(args.log)) or ".", exist_ok=True)

    master, slave = pty.openpty()
    slave_name = os.ttyname(slave)
    try:
        os.remove(args.link)
    except FileNotFoundError:
        pass
    os.symlink(slave_name, args.link)
    # Keep slave fd open so the PTY stays alive when Wine closes briefly.
    configure_serial(master, args.baud)

    radio = os.open(args.device, os.O_RDWR | os.O_NOCTTY | os.O_NONBLOCK)
    configure_serial(radio, args.baud)

    log = open(args.log, "w", buffering=1)
    started = datetime.now(timezone.utc).isoformat()
    log.write(f"# RT-950 serial snoop started {started}\n")
    log.write(f"# device={args.device} link={args.link} -> {slave_name} baud={args.baud}\n")
    log.write("# format: ISO8601 DIR LEN | HEX | ASCII\n")
    log.flush()
    print(f"snoop ready: Wine COM -> {args.link} -> {args.device}", flush=True)
    print(f"logging to {args.log}", flush=True)
    print("Press Ctrl+C to stop after the CPS Read finishes.", flush=True)

    def emit(direction: str, chunk: bytes) -> None:
        if not chunk:
            return
        ts = datetime.now(timezone.utc).isoformat()
        ascii_part = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
        line = f"{ts} {direction} {len(chunk):4d} | {hexdump(chunk)} | {ascii_part}\n"
        log.write(line)
        log.flush()
        print(line, end="", flush=True)

    try:
        while True:
            r, _, _ = select.select([master, radio], [], [], 1.0)
            if master in r:
                try:
                    data = os.read(master, 4096)
                except OSError:
                    data = b""
                if data:
                    emit("HOST>RADIO", data)
                    os.write(radio, data)
            if radio in r:
                try:
                    data = os.read(radio, 4096)
                except OSError:
                    data = b""
                if data:
                    emit("RADIO>HOST", data)
                    os.write(master, data)
    except KeyboardInterrupt:
        log.write(f"# stopped {datetime.now(timezone.utc).isoformat()}\n")
        print("\nsnoop stopped.", flush=True)
    finally:
        log.close()
        os.close(radio)
        os.close(master)
        os.close(slave)
        try:
            os.remove(args.link)
        except FileNotFoundError:
            pass
    return 0


if __name__ == "__main__":
    sys.exit(main())
