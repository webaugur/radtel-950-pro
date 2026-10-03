#!/usr/bin/env python3
"""Extract ASCII strings with flash addresses from a raw Cortex-M image."""
from __future__ import annotations

import csv
import sys
from pathlib import Path


def extract(data: bytes, base: int, min_len: int = 4):
    i = 0
    n = len(data)
    while i < n:
        if 32 <= data[i] < 127:
            j = i
            while j < n and 32 <= data[j] < 127:
                j += 1
            if j - i >= min_len:
                yield base + i, i, data[i:j].decode("ascii")
            i = j
        else:
            i += 1


def main() -> None:
    if len(sys.argv) < 3:
        print(f"Usage: {sys.argv[0]} firmware.bin out.csv [base]", file=sys.stderr)
        sys.exit(1)
    bin_path = Path(sys.argv[1])
    out_path = Path(sys.argv[2])
    base = int(sys.argv[3], 0) if len(sys.argv) > 3 else 0x08000000
    data = bin_path.read_bytes()
    out_path.parent.mkdir(parents=True, exist_ok=True)
    rows = list(extract(data, base))
    with out_path.open("w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["addr", "file_off", "string"])
        for addr, off, s in rows:
            w.writerow([f"0x{addr:08x}", f"0x{off:x}", s])
    print(f"Wrote {len(rows)} strings to {out_path}")


if __name__ == "__main__":
    main()
