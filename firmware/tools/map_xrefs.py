#!/usr/bin/env python3
"""Resolve DAT_ pool slots in the V0.29 decompile to registers, strings, and RAM.

Reads re/firmware/RE/v0.29/decompile and decrypted_v0.29.bin. Writes
firmware/docs/function-xrefs.tsv and firmware/docs/xrefs.md.
Does not rename functions.
"""

import bisect
import re
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
HEADER = ROOT / "re/sdk/reference-project/radtel/libraries/cmsis/cm4/device_support/at32f403a_407.h"
IMAGE = ROOT / "re/firmware/decrypted_v0.29.bin"
INDEX = ROOT / "re/firmware/RE/v0.29/decompile/index.tsv"
DECOMP = ROOT / "re/firmware/RE/v0.29/decompile"
TSV = ROOT / "firmware/docs/function-xrefs.tsv"
MD = ROOT / "firmware/docs/xrefs.md"
STRINGS = ROOT / "firmware/docs/strings.md"
STRINGS_TSV = ROOT / "firmware/docs/strings.tsv"

FLASH = 0x08000000
RAM = 0x20000000
RAM_END = 0x20018000
# RM Rev 2.07: user system data is 48 bytes at 0x1FFFF800. The struct in
# at32f403a_407_flash.h is the same 48 bytes. 0x1FFFF830..0x1FFFFFFF is reserved.
# FLASH_REG crc_chkr is at offset 0xF8, so that block is larger than a GPIO window.
BLOCK_SPAN = {
    "USD_BASE": 0x30,
    "FLASH_REG_BASE": 0x100,
}
# core_cm4.h SCB_Type offsets, added to SCB_BASE 0xE000ED00.
PPB_NAMES = {
    0xE000ED00: "SCB.CPUID",
    0xE000ED04: "SCB.ICSR",
    0xE000ED08: "SCB.VTOR",
    0xE000ED0C: "SCB.AIRCR",
    0xE000ED10: "SCB.SCR",
    0xE000ED14: "SCB.CCR",
    0xE000ED24: "SCB.SHCSR",
    0xE000ED88: "SCB.CPACR",
    0xE000E010: "SysTick",
    0xE000E100: "NVIC",
}
PARENTS = {
    "FLASH_BASE",
    "SPIM_FLASH_BASE",
    "SRAM_BASE",
    "PERIPH_BASE",
    "APB1PERIPH_BASE",
    "APB2PERIPH_BASE",
    "AHBPERIPH_BASE",
    "XMC_REG_BASE",
}
DAT_RE = re.compile(r"DAT_([0-9a-fA-F]{8})")


def load_bases():
    values = {}
    for line in HEADER.read_text(errors="replace").splitlines():
        match = re.match(r"#define\s+(\w+_BASE)\s+\(\(uint32_t\)(0x[0-9A-Fa-f]+)\)", line)
        if match:
            values[match.group(1)] = int(match.group(2), 16)
            continue
        match = re.match(r"#define\s+(\w+_BASE)\s+\((\w+)\s*\+\s*(0x[0-9A-Fa-f]+)\)", line)
        if match and match.group(2) in values and match.group(1) not in values:
            values[match.group(1)] = values[match.group(2)] + int(match.group(3), 16)
    leaves = [(name, addr) for name, addr in values.items() if name not in PARENTS]
    leaves.sort(key=lambda item: item[1])
    return leaves


def read_cstr(image, offset, covered):
    if offset < 0 or offset >= len(image) or image[offset] < 0x20 or image[offset] > 0x7E:
        return None
    start = offset
    while start > 0 and 0x20 <= image[start - 1] <= 0x7E:
        start -= 1
        if offset - start > 80:
            return None
    end = offset
    while end < len(image) and 0x20 <= image[end] <= 0x7E:
        end += 1
        if end - start > 80:
            return None
    if end >= len(image) or image[end] != 0 or end - start < 4:
        return None
    if any(covered[start:end]):
        return None
    text = image[start:end].decode("ascii")
    if not any(ch.isalpha() for ch in text):
        return None
    return text, start


