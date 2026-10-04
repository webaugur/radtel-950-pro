#!/usr/bin/env python3
"""Split the V0.29 Ghidra export into firmware/recovered and write the catalog.

Names are applied only for the two CRC loops and the OEM reset stub. Everything
else keeps fun_ plus the address. Re-run from the repo root after a new export.
"""

from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXPORT = ROOT / "re/firmware/RE/v0.29/decompile"
RECOVERED = ROOT / "firmware/recovered"
CATALOG = ROOT / "firmware/docs/function-catalog.md"

SPECIAL = {
    "0800a878": (
        "crc",
        "crc16_xmodem_buffer",
        "CRC-16/XMODEM over a caller buffer. Polynomial 0x1021, init 0. "
        "The Thumb code leaves the residue in r0. The decompiler dropped the return.",
    ),
    "08008ad8": (
        "crc",
        "crc16_xmodem_from_reader",
        "Same CRC-16 loop as crc16_xmodem_buffer, but each byte comes from FUN_080217d0. "
        "Calls around the loop take a literal 0x1000. The source of the bytes is not named.",
    ),
    "080032a0": (
        "cpu",
        "oem_reset_stub",
        "The OEM reset vector (16 bytes). Ghidra's C uses undefined incoming registers. "
        "This is not the AT32 startup linked by firmware/.",
    ),
}


def banner(addr: str, ghidra_name: str, size: str, title: str, detail: str) -> str:
    return (
        "/**\n"
        f" * @brief {title}\n"
        " *\n"
        f" * {detail}\n"
        " *\n"
        f" * @note V0.29 address 0x{addr}, Ghidra name {ghidra_name}, {size} bytes.\n"
        " *       Not linked into rt950-firmware.\n"
        " */\n"
    )


def main() -> None:
    rows = []
    for line in (EXPORT / "index.tsv").read_text().splitlines()[1:]:
        addr, name, size, status, filename = line.split("\t", 4)
        rows.append((addr, name, size, status, filename))

    if RECOVERED.exists():
        for path in RECOVERED.rglob("*.c"):
            path.unlink()

    catalog_rows = []
    for addr, name, size, status, filename in rows:
        body = (EXPORT / filename).read_text(errors="replace")
        if addr in SPECIAL:
            group, title, detail = SPECIAL[addr]
            out_name = f"{title}.c"
        else:
            group = f"unknown/{addr[:4]}"
            title = f"fun_{addr}"
            detail = "Unidentified. No string, register, or SDK match has been checked for this function."
            out_name = f"fun_{addr}.c"
        dest = RECOVERED / group / out_name
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_text(banner(addr, name, size, title, detail) + body)
        catalog_rows.append((addr, name, title, size, status, f"recovered/{group}/{out_name}"))

    lines = [
        "# V0.29 function catalog",
        "",
        "Generated from `re/firmware/RE/v0.29/decompile/index.tsv`. "
        "A longer note is kept only where the decompile itself identifies the routine. "
        "The rest are unidentified.",
        "",
        f"{len(catalog_rows)} functions. Status is `ok` when Ghidra produced C.",
        "",
        "## Identified",
        "",
        "### crc16_xmodem_buffer (`0x0800A878`)",
        "",
        "CRC-16/XMODEM over the buffer in the first argument for the length in the second. "
        "Polynomial `0x1021`, initial value 0, eight shifts per byte, high bit selects the xor. "
        "Disassembly ends with the residue in r0 and `pop {r4, r5, r6, r7, pc}`. "
        "The linked copy is `firmware/src/crc16.c`.",
        "",
        "### crc16_xmodem_from_reader (`0x08008AD8`)",
        "",
        "The same CRC, one byte at a time from `FUN_080217d0`, for `param_1` iterations. "
        "`FUN_08012ae2` and `FUN_08012ae6` run before and after with the literal `0x1000`. "
        "What they select is not identified. This function is not linked.",
        "",
        "### oem_reset_stub (`0x080032A0`)",
        "",
        "Sixteen bytes at the OEM reset vector. The decompiler output is not a startup routine. "
        "`firmware/` uses the AT32 vector at `0x08000000` instead.",
        "",
        "## All functions",
        "",
        "| Address | Ghidra | Name here | Bytes | File |",
        "| --- | --- | --- | --- | --- |",
    ]
    for addr, name, title, size, status, path in catalog_rows:
        lines.append(f"| `0x{addr}` | `{name}` | `{title}` | {size} | `{path}` |")
    lines.append("")
    CATALOG.write_text("\n".join(lines))
    print(f"wrote {len(catalog_rows)} functions")


if __name__ == "__main__":
    main()
