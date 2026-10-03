#!/usr/bin/env python3
"""Build codeplugs/indydhs-2026-10-03.dat from the IndyHam codeplug plus NIFOG 2.02.

Clones codeplugs/indyham-2026-10-03.dat. Does not write the radio and does not
modify the IndyHam file. Frequencies are the ones printed in NIFOG 2.02
(CISA, 12 Dec 2024). Nothing here is guessed.

Zone map (10 x 99):
  1 CB MURS FRS   IndyHam personal radio, unchanged
  2 Indiana       IndyHam, including IHERN channels 25-50
  3 Rail          IndyHam, AIS still at 79-82
  4 Federal       IndyHam federal rows, then federal IR and LE
  5 VHF Interop   low-band, VTAC, mutual aid, marine, SAR air, NOAA
  6 UHF Interop   UCALL/UTAC and the 12.5 kHz MED pairs
  7 700 800 TAC   800 MHz 8CALL/8TAC, then 700 MHz P25 conventional
  8 Military 1    IndyHam
  9 Military 2    IndyHam
  10 Military 3   IndyHam

IndyHam ARTCC (221 channels) stays on indyham-2026-10-03.dat. Ten zones cannot
hold that plus the NIFOG set. VTAC17 is omitted: Indiana is not on the NIFOG
county list. Trunked deployable control channels and talkgroups have no
conventional carrier, so they are omitted. 6.25 kHz MED interstitials are not
in the NIFOG 2.02 channel tables used here.

Empty slots that match a published neighbour plan are filled in place.
Zone 1 takes the 16 analogue PMR446 channels (ECC/DEC/(15)05), transmit on.
Rail takes Canadian AAR 2-6. VHF Interop takes Canadian SAR-IF and the
TB-8 220 MHz mutual-aid pairs. Zone 7 takes the three Canadian 800 MHz
interop rows that fit (I-CALL, its direct, ITAC-1).

The radio transmits FM only. Analog NIFOG rows are transmit-enabled (flag 2).
P25 rows (8K10F1E, NAC $293 / $F7E or $68F) are stored receive-only (flag 0):
an analog transmission is the wrong emission on those channels. NOAA weather
and the SAR air AM frequencies are receive-only. 8CALL/8TAC are analog
14K0F3E (4.0 kHz). This radio has wide (5 kHz) or narrow (2.5 kHz); those ten
use wide, which is the 5 kHz deviation 47 CFR 90.209 also allows.
"""

from __future__ import annotations

import copy
import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
HELPER = ROOT / "firmware/scripts/RadtelDat.exe"
CPS_EXE = Path.home() / (
    "Applications/Radtel950Pro/drive_c/Program Files (x86)/RT-950PRO_CPS/BT-RT950PRO_CPS.exe"
)
CODEPLUGS = ROOT / "codeplugs"
SOURCE = CODEPLUGS / "indyham-2026-10-03.dat"
OUT_DAT = CODEPLUGS / "indydhs-2026-10-03.dat"
OUT_JSON = CODEPLUGS / "indydhs-2026-10-03.950pro"

PER_ZONE = 99
NAME_LEN = 12


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


def with_directs(rows: list[tuple[str, float, float]]) -> list[tuple[str, float, float]]:
    """Repeater row, then the talk-around on the repeater transmit frequency."""
    out: list[tuple[str, float, float]] = []
    for name, rx, tx in rows:
        direct = name + "D"
        if len(direct) > NAME_LEN:
            raise SystemExit(f"direct name longer than {NAME_LEN}: {direct}")
        out.append((name, rx, tx))
        out.append((direct, rx, rx))
    return out


def make(
    blank: dict,
    name: str,
    rx: float,
    tx: float,
    *,
    rxqt: str = "OFF",
    txqt: str = "OFF",
    mod: int = 2,
    wide: int = 1,
    scan: int = 1,
    power: int = 0,
) -> dict:
    if len(name) > NAME_LEN:
        raise SystemExit(f"channel name longer than {NAME_LEN}: {name}")
    if mod not in (0, 1, 2):
        raise SystemExit(f"refusing rxModulation {mod} on {name}")
    slot = copy.deepcopy(blank)
    slot["chName"] = name
    slot["rxFreq"] = f"{rx:.5f}"
    slot["txFreq"] = f"{tx:.5f}"
    slot["rxQT"] = rxqt
    slot["txQT"] = txqt
    slot["rxModulation"] = mod
    slot["bandWide"] = wide
    slot["scanAdd"] = scan
    slot["txPower"] = power
    return slot