def classify(word, image, functions, bases, base_addrs, covered):
    if RAM <= word < RAM_END:
        return f"ram+0x{word - RAM:04x}"
    if 0x1FFFF7E0 <= word < 0x1FFFF7E2:
        return "fsize"
    if 0x1FFFF7E8 <= word < 0x1FFFF7F4:
        return f"uid+0x{word - 0x1FFFF7E8:x}"
    if 0x1FFFB000 <= word < 0x1FFFB000 + 0x4000:
        return f"bootmem+0x{word - 0x1FFFB000:x}"
    if 0x1FFFF830 <= word <= 0x1FFFFFFF:
        return f"reserved-info:0x{word:08x}"
    thumb = word & ~1
    if FLASH <= thumb < FLASH + len(image) and (word & 1):
        if thumb in functions:
            return f"code:{functions[thumb]}"
        off = thumb - FLASH
        if covered[off]:
            return f"code:0x{thumb:08x}"
        # Thumb bit set, and the address is not a function. The other pool
        # strings in this image are even. Do not call this one a string.
        return f"flash+0x{off:x}"
    off = word - FLASH if FLASH <= word < FLASH + len(image) else None
    if off is not None:
        found = read_cstr(image, off, covered)
        if found:
            text, _start = found
            return "str:" + text.replace("\t", " ")
        return f"flash+0x{off:x}"
    idx = bisect.bisect_right(base_addrs, word) - 1
    if idx >= 0:
        name, base = bases[idx]
        nxt = bases[idx + 1][1] if idx + 1 < len(bases) else base + 0x400
        span = BLOCK_SPAN.get(name, 0x400)
        if base <= word < nxt and word - base < span:
            return f"{name}+0x{word - base:x}"
    if word in PPB_NAMES:
        return PPB_NAMES[word]
    if 0xE000ED18 <= word < 0xE000ED24:
        return f"SCB.SHP+0x{word - 0xE000ED18:x}"
    if 0xE000E000 <= word < 0xE0100000:
        return f"arm-ppb+0x{word - 0xE000E000:x}"
    return None


def ascii_immediate(word):
    raw = word.to_bytes(4, "little")
    if raw[0] == 0 or not all(b == 0 or 0x20 <= b <= 0x7E for b in raw):
        return None
    text = raw.split(b"\0", 1)[0].decode("ascii")
    if len(text) < 2 or not any(ch.isalpha() or ch == "%" for ch in text):
        return None
    return text


