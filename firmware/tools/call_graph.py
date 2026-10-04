#!/usr/bin/env python3
"""Call graph of the V0.29 functions that load a peripheral base.

Reads the decompile and firmware/docs/function-xrefs.tsv. Writes
firmware/docs/call-graph.md. Does not rename functions.
"""

import re
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
DECOMP = ROOT / "re/firmware/RE/v0.29/decompile"
XREFS = ROOT / "firmware/docs/function-xrefs.tsv"
OUT = ROOT / "firmware/docs/call-graph.md"
CALL_RE = re.compile(r"\bFUN_([0-9a-f]{8})\b", re.I)

# Wait helpers are the same sequence as the status calls but do not load
# FLASH_REG themselves, so the xref table does not list them.
EXTRA = {
    "0800ec3c": "flash bank1 wait",
    "0800ec5c": "flash bank2 wait",
    "0800ec7c": "flash spim wait",
    "0800ec9c": "flash bank1 wait",
}


def main():
    blocks = defaultdict(set)
    names = {}
    for line in XREFS.read_text().splitlines()[1:]:
        addr, name, kinds, targets = line.split("\t")
        key = addr[2:]
        names[key] = name
        if "register" not in kinds.split(","):
            continue
        for target in targets.split(","):
            if "_BASE" in target:
                blocks[target.split("+", 1)[0]].add(key)
    peripheral = set()
    for funcs in blocks.values():
        peripheral.update(funcs)
    peripheral.update(EXTRA)

    callers = defaultdict(set)
    callees = defaultdict(set)
    for path in DECOMP.glob("*.c"):
        text = path.read_text(errors="replace")
        owner = path.name.split("_", 1)[0].lower()
        for match in CALL_RE.finditer(text):
            callee = match.group(1).lower()
            if callee == owner:
                continue
            callers[callee].add(owner)
            callees[owner].add(callee)

    lines = [
        "# V0.29 peripheral call graph",
        "",
        "A function is in this graph when `firmware/docs/function-xrefs.tsv` shows it loading an AT32 `*_BASE`. Edges are `FUN_` calls in the Ghidra text. The four flash wait routines are included because `FUN_0800eb84` calls them; they do not load `FLASH_REG` themselves.",
        "",
        f"{len(peripheral)} functions. {sum(1 for src in peripheral for dst in callees[src] if dst in peripheral)} calls stay inside the set.",
        "",
        "`FUN_0801a680` loads `CRM_BASE` and is not ported. Its pool word `0x0802C92E` is not the divider table in `crm_clocks_freq_get`.",
        "",
        "## Inside the peripheral set",
        "",
    ]
    for block, funcs in sorted(blocks.items(), key=lambda item: (-len(item[1]), item[0])):
        lines.append(f"### `{block}`")
        lines.append("")
        for func in sorted(funcs):
            inside = sorted(callees[func] & peripheral)
            called = ", ".join(f"`FUN_{item}`" for item in inside) if inside else "none in this set"
            lines.append(f"- `FUN_{func}` calls {called}")
        lines.append("")
    lines += ["## Flash and clock callers", ""]
    focus = [
        "0800eaf0",
        "0800eb18",
        "0800eb40",
        "0800eb6c",
        "0800eb84",
        "0800ec20",
        "0800ec3c",
        "0800ec5c",
        "0800ec7c",
        "0800ec9c",
        "0801a5dc",
        "0801a5f4",
        "0801a610",
        "0801a62c",
        "0801a648",
        "0801a664",
        "0801a680",
        "0801a7a0",
        "08020440",
        "08021e8c",
    ]
    for func in focus:
        srcs = sorted(callers[func])
        shown = ", ".join(f"`FUN_{item}`" for item in srcs) if srcs else "no caller in the decompile"
        note = f" ({EXTRA[func]})" if func in EXTRA else ""
        lines.append(f"- `FUN_{func}`{note}: {shown}")
    lines.append("")
    OUT.write_text("\n".join(lines) + "\n")
    print(f"wrote {OUT} functions {len(peripheral)}")


if __name__ == "__main__":
    main()