def fill(blank: dict, rows: list[tuple], **kwargs) -> list[dict]:
    return [make(blank, name, rx, tx, **kwargs) for name, rx, tx in rows]


def pad(rows: list[dict], blank: dict, label: str) -> list[dict]:
    if len(rows) > PER_ZONE:
        raise SystemExit(f"{label} has {len(rows)} channels, limit is {PER_ZONE}")
    out = list(rows)
    while len(out) < PER_ZONE:
        out.append(copy.deepcopy(blank))
    return out


def occupied(rows: list[dict]) -> list[dict]:
    kept = []
    for slot in rows:
        digits = slot["rxFreq"].replace(".", "")
        if digits and set(digits) <= {"0"}:
            continue
        if slot["rxFreq"] in {"", "000.00000"}:
            continue
        kept.append(copy.deepcopy(slot))
    return kept


def build(doc: dict) -> dict:
    channels = doc["channelData"]["channelList"]
    if len(channels) != 990:
        raise SystemExit(f"source has {len(channels)} channels, expected 990")
    blank = copy.deepcopy(channels[83])
    if blank["chName"] != "" or blank["rxFreq"] != "000.00000":
        raise SystemExit("expected an empty template at CB slot 84")

    personal = occupied(channels[0:99])
    indiana = occupied(channels[99:198])
    rail = occupied(channels[198:297])
    federal = occupied(channels[297:396])
    military_1 = occupied(channels[396:495])
    military_2 = occupied(channels[495:594])
    military_3 = occupied(channels[594:693])
    if [len(personal), len(indiana), len(rail), len(federal)] != [83, 94, 82, 47]:
        raise SystemExit("IndyHam zone counts changed; refuse to clone a different file")
    if [len(military_1), len(military_2), len(military_3)] != [99, 99, 17]:
        raise SystemExit("IndyHam military counts changed")
    if indiana[24]["chName"] != "Bluffton Reg" or indiana[32]["chName"] != "IHERN CSQ":
        raise SystemExit("Indiana IHERN block is not at channels 25-50")
    if rail[78]["chName"] != "AIS 1" or rail[81]["chName"] != "AIS 4":
        raise SystemExit("AIS is not at Rail 79-82")

    # Federal IR: narrow analog, carrier-squelch receive, CTCSS 167.9 transmit.
    # NIFOG pages 35 and 39. Calling channels NC 1 / NC 2 included the same way.
    ir_vhf = [
        ("NC 1", 169.5375, 164.7125),
        ("IR 1", 170.0125, 165.2500),
        ("IR 2", 170.4125, 165.9625),
        ("IR 3", 170.6875, 166.5750),
        ("IR 4", 173.0375, 167.3250),
        ("IR 5", 169.5375, 169.5375),
        ("IR 6", 170.0125, 170.0125),
        ("IR 7", 170.4125, 170.4125),
        ("IR 8", 170.6875, 170.6875),
        ("IR 9", 173.0375, 173.0375),
    ]
    ir_uhf = [
        ("NC 2", 410.2375, 419.2375),
        ("IR 10", 410.4375, 419.4375),
        ("IR 11", 410.6375, 419.6375),
        ("IR 12", 410.8375, 419.8375),
        ("IR 13", 413.1875, 413.1875),
        ("IR 14", 413.2125, 413.2125),
        ("IR 15", 410.2375, 410.2375),
        ("IR 16", 410.4375, 410.4375),
        ("IR 17", 410.6375, 410.6375),
        ("IR 18", 410.8375, 410.8375),
    ]
    # Analog LE, NIFOG programming note: TX 167.9, no RX CTCSS. Pages 36 and 40.
    le_analog = [
        ("LE A", 167.0875, 167.0875),
        ("LE 1", 167.0875, 162.0875),
        ("LE B", 414.0375, 414.0375),
        ("LE 10", 409.9875, 418.9875),
        ("LE 16", 409.9875, 409.9875),
    ]
    # Remaining LE rows are P25 NAC $68F. Stored receive-only.
    le_p25 = [
        ("LE 2", 167.2500, 162.2625),
        ("LE 3", 167.7500, 162.8375),
        ("LE 4", 168.1125, 163.2875),
        ("LE 5", 168.4625, 163.4250),
        ("LE 6", 167.2500, 167.2500),
        ("LE 7", 167.7500, 167.7500),
        ("LE 8", 168.1125, 168.1125),
        ("LE 9", 168.4625, 168.4625),
        ("LE 11", 410.1875, 419.1875),
        ("LE 12", 410.6125, 419.6125),
        ("LE 13", 414.0625, 414.0625),
        ("LE 14", 414.3125, 414.3125),
        ("LE 15", 414.3375, 414.3375),
        ("LE 17", 410.1875, 410.1875),
        ("LE 18", 410.6125, 410.6125),
    ]
    federal_rows = (
        federal
        + fill(blank, ir_vhf, rxqt="OFF", txqt="167.9", mod=2, wide=1)
        + fill(blank, ir_uhf, rxqt="OFF", txqt="167.9", mod=2, wide=1)
        + fill(blank, le_analog, rxqt="OFF", txqt="167.9", mod=2, wide=1)
        + fill(blank, le_p25, mod=0, wide=1)
    )

    # Page 28. 16K0F3E. LFIRE2 is printed as proposed, pending FCC assignment.
    low_band = with_directs(
        [
            ("LLAW1", 39.4600, 45.8600),
            ("LFIRE2", 39.4800, 45.8800),
            ("LLAW3", 45.8600, 39.4600),
            ("LFIRE4", 45.8800, 39.4800),
        ]
    )
    # Pages 29-30. Simplex TX tone 156.7. Repeater TX tone 136.5.
    # Receive stays carrier squelch: this radio cannot toggle RX tone.
    vtac_simplex = [
        ("VCALL10", 155.7525, 155.7525),
        ("VTAC11", 151.1375, 151.1375),
        ("VTAC12", 154.4525, 154.4525),
        ("VTAC13", 158.7375, 158.7375),
        ("VTAC14", 159.4725, 159.4725),
    ]
    vtac_repeater = [
        ("VTAC33", 159.4725, 151.1375),
        ("VTAC34", 158.7375, 154.4525),
        ("VTAC35", 159.4725, 158.7375),
        ("VTAC36", 151.1375, 159.4725),
        ("VTAC37", 154.4525, 158.7375),
        ("VTAC38", 158.7375, 159.4725),
    ]
    # Page 34. VSAR16 is 127.3 both ways. VMED28 is CSQ receive, 156.7 transmit.
    # The other mutual-aid rows use the page's recommended 156.7 both ways.
    mutual_aid = [
        ("VSAR16", 155.1600, 155.1600, "127.3", "127.3"),
        ("VFIRE21", 154.2800, 154.2800, "156.7", "156.7"),
        ("VFIRE22", 154.2650, 154.2650, "156.7", "156.7"),
        ("VFIRE23", 154.2950, 154.2950, "156.7", "156.7"),
        ("VFIRE24", 154.2725, 154.2725, "156.7", "156.7"),
        ("VFIRE25", 154.2875, 154.2875, "156.7", "156.7"),
        ("VFIRE26", 154.3025, 154.3025, "156.7", "156.7"),
        ("VMED28", 155.3400, 155.3400, "OFF", "156.7"),
        ("VMED29", 155.3475, 155.3475, "156.7", "156.7"),
        ("VLAW31", 155.4750, 155.4750, "156.7", "156.7"),
        ("VLAW32", 155.4825, 155.4825, "156.7", "156.7"),
    ]
    # Page 64. Marine emission 16K0F3E. Non-maritime use needs an STA or license.
    marine = [
        ("MAR 16", 156.8000, 156.8000),
        ("MAR 17", 156.8500, 156.8500),
        ("MAR 21A", 157.0500, 157.0500),
        ("MAR 22A", 157.1000, 157.1000),
        ("MAR 23A", 157.1500, 157.1500),
        ("MAR 81A", 157.0750, 157.0750),
        ("MAR 82A", 157.1250, 157.1250),
        ("MAR 83A", 157.1750, 157.1750),
    ]
    # Page 64. AM. 282.8 and 345.0 are outside the CPS advertised band string.
    sar_am = [
        ("AIR 123.1", 123.1000, 123.1000),
        ("MC 122.85", 122.8500, 122.8500),
        ("MC 122.90", 122.9000, 122.9000),
        ("AIR 282.8", 282.8000, 282.8000),
        ("AIR 345", 345.0000, 345.0000),
    ]
    # Page 37. Wide FM, receive only.
    noaa = [
        ("WX1", 162.4000),
        ("WX2", 162.4250),
        ("WX3", 162.4500),
        ("WX4", 162.4750),
        ("WX5", 162.5000),
        ("WX6", 162.5250),
        ("WX7", 162.5500),
        ("WX8", 161.6500),
        ("WX9", 161.7750),
    ]
    vhf_rows = (
        fill(blank, low_band, rxqt="156.7", txqt="156.7", mod=2, wide=0)
        + fill(blank, vtac_simplex, rxqt="OFF", txqt="156.7", mod=2, wide=1)
        + fill(blank, vtac_repeater, rxqt="OFF", txqt="136.5", mod=2, wide=1)
        + [
            make(blank, name, rx, tx, rxqt=rq, txqt=tq, mod=2, wide=1)
            for name, rx, tx, rq, tq in mutual_aid
        ]
        + fill(blank, marine, mod=2, wide=0)
        + fill(blank, sar_am, mod=1, wide=1, scan=1)
        + [make(blank, name, rx, rx, mod=0, wide=0, scan=1) for name, rx in noaa]
    )

    # Page 38. Narrow. TX 156.7, receive carrier squelch.
    uhf_interop = with_directs(
        [
            ("UCALL40", 453.2125, 458.2125),
            ("UTAC41", 453.4625, 458.4625),
            ("UTAC42", 453.7125, 458.7125),
            ("UTAC43", 453.8625, 458.8625),
        ]
    )
    # Pages 41-44. 12.5 kHz rows and their directs. Recommended tone 156.7 both ways.
    med = with_directs(
        [
            ("MED-9", 462.9500, 467.9500),
            ("MED-92", 462.9625, 467.9625),
            ("MED-10", 462.9750, 467.9750),
            ("MED-102", 462.9875, 467.9875),
            ("MED-1", 463.0000, 468.0000),
            ("MED-12", 463.0125, 468.0125),
            ("MED-2", 463.0250, 468.0250),
            ("MED-22", 463.0375, 468.0375),
            ("MED-3", 463.0500, 468.0500),
            ("MED-32", 463.0625, 468.0625),
            ("MED-4", 463.0750, 468.0750),
            ("MED-42", 463.0875, 468.0875),
            ("MED-5", 463.1000, 468.1000),
            ("MED-52", 463.1125, 468.1125),
            ("MED-6", 463.1250, 468.1250),
            ("MED-62", 463.1375, 468.1375),
            ("MED-7", 463.1500, 468.1500),
            ("MED-72", 463.1625, 468.1625),
            ("MED-8", 463.1750, 468.1750),
            ("MED-82", 463.1875, 468.1875),
        ]
    )
    uhf_rows = fill(blank, uhf_interop, rxqt="OFF", txqt="156.7", mod=2, wide=1) + fill(
        blank, med, rxqt="156.7", txqt="156.7", mod=2, wide=1
    )

    # Page 59. Analog NPSPAC. CTCSS 156.7 both ways, as that table prints.
    # Wide stands in for the allowed 5 kHz deviation. Transmit on.
    tac_800 = with_directs(
        [
            ("8CALL90", 851.0125, 806.0125),
            ("8TAC91", 851.5125, 806.5125),
            ("8TAC92", 852.0125, 807.0125),
            ("8TAC93", 852.5125, 807.5125),
            ("8TAC94", 853.0125, 808.0125),
        ]
    )
    # Pages 45-51. P25 Phase 1, 8K10F1E. These are the nationwide 700 MHz
    # tactical channels. NIFOG has no separate 800 MHz P25 tactical table.
    # Receive-only on this FM radio. Order puts the rows named TAC first.
    p25_tac = with_directs(
        [
            ("7TAC51", 769.14375, 799.14375),
            ("7TAC52", 769.64375, 799.64375),
            ("7TAC53", 770.14375, 800.14375),
            ("7TAC54", 770.64375, 800.64375),
            ("7TAC55", 769.74375, 799.74375),
            ("7TAC56", 770.24375, 800.24375),
            ("7TAC71", 773.10625, 803.10625),
            ("7TAC72", 773.60625, 803.60625),
            ("7TAC73", 774.10625, 804.10625),
            ("7TAC74", 774.60625, 804.60625),
            ("7TAC75", 773.75625, 803.75625),
            ("7TAC76", 774.25625, 804.25625),
        ]
    )
    p25_rest = with_directs(
        [
            ("7CALL50", 769.24375, 799.24375),
            ("7CALL70", 773.25625, 803.25625),
            ("7GTAC57", 770.99375, 800.99375),
            ("7GTAC77", 774.85625, 804.85625),
            ("7MOB59", 770.89375, 800.89375),
            ("7MOB79", 774.50625, 804.50625),
            ("7LAW61", 770.39375, 800.39375),
            ("7LAW62", 770.49375, 800.49375),
            ("7LAW81", 774.00625, 804.00625),
            ("7LAW82", 774.35625, 804.35625),
            ("7FIRE63", 769.89375, 799.89375),
            ("7FIRE64", 769.99375, 799.99375),
            ("7FIRE83", 773.50625, 803.50625),
            ("7FIRE84", 773.85625, 803.85625),
            ("7MED65", 769.39375, 799.39375),
            ("7MED66", 769.49375, 799.49375),
            ("7MED86", 773.00625, 803.00625),
            ("7MED87", 773.35625, 803.35625),
            ("7DATA69", 770.74375, 800.74375),
            ("7DATA89", 774.75625, 804.75625),
            ("7AG58", 769.13125, 799.13125),
            ("7AG60", 769.63125, 799.63125),
            ("7AG67", 770.13125, 800.13125),
            ("7AG68", 770.63125, 800.63125),
            ("7AG78", 773.11875, 803.11875),
            ("7AG80", 773.61875, 803.61875),
            ("7AG85", 774.11875, 804.11875),
            ("7AG88", 774.61875, 804.61875),
        ]
    )
    # Page 53. Analog or P25, 2 watts. Analog CTCSS 156.7 is the mode this radio can use.
    # txPower 2 is the CPS Low step. It is not a measured 2 watt ERP.
    itinerant = with_directs(
        [
            ("7-US-01", 769.05625, 799.05625),
            ("7-US-02", 769.06875, 799.06875),
            ("7-US-03", 774.99375, 804.99375),
        ]
    )
    band78_rows = (
        fill(blank, tac_800, rxqt="156.7", txqt="156.7", mod=2, wide=0)
        + fill(blank, p25_tac, mod=0, wide=1)
        + fill(blank, p25_rest, mod=0, wide=1)
        + fill(blank, itinerant, rxqt="156.7", txqt="156.7", mod=2, wide=1, power=2)
    )

    # ECC/DEC/(15)05: analogue PMR446, 12.5 kHz, lowest carrier 446.00625 MHz,
    # 16 channels. Digital 6.25 kHz rows are not a mode this radio can store.
    # Transmit on. txPower 2 is Low. The rule is 500 mW ERP; Low is not that measurement.
    pmr: list[tuple[str, float, float]] = []
    for n in range(16):
        mhz = 446.00625 + n * 0.0125
        pmr.append((f"PMR {n + 1:02d}", mhz, mhz))
    if f"{pmr[0][1]:.5f}" != "446.00625" or f"{pmr[-1][1]:.5f}" != "446.19375":
        raise SystemExit(f"PMR446 plan drifted: {pmr[0]} {pmr[-1]}")
    personal = personal + fill(blank, pmr, mod=2, wide=1, power=2)

    # NIFOG railroad page: AAR channels 2-6 are used in Canada only.
    # TB-8 also names 159.81, 159.93 and 160.05 as Canadian public-safety
    # simplex, and says they are not yet available nationwide. One memory each.
    ca_rail = [
        ("CA AAR 02", 159.8100, 159.8100),
        ("CA AAR 03", 159.9300, 159.9300),
        ("CA AAR 04", 160.0500, 160.0500),
        ("CA AAR 05", 160.1850, 160.1850),
        ("CA AAR 06", 160.2000, 160.2000),
    ]
    rail = rail + fill(blank, ca_rail, mod=2, wide=1)

    # ISED SAR-IF: 149.080 simplex, 11K0F3E, CTCSS 156.7 both ways.
    # TB-8 Table 1: 220 MHz mutual-aid pairs, 5 kHz. Stored narrow (12.5 kHz).
    # Mobile RX is the base frequency. Mobile TX is the mobile frequency.
    ca_vhf = [("CA SAR-IF", 149.0800, 149.0800)]
    ca_220 = [
        ("CA220 161", 220.8025, 221.8025),
        ("CA220 162", 220.8075, 221.8075),
        ("CA220 163", 220.8125, 221.8125),
        ("CA220 164", 220.8175, 221.8175),
        ("CA220 165", 220.8225, 221.8225),
        ("CA220 166", 220.8275, 221.8275),
        ("CA220 167", 220.8325, 221.8325),
        ("CA220 168", 220.8375, 221.8375),
        ("CA220 169", 220.8425, 221.8425),
        ("CA220 170", 220.8475, 221.8475),
        ("CA220 181", 220.9025, 221.9025),
        ("CA220 182", 220.9075, 221.9075),
        ("CA220 183", 220.9125, 221.9125),
        ("CA220 184", 220.9175, 221.9175),
        ("CA220 185", 220.9225, 221.9225),
    ]
    vhf_rows = (
        vhf_rows
        + fill(blank, ca_vhf, rxqt="156.7", txqt="156.7", mod=2, wide=1)
        + fill(blank, ca_220, mod=2, wide=1)
    )

    # ISED TB-8 Table 3. Canadian 800 MHz interop, 25 kHz, not the US 8TAC set.
    # Three slots remain in this zone, so only the calling pair and ITAC-1 fit.
    # The bulletin does not print a CTCSS tone.
    ca_800 = [
        ("CA I-CALL", 866.0125, 821.0125),
        ("CA ICALL D", 866.0125, 866.0125),
        ("CA ITAC-1", 866.5125, 821.5125),
    ]
    band78_rows = band78_rows + fill(blank, ca_800, mod=2, wide=0)

    zones = [
        ("CB MURS FRS", personal),
        ("Indiana", indiana),
        ("Rail", rail),
        ("Federal", federal_rows),
        ("VHF Interop", vhf_rows),
        ("UHF Interop", uhf_rows),
        ("700 800 TAC", band78_rows),
        ("Military 1", military_1),
        ("Military 2", military_2),
        ("Military 3", military_3),
    ]
    packed: list[dict] = []
    names: list[str] = []
    for name, rows in zones:
        if len(name) > NAME_LEN:
            raise SystemExit(f"zone name longer than {NAME_LEN}: {name}")
        names.append(name)
        packed.extend(pad(rows, blank, name))
        print(f"  zone {len(names):2} {name:12} {len(rows):3}")
    if len(packed) != 990:
        raise SystemExit(f"packed {len(packed)} channels")
    doc["channelData"]["arrayZoneName"] = names
    doc["channelData"]["channelList"] = packed
    return doc