def main():
    image = IMAGE.read_bytes()
    bases = load_bases()
    base_addrs = [addr for _, addr in bases]
    functions = {}
    order = []
    covered = bytearray(len(image))
    for line in INDEX.read_text().splitlines()[1:]:
        addr_s, name, size, status, filename = line.split("\t", 4)
        start = int(addr_s, 16)
        functions[start] = name
        order.append((addr_s, name, filename))
        off = start - FLASH
        for i in range(max(0, off), min(len(image), off + int(size))):
            covered[i] = 1

    periph_funcs = defaultdict(set)
    string_funcs = defaultdict(set)
    string_locs = []
    code_funcs = defaultdict(set)
    ram_funcs = defaultdict(set)
    other_funcs = defaultdict(set)
    imm_funcs = defaultdict(set)
    KNOWN_IMM = {
        0x7F800000: "float +inf",
        0x7FC00000: "float NaN",
        0x7F7FFFFF: "float max finite",
        0x7FF00000: "double +inf high word",
        0x7FF80000: "double NaN high word",
        0x7FEFFFFF: "double max finite high word",
        0x186A0: "100000",
    }
    rows = []
    unresolved = 0
    for addr_s, name, filename in order:
        text = (DECOMP / filename).read_text(errors="replace")
        seen = []
        kinds = []
        for slot in dict.fromkeys(DAT_RE.findall(text)):
            slot_addr = int(slot, 16)
            off = slot_addr - FLASH
            if off < 0 or off + 4 > len(image):
                unresolved += 1
                continue
            word = int.from_bytes(image[off:off + 4], "little")
            kind = classify(word, image, functions, bases, base_addrs, covered)
            if kind and kind.startswith("str:"):
                found = read_cstr(image, word - FLASH, covered)
                if found:
                    string_locs.append((found[0], FLASH + found[1], slot_addr, name))
            if kind is None:
                if word in KNOWN_IMM:
                    kind = "imm:" + KNOWN_IMM[word]
                else:
                    unresolved += 1
                    if word != 0:
                        imm_funcs[word].add(name)
                    continue
            if kind in seen:
                continue
            seen.append(kind)
            if kind.startswith("str:"):
                string_funcs[kind[4:]].add(name)
                kinds.append("string")
            elif "_BASE+0x" in kind:
                periph_funcs[kind.split("+", 1)[0]].add(name)
                kinds.append("register")
            elif kind.startswith("ram+"):
                ram_funcs[kind].add(name)
                kinds.append("ram")
            elif kind.startswith("code:"):
                code_funcs[kind].add(name)
                kinds.append("code")
            elif kind.startswith("imm:"):
                imm_funcs[word].add(name)
                kinds.append("immediate")
            else:
                other_funcs[kind].add(name)
                kinds.append("other")
        rows.append((addr_s, name, ",".join(seen), ",".join(dict.fromkeys(kinds))))

    TSV.parent.mkdir(parents=True, exist_ok=True)
    with TSV.open("w") as handle:
        handle.write("address\tfunction\tkinds\ttargets\n")
        for addr_s, name, targets, kinds in rows:
            handle.write(f"0x{addr_s}\t{name}\t{kinds}\t{targets}\n")

    with_reg = sum(1 for *_, kinds in rows if "register" in kinds.split(","))
    with_str = sum(1 for *_, kinds in rows if "string" in kinds.split(","))
    with_ram = sum(1 for *_, kinds in rows if "ram" in kinds.split(","))
    with_any = sum(1 for *_, targets in rows if targets)
    lines = [
        "# V0.29 register, string, and data map",
        "",
        "Each `DAT_08xxxxxx` in the decompile is a literal-pool slot. The value is the little-endian word at that address in `decrypted_v0.29.bin`. A register match is the highest AT32 `*_BASE` in `at32f403a_407.h` that is at or below the word and still below the next base. Function names are the Ghidra names. This file does not rename them.",
        "",
        f"Pool values resolved for {with_any} of {len(rows)} functions. {unresolved} slots were not a pointer into flash, RAM, an AT32 block, or a named ARM system register. {with_reg} functions load a peripheral address. {with_str} load a string. {with_ram} load a RAM address.",
        "",
        "The full per-function list is `firmware/docs/function-xrefs.tsv`.",
        "",
        "## Registers",
        "",
        "The offset after the block name is `word - BASE`. It is a byte offset into that block, not a field name from the driver struct. The table is every AT32 block a pool word names.",
        "",
        "| Block | Functions |",
        "| --- | --- |",
    ]
    for block, funcs in sorted(periph_funcs.items(), key=lambda item: (-len(item[1]), item[0])):
        lines.append(f"| `{block}` | {len(funcs)} |")
    lines += ["", "Functions for each block are listed here when there are 40 or fewer. Larger sets are counted only. The TSV has every function.", ""]
    for block, funcs in sorted(periph_funcs.items(), key=lambda item: (-len(item[1]), item[0])):
        if len(funcs) > 40:
            continue
        names = ", ".join(f"`{item}`" for item in sorted(funcs))
        lines.append(f"- `{block}`: {names}")
    lines += ["", "## Strings", ""]
    if not string_funcs:
        lines.append("No pool word points at a null-terminated ASCII string of at least 2 characters.")
    else:
        lines.append("| String | Functions |")
        lines.append("| --- | --- |")
        for text, funcs in sorted(string_funcs.items(), key=lambda item: (-len(item[1]), item[0])):
            shown = text.replace("|", "\\|")
            lines.append(f"| `{shown}` | {len(funcs)} |")
        lines.append("")
        for text, funcs in sorted(string_funcs.items(), key=lambda item: (-len(item[1]), item[0])):
            if len(funcs) > 20:
                continue
            names = ", ".join(f"`{item}`" for item in sorted(funcs))
            lines.append(f"- `{text}`: {names}")
        lines.append("")
        lines.append("The pool word often points into the string rather than at its first byte. `firmware/docs/strings.md` lists the on-disk address of every string in the upper table and the English phrases embedded lower in the image. Most of those have no absolute pointer in the file.")
    lines += ["", "## Immediates", ""]
    lines.append("These pool words are not addresses. The named ones are IEEE-754 constants. The rest appear in at least 8 functions.")
    lines.append("")
    lines.append("| Value | Meaning | Functions |")
    lines.append("| --- | --- | --- |")
    for word, funcs in sorted(imm_funcs.items(), key=lambda item: (-len(item[1]), item[0])):
        if word not in KNOWN_IMM and len(funcs) < 8:
            continue
        meaning = KNOWN_IMM.get(word, "")
        text = ascii_immediate(word)
        if text:
            meaning = (meaning + "; " if meaning else "") + f"ASCII `{text}`"
        lines.append(f"| `0x{word:08x}` | {meaning} | {len(funcs)} |")
    lines += ["", "## RAM", ""]
    lines.append(f"{len(ram_funcs)} distinct RAM addresses are loaded from pools. The image does not contain the bytes at those addresses. They are runtime SRAM.")
    lines += ["", "## Code pointers", ""]
    lines.append(f"{len(code_funcs)} distinct function pointers are loaded from pools.")
    lines.append("")
    for target, funcs in sorted(code_funcs.items(), key=lambda item: (-len(item[1]), item[0])):
        if len(funcs) > 15:
            lines.append(f"- `{target}`: {len(funcs)} functions")
            continue
        names = ", ".join(f"`{item}`" for item in sorted(funcs))
        lines.append(f"- `{target}`: {names}")
    lines += ["", "## Other", ""]
    lines.append("A peripheral hit is kept only when the address is below the next `*_BASE` and inside that block's span: 0x400 for a normal block, 0x30 for `USD_BASE` (48 bytes, RM Rev 2.07), 0x100 for `FLASH_REG_BASE`. `SCB.VTOR`, `SCB.AIRCR`, `SCB.CPACR`, and `SCB.SHP` are the names from `core_cm4.h`. `SCB.SHP` is the 12-byte system-handler priority array at SCB+0x18. `reserved-info` is the gap `0x1FFFF830`–`0x1FFFFFFF` in Figure 2-1 of that manual. `flash+` is a file offset from `0x08000000`. `flash+0x308ac` is a halfword table, mostly a `0xC7` lead byte, not a C string. `flash+0x2ca58` is not ASCII and not a pointer to a string.")
    lines.append("")
    lines.append("| Target | Functions |")
    lines.append("| --- | --- |")
    for target, funcs in sorted(other_funcs.items(), key=lambda item: (-len(item[1]), item[0]))[:40]:
        lines.append(f"| `{target}` | {len(funcs)} |")
    lines.append("")
    MD.write_text("\n".join(lines) + "\n")
    n_upper, n_lower = write_strings(image, covered, string_locs)
    print(f"functions {len(rows)} resolved {with_any} registers {with_reg} strings {with_str} ram {with_ram}")
    print(f"blocks {len(periph_funcs)} strings {len(string_funcs)} other {len(other_funcs)} unresolved_slots {unresolved}")
    print(f"string catalog upper {n_upper} lower {n_lower}")


