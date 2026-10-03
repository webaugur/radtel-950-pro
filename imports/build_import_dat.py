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
# This CPS stores 10 zones x 99 channels. The older manual's 15 x 64 is not
# what the radio shows. Lists longer than 99 spill into the next named zone.
ZONES = 10
PER_ZONE = CHANNELS // ZONES  # 99
NAME_LEN = 12

# IHERN rows share the alpha tag. The description is the hospital. One channel
# per tone. 210.7 is the CTCSS tone in Hz; the carrier stays 155.340 MHz.
# OFF is the one simplex carrier-squelch channel (transmit on, no tone).
IHERN_NAME = {
    "118.8": "Bluffton Reg",
    "77.0": "Cameron Mem",
    "203.5": "Comm Munster",
    "131.8": "CH Anderson",
    "107.2": "Daviess Comm",
    "79.7": "Dearborn Co",
    "82.5": "Dekalb Mem",
    "114.8": "Elkhart Gen",
    "OFF": "IHERN CSQ",
    "103.5": "Fayette Mem",
    "88.5": "Good Sam Vin",
    "151.4": "Hancock Reg",
    "123.0": "Henry Co Mem",
    "91.5": "LaGrange Co",
    "141.3": "Laporte",
    "192.8": "Lutheran FW",
    "167.9": "Marion Gen",
    "156.7": "Mich City",
    "100.0": "Whitley",
    "136.5": "Portage",
    "186.2": "Porter Mem",
    "210.7": "Rush Mem",
    "127.3": "St Joe SB",
    "67.0": "SB Memorial",
    "97.4": "Starke Mem",
    "162.2": "Waters MC",
}

# Zone 1 is personal radio, built in personal_radio(). Skywarn used to live
# there; those channels go into Rail's empty slots. DHS stays in Indiana.
ZONE_PLAN = [
    (["indiana.html", "dhsind.html"], ["Indiana"]),
    (["railroad.html", "skywarn.html"], ["Rail"]),
    (["feds.html"], ["Federal"]),
    (["indmil.html"], ["Military 1", "Military 2", "Military 3"]),
    (["artcc.html"], ["ARTCC Indy"]),
    (["artccchi.html"], ["ARTCC Chi", "ARTCC Chi 2"]),
]

# FCC CB channel centers, MHz. Transmit equals receive.
CB_MHZ = [
    26.965, 26.975, 26.985, 27.005, 27.015, 27.025, 27.035, 27.055, 27.065, 27.075,
    27.085, 27.105, 27.115, 27.125, 27.135, 27.155, 27.165, 27.175, 27.185, 27.205,
    27.215, 27.225, 27.255, 27.235, 27.245, 27.265, 27.275, 27.285, 27.295, 27.305,
    27.315, 27.325, 27.335, 27.345, 27.355, 27.365, 27.375, 27.385, 27.395, 27.405,
]

# MURS simplex, MHz.
MURS_MHZ = [151.820, 151.880, 151.940, 154.570, 154.600]

