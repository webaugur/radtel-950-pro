#!/usr/bin/env python3
"""Build imports/RT-950PRO_CPS_imports.dat from the RadioReference HTML lists.

Uses the CPS shell's dat-export / dat-import so the .dat stays OEM BinaryFormatter.
Does not write the radio.
"""

from __future__ import annotations

import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
IMPORTS = Path(__file__).resolve().parent
HELPER = ROOT / "firmware/scripts/RadtelDat.exe"
CPS_EXE = Path.home() / (
    "Applications/Radtel950Pro/drive_c/Program Files (x86)/RT-950PRO_CPS/BT-RT950PRO_CPS.exe"
)
TEMPLATE = ROOT / "RT-950PRO_CPS_NI.dat"
OUT_DAT = IMPORTS / "RT-950PRO_CPS_imports.dat"

CHANNELS = 990
ZONES = 15
PER_ZONE = CHANNELS // ZONES  # 66
NAME_LEN = 12

# 15 fixed zone slots. Lists longer than 66 spill into the next named zone.
ZONE_PLAN = [
    ("skywarn.html", ["Skywarn"]),
    ("indiana.html", ["Indiana 1", "Indiana 2"]),
    ("railroad.html", ["Rail 1", "Rail 2"]),
    ("dhsind.html", ["DHS Indiana"]),
    ("feds.html", ["Federal"]),
    ("indmil.html", ["Military 1", "Military 2", "Military 3", "Military 4"]),
    ("artcc.html", ["ARTCC Indy", "ARTCC Indy2"]),
    ("artccchi.html", ["ARTCC Chi", "ARTCC Chi 2"]),
]


def clean(html: str) -> str:
    text = re.sub(r"<[^>]+>", "", html)
    text = text.replace("&nbsp;", " ").replace("&amp;", "&").replace("&#160;", " ")
    return re.sub(r"\s+", " ", text).strip()


def table_rows(path: Path) -> list[list[str]]:
    text = path.read_text(errors="replace")
    rows = []
    for tr in re.findall(r"<tr[^>]*>(.*?)</tr>", text, flags=re.I | re.S):
        cells = [clean(c) for c in re.findall(r"<t[dh][^>]*>(.*?)</t[dh]>", tr, flags=re.I | re.S)]
        if cells:
            rows.append(cells)
    return rows


def parse_file(path: Path) -> list[dict]:
    rows = table_rows(path)
    header = None
    found: list[dict] = []
    seen: set[tuple[str, str]] = set()
    for cells in rows:
        low = [c.lower() for c in cells]
        if "frequency" in low and "alpha tag" in low:
            header = {name: i for i, name in enumerate(low)}
            continue
        if not header or not cells:
            continue
        raw = cells[header["frequency"]].replace(",", "")
        if not re.fullmatch(r"\d{2,4}\.\d{3,5}", raw):
            continue
        mhz = float(raw)
        if mhz < 18.0 or mhz > 1000.0:
            continue
        tone = tone_of(cells, header)
        key = (f"{mhz:.5f}", tone)
        if key in seen:
            continue
        seen.add(key)
        tag = cell(cells, header, "alpha tag") or cell(cells, header, "description") or f"{mhz:.3f}"
        mode = cell(cells, header, "mode").upper()
        tx = mhz
        inp = cell(cells, header, "input")
        if inp and re.fullmatch(r"\d{2,4}\.\d{3,5}", inp.replace(",", "")):
            tx = float(inp.replace(",", ""))
        found.append(
            {
                "rx": mhz,
                "tx": tx,
                "tone": tone,
                "name": tag[:NAME_LEN],
                "mode": mode,
            }
        )
    found.sort(key=lambda c: (c["rx"], c["name"]))
    return found


def cell(cells: list[str], header: dict[str, int], name: str) -> str:
    i = header.get(name)
    if i is None or i >= len(cells):
        return ""
    return cells[i].strip()


def tone_of(cells: list[str], header: dict[str, int]) -> str:
    raw = cell(cells, header, "tone")
    if not raw or raw.upper() in {"CSQ", "NONE", "OFF"}:
        return "OFF"
    pl = re.fullmatch(r"(\d{2,3}\.\d)\s*PL", raw, flags=re.I)
    if pl:
        return pl.group(1)
    dcs = re.fullmatch(r"D(\d{3})[NIA]?", raw, flags=re.I)
    if dcs:
        return "D" + dcs.group(1)
    # NAC and other digital squelch codes are not CTCSS.
    if re.search(r"NAC|CSQ", raw, flags=re.I):
        return "OFF"
    if re.fullmatch(r"\d{2,3}\.\d", raw):
        return raw
    return "OFF"