def main() -> None:
    if not SOURCE.is_file():
        raise SystemExit(f"missing {SOURCE}")
    if OUT_DAT.exists() and OUT_DAT.samefile(SOURCE):
        raise SystemExit("refusing to overwrite the IndyHam source")
    raw = run_dat(["export", str(CPS_EXE), str(SOURCE)])
    doc = json.loads(raw)
    # Shortwave, side keys, and work-band C are left as they are in IndyHam.
    side = doc["funConfigData"]
    if side.get("cbB_KeySide1") != 7 or side.get("cbB_KeySide2") != 0:
        raise SystemExit("IndyHam side keys are not PF1=PTTC and side 2=Radio")
    doc = build(doc)
    tmp = Path("/tmp/indydhs.json")
    tmp.write_text(json.dumps(doc))
    run_dat(["import", str(CPS_EXE), str(SOURCE), str(tmp), str(OUT_DAT)])
    checked = json.loads(run_dat(["export", str(CPS_EXE), str(OUT_DAT)]))
    text = json.dumps(checked, indent=2) + "\n"
    OUT_JSON.write_text(text)
    ch = checked["channelData"]["channelList"]
    z7 = ch[6 * 99 : 7 * 99]
    eight = [c["chName"] for c in z7[:10]]
    if eight[0] != "8CALL90" or eight[9] != "8TAC94D":
        raise SystemExit(f"800 MHz block missing: {eight}")
    if z7[0]["rxModulation"] != 2 or z7[10]["rxModulation"] != 0:
        raise SystemExit("8CALL should transmit and 7TAC should be receive-only")
    if ch[0]["rxModulation"] != 2 or ch[99 + 32]["chName"] != "IHERN CSQ":
        raise SystemExit("personal radio or IHERN did not survive the import")
    if not SOURCE.is_file() or SOURCE.stat().st_size == 0:
        raise SystemExit("IndyHam source missing after the build")
    print(f"wrote {OUT_DAT}")
    print(f"wrote {OUT_JSON}")


if __name__ == "__main__":
    main()