def collect_runs(image, covered, lo, hi, min_ascii, want_gbk):
    rows = []
    i = lo
    while i < hi:
        if image[i] == 0 or covered[i] or image[i] < 0x20:
            i += 1
            continue
        j = i
        while j < hi and image[j] != 0 and not covered[j] and j - i < 120:
            j += 1
        if j >= hi or image[j] != 0 or j == i:
            i += 1
            continue
        raw = image[i:j]
        if all(0x20 <= b <= 0x7E for b in raw):
            if len(raw) >= min_ascii and any(chr(b).isalpha() for b in raw):
                rows.append((FLASH + i, "ascii", raw.decode("ascii")))
            i = j + 1
            continue
        if want_gbk:
            try:
                text = raw.decode("gbk")
            except UnicodeDecodeError:
                i += 1
                continue
            if len(text) >= 2 and any(ord(ch) > 127 for ch in text):
                rows.append((FLASH + i, "gbk", text))
                i = j + 1
                continue
        i += 1
    return rows


def write_strings(image, covered, string_locs):
    pointers = []
    for off in range(0, len(image) - 3, 4):
        word = int.from_bytes(image[off:off + 4], "little")
        target = word & ~1
        if FLASH <= target < FLASH + len(image):
            pointers.append((FLASH + off, target))

    def hits(start, length):
        end = start + length
        return [slot for slot, target in pointers if start <= target < end]

    upper_lo = 0x0805C700
    upper = collect_runs(image, covered, upper_lo - FLASH, len(image), 4, True)
    lower = [
        row for row in collect_runs(image, covered, 0, upper_lo - FLASH, 8, False)
        if " " in row[2]
    ]
    with STRINGS_TSV.open("w") as handle:
        handle.write("address\tencoding\tregion\tpointers\ttext\n")
        for region, rows in (("upper", upper), ("lower", lower)):
            for addr, encoding, text in rows:
                slots = hits(addr, len(text.encode("gbk" if encoding == "gbk" else "ascii")))
                slot_s = ",".join(f"0x{item:08x}" for item in slots)
                clean = text.replace("\t", " ").replace("\n", " ")
                handle.write(f"0x{addr:08x}\t{encoding}\t{region}\t{slot_s}\t{clean}\n")

    lines = [
        "# V0.29 strings",
        "",
        "Addresses are in `decrypted_v0.29.bin` loaded at `0x08000000`. A row is a NUL-terminated run outside every decompiled function. ASCII is printable bytes with a letter. GBK is the same run when it is not ASCII and decodes as GBK. The bytes are copied as stored, including a leading space.",
        "",
        "An absolute pointer is a 4-byte-aligned little-endian word in the image whose value falls inside the string. Three pool slots do that. The other strings in this file have no such word. Code can still reach them with a PC-relative `ADR` or a base plus an index. This file does not invent those references.",
        "",
        "## Pool references",
        "",
        "| String | String address | Pool slot | Function |",
        "| --- | --- | --- | --- |",
    ]
    seen = set()
    for text, str_va, pool_va, func in string_locs:
        key = (text, str_va, pool_va, func)
        if key in seen:
            continue
        seen.add(key)
        shown = text.replace("|", "\\|")
        lines.append(f"| `{shown}` | `0x{str_va:08x}` | `0x{pool_va:08x}` | `{func}` |")
    lines += [
        "",
        "## Lower image",
        "",
        "These are ASCII runs of at least 8 bytes that contain a space and sit below `0x0805C700`, outside functions. `Invalid Operation`, `Divide By Zero`, and `SIGFPE` are the usual soft-float and libgcc phrases.",
        "",
    ]
    for addr, _encoding, text in lower:
        slots = hits(addr, len(text))
        mark = ""
        if slots:
            mark = " pointers " + ", ".join(f"`0x{item:08x}`" for item in slots)
        lines.append(f"- `0x{addr:08x}` `{text}`{mark}")
    lines += [
        "",
        "## Upper table",
        "",
        f"`0x0805C700` through the end of the image. {len(upper)} strings. The same rows are in `firmware/docs/strings.tsv`.",
        "",
    ]
    for addr, encoding, text in upper:
        slots = hits(addr, len(text.encode("gbk" if encoding == "gbk" else "ascii")))
        mark = ""
        if slots:
            mark = " pointers " + ", ".join(f"`0x{item:08x}`" for item in slots)
        lines.append(f"- `0x{addr:08x}` {encoding} `{text}`{mark}")
    lines.append("")
    STRINGS.write_text("\n".join(lines) + "\n")
    return len(upper), len(lower)


if __name__ == "__main__":
    main()
