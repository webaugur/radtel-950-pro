# RE status — RT-950 Pro

_Last updated: 2026-07-11_

## Firmware images (clear)

| Version | File | Size | SHA256 (prefix) | Notes |
|---------|------|------|-----------------|-------|
| **0.29** | `firmware/decrypted_v0.29.bin` | 385 824 | `00cd5340…` | **Primary RE target**; from BTF via `fwcrypt_io.py` |
| 0.18 | `firmware/decrypted.bin` | 381 736 | `b619f198…` | Legacy baseline; prior Ghidra work |

Both `file(1)` as ARM Cortex-M firmware. Reset VA `0x080032a0` (Thumb bit set in vector).

### V0.29 vs V0.18

- **~4 KiB larger** app image in 0.29.
- Version string present: `Ver0.29` @ flash `0x0805d9ec`.
- Label strings still include space-padded ` RT-950      ` and `RT950Pro-%s`.
- GPS / Bluetooth / APRS UI strings remain (richer set in string dump).

## OEM packages (reference firmware/)

| Package | Status |
|---------|--------|
| `RT_950Pro_V0.29_260617_1.rar` | Unpacked → `RT_950Pro_V0.29_260617/` (BTF, EnUPDATE, docs) |
| `RT-950PRO_CPS_Setup_v1.3.3_1.rar` | Unpacked → `CPS_v1.3.3/RT-950PRO_CPS_Setup_v1.3.3.exe` |
| `RT-950_EnCPS_Setup_v1.2.2_*.rar` | Unpacked → `EnCPS_v1.2.2/…exe` |
| V0.18 BTF + CPS 1.0.5 | Still present (older) |

## Tooling on Tower5810

| Tool | Source |
|------|--------|
| `unrar`, `7z` | apt |
| **radare2 6.0.7**, **iaito** | apt (rizin/cutter **not** in Ubuntu 26.04) |
| `fwcrypt_io.py`, `radtel_flash.py` | in-repo |

## Analysis progress

| Item | Count / state |
|------|----------------|
| ASCII strings (≥4) V0.29 | **3236** → `firmware/RE/radare2/exports/strings_v0.29.csv` |
| r2 `aaa` functions V0.29 | **~2400** (noisy; needs cleanup) |
| Named in `Function_Names.csv` | **~45** (mostly from earlier 0.18 Ghidra pass) |
| Old Ghidra C export | Low trust (`halt_baddata` noise) — **do not treat as truth** |

### Interesting V0.29 strings (samples)

- ` RT-950      ` (label — same-length patch candidate)
- `Ver0.29`
- `Bluetooth`, `GPS SWITCH`, `GPS Position`, `APRS *` menus

## Next RE priorities

1. Clean r2 project: map vector table as data; redefine Reset_Handler; fix function boundaries.
2. Xrefs from ` RT-950` / `Ver0.29` → UI draw path.
3. Port/apply renames from `Function_Names.csv` onto V0.29 (addresses may shift).
4. Only then: label patch + stock flash round-trip.

## Flash / custom FW

**Not started** this session. Safety ladder still required (stock round-trip before any patched image).