# FRS 1–22, which are also the GMRS simplex channels on 1–7 and 15–22.
FRS_MHZ = [
    462.5625, 462.5875, 462.6125, 462.6375, 462.6625, 462.6875, 462.7125,
    467.5625, 467.5875, 467.6125, 467.6375, 467.6625, 467.6875, 467.7125,
    462.5500, 462.5750, 462.6000, 462.6250, 462.6500, 462.6750, 462.7000, 462.7250,
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
        description = cell(cells, header, "description")
        mode = cell(cells, header, "mode").upper()
        tx = mhz
        inp = cell(cells, header, "input")
        if inp and re.fullmatch(r"\d{2,4}\.\d{3,5}", inp.replace(",", "")):
            tx = float(inp.replace(",", ""))
        ihern = tag.upper().startswith("IHERN")
        if ihern:
            name = IHERN_NAME.get(tone)
            if not name:
                raise SystemExit(f"IHERN tone {tone} has no 12-character hospital name ({description})")
        else:
            name = tag[:NAME_LEN]
        if len(name) > NAME_LEN:
            raise SystemExit(f"channel name longer than {NAME_LEN}: {name}")
        found.append(
            {
                "rx": mhz,
                "tx": tx,
                "tone": tone,
                "name": name,
                "mode": mode,
                "ihern": ihern,
            }
        )
    # Same-frequency IHERN rows stay in file order. Sorting those by the new
    # hospital name would move channels 25-50.
    found.sort(key=lambda c: (c["rx"], "" if c["ihern"] else c["name"]))
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
    """Return (rxModulation, bandWide). AM=1, FM=0. Narrow=1, wide=0.

    AMW is wide AM for CB. The other AM rows stay narrow.
    """
    if mode == "AMW":
        return 1, 0
    if mode == "AM":
        return 1, 1
    if mode in {"FMN", "P25", "P25E", "NXDN48"}:
        return 0, 1
    if mode == "AIS":
        # 47 CFR 80.393: AIS 1/2 are 25 kHz. Wide FM keeps the GMSK audio intact.
        return 0, 0
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


def channel(name: str, rx: float, tx: float, mode: str) -> dict:
    if len(name) > NAME_LEN:
        raise SystemExit(f"channel name longer than {NAME_LEN}: {name}")
    return {"name": name, "rx": rx, "tx": tx, "tone": "OFF", "mode": mode}


def personal_radio() -> list[dict]:
    """Zone 1: CB simplex, MURS, FRS/GMRS simplex, GMRS repeater inputs."""
    rows: list[dict] = []
    for n, rx in enumerate(CB_MHZ, start=1):
        label = f"CB {n:02d}"
        if n == 9:
            label = "CB 09 EMERG"
        # TX follows RX. A 1.25 kHz split did not move the transmitter.
        rows.append(channel(label, rx, rx, "AMW"))
    # Extra CB / MARS / radio-control channels, still FM transmit, wide.
    # 27.195 is RC 5. 27.185 is already CB 19 and is not repeated here.
    # 27.245 is also CB 25; RC 6 keeps its own name.
    extras = [
        (27.555, "CB 555"),
        (27.120, "CB DIA"),
        (26.995, "CB RC 1"),
        (27.045, "CB RC 2"),
        (27.095, "CB RC 3"),
        (27.145, "CB RC 4"),
        (27.195, "CB RC 5"),
        (27.245, "CB RC 6"),
    ]
    for rx, label in extras:
        rows.append(channel(label, rx, rx, "AMW"))
    for n, rx in enumerate(MURS_MHZ, start=1):
        rows.append(channel(f"MURS {n}", rx, rx, "FMN"))
    for n, rx in enumerate(FRS_MHZ, start=1):
        rows.append(channel(f"FRS {n:02d}", rx, rx, "FMN"))
    # GMRS repeater: listen on the 462 MHz output, transmit +5 MHz.
    for n, rx in enumerate(FRS_MHZ[14:], start=15):
        rows.append(channel(f"GMRS {n}R", rx, rx + 5.0, "FMN"))
    return rows


def channel_flag(transmit: bool, receive_am: bool) -> int:
    """Memory flag. The transmitter is FM on every band, so transmit on is 2.

    3 (AM + transmit) is not used. The radio refuses PTT when the channel is AM.
    """
    if transmit:
        return 2
    if receive_am:
        return 1
    return 0


def fill_channel(slot: dict, item: dict) -> None:
    mod, wide = mode_fields(item["mode"])
    slot["rxFreq"] = f"{item['rx']:.5f}"
    slot["txFreq"] = f"{item['tx']:.5f}"
    slot["rxQT"] = item["tone"]
    slot["txQT"] = item["tone"]
    slot["chName"] = item["name"][:NAME_LEN]
    # AIS is continuous data. Leave it out of scan so the scan does not sit on it.
    slot["scanAdd"] = 0 if item["mode"] == "AIS" else 1
    # Bare AM is receive-only (airband). AIS is receive-only FM for a headset decoder.
    # AMW is CB: wide, and it transmits as FM.
    transmit = item["mode"] not in {"AM", "AIS"}
    receive_am = mod == 1 and not transmit
    slot["rxModulation"] = channel_flag(transmit, receive_am)
    slot["bandWide"] = wide
    slot["txPower"] = 0  # High


def assign() -> tuple[list[str], list[list[dict]], dict]:
    names = [""] * ZONES
    buckets: list[list[dict]] = [[] for _ in range(ZONES)]
    personal = personal_radio()
    if len(personal) > PER_ZONE:
        raise SystemExit(f"zone 1 has {len(personal)} channels, limit is {PER_ZONE}")
    names[0] = "CB MURS FRS"
    buckets[0] = personal
    cursor = 1
    stats = {"zone 1": {"parsed": len(personal), "zones": ["CB MURS FRS"], "placed": len(personal)}}
    for files, zone_names in ZONE_PLAN:
        items: list[dict] = []
        for filename in files:
            parsed = parse_file(IMPORTS / filename)
            items.extend(parsed)
            stats[filename] = {"parsed": len(parsed), "zones": list(zone_names)}
        if cursor + len(zone_names) > ZONES:
            raise SystemExit(f"zone plan exceeds {ZONES} slots at {files}")
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
            raise SystemExit(f"{files}: {len(chunk)} frequencies left over")
        for filename in files:
            stats[filename]["placed"] = placed
        cursor += len(zone_names)
    # 47 CFR 80.393. Receive only, 25 kHz. Appended after the Rail list.
    ais = [
        channel("AIS 1", 161.975, 161.975, "AIS"),
        channel("AIS 2", 162.025, 162.025, "AIS"),
        channel("AIS 3", 156.775, 156.775, "AIS"),
        channel("AIS 4", 156.825, 156.825, "AIS"),
    ]
    rail = names.index("Rail")
    if len(buckets[rail]) + len(ais) > PER_ZONE:
        raise SystemExit("Rail zone has no room for AIS 1-4")
    buckets[rail].extend(ais)
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
    # Replace the name list. The template array is 15 long; this radio uses 10.
    doc["channelData"]["arrayZoneName"] = names
    # Band C is the receiver that can show 27 MHz. Point it at zone 1 and
    # start in channel mode so the CB memories are the list, not the VFO.
    fun = doc["funConfigData"]
    fun["cbB_CurWorkZoneC"] = 0
    fun["cbB_WorkModeC"] = 1
    fun["cbB_CurWorkMode"] = 1
    # PF1 short is side key 1. Value 7 is PTTC, the choice after Beacon TX.
    # Side key 2 short value 0 is Radio, the FM/shortwave shortcut.
    fun["cbB_KeySide1"] = 7
    fun["cbB_KeySide2"] = 0
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