def mode_fields(mode: str) -> tuple[int, int]:
    """Return (rxModulation, bandWide). AM=1, FM=0. Narrow=1, wide=0."""
    if mode == "AM":
        return 1, 1
    if mode in {"FMN", "P25", "P25E", "NXDN48"}:
        return 0, 1
    return 0, 0  # FM wide; unknown analog treated as FM


def blank_channel(slot: dict) -> None:
    slot["rxFreq"] = "000.00000"
    slot["txFreq"] = "000.00000"
    slot["rxQT"] = "OFF"
    slot["txQT"] = "OFF"
    slot["chName"] = ""
    slot["scanAdd"] = 0
    slot["rxModulation"] = 0
    slot["bandWide"] = 1
    slot["txPower"] = 0
    slot["pttId"] = 0
    slot["scram"] = 0
    slot["learnFHSS"] = 0
    slot["encrypt"] = 0
    slot["busyLockout"] = 0
    slot["signallingGroup"] = 0
    slot["fhssCode"] = ""


def fill_channel(slot: dict, item: dict) -> None:
    mod, wide = mode_fields(item["mode"])
    slot["rxFreq"] = f"{item['rx']:.5f}"
    slot["txFreq"] = f"{item['tx']:.5f}"
    slot["rxQT"] = item["tone"]
    slot["txQT"] = item["tone"]
    slot["chName"] = item["name"][:NAME_LEN]
    slot["scanAdd"] = 1
    slot["rxModulation"] = mod
    slot["bandWide"] = wide
    slot["txPower"] = 0


def assign() -> tuple[list[str], list[list[dict]], dict]:
    names = [""] * ZONES
    buckets: list[list[dict]] = [[] for _ in range(ZONES)]
    cursor = 0
    stats = {}
    for filename, zone_names in ZONE_PLAN:
        items = parse_file(IMPORTS / filename)
        stats[filename] = {"parsed": len(items), "zones": list(zone_names)}
        if cursor + len(zone_names) > ZONES:
            raise SystemExit(f"zone plan exceeds {ZONES} slots at {filename}")
        for i, name in enumerate(zone_names):
            if len(name) > NAME_LEN:
                raise SystemExit(f"zone name longer than {NAME_LEN}: {name}")
            names[cursor + i] = name
        chunk = items
        placed = 0
        for i in range(len(zone_names)):
            take = chunk[:PER_ZONE]
            chunk = chunk[PER_ZONE:]
            buckets[cursor + i] = take
            placed += len(take)
        if chunk:
            raise SystemExit(f"{filename}: {len(chunk)} frequencies left over")
        stats[filename]["placed"] = placed
        cursor += len(zone_names)
    while cursor < ZONES:
        names[cursor] = "Spare"
        cursor += 1
    return names, buckets, stats


def run_dat(args: list[str]) -> str:
    if not HELPER.is_file():
        raise SystemExit(f"missing {HELPER}")
    if not CPS_EXE.is_file():
        raise SystemExit(f"missing CPS exe {CPS_EXE}")
    proc = subprocess.run(
        ["mono", str(HELPER), *args],
        check=False,
        capture_output=True,
        text=True,
    )
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(proc.returncode or 1)
    if proc.stderr.strip():
        print(proc.stderr.strip(), file=sys.stderr)
    return proc.stdout


def main() -> None:
    if not TEMPLATE.is_file():
        raise SystemExit(f"missing template {TEMPLATE}")
    names, buckets, stats = assign()
    raw = run_dat(["export", str(CPS_EXE), str(TEMPLATE)])
    doc = json.loads(raw)
    channels = doc["channelData"]["channelList"]
    if len(channels) != CHANNELS:
        raise SystemExit(f"template has {len(channels)} channels, expected {CHANNELS}")
    zones = doc["channelData"]["arrayZoneName"]
    if len(zones) < ZONES:
        raise SystemExit(f"template has {len(zones)} zones, need {ZONES}")
    for i, name in enumerate(names):
        zones[i] = name
    filled = 0
    for z, items in enumerate(buckets):
        base = z * PER_ZONE
        for offset in range(PER_ZONE):
            slot = channels[base + offset]
            if offset < len(items):
                fill_channel(slot, items[offset])
                filled += 1
            else:
                blank_channel(slot)
    json_path = Path("/tmp/rt950-imports.json")
    json_path.write_text(json.dumps(doc))
    run_dat(["import", str(CPS_EXE), str(TEMPLATE), str(json_path), str(OUT_DAT)])
    print(f"wrote {OUT_DAT}")
    print(f"filled {filled} / {CHANNELS}")
    for filename, info in stats.items():
        print(f"  {filename}: placed {info['placed']} of {info['parsed']} into {', '.join(info['zones'])}")
    for i, name in enumerate(names):
        print(f"  zone {i+1:2} {name:12} {len(buckets[i]):3} channels")


if __name__ == "__main__":
    main()
