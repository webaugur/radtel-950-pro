# RE setup (radare2 / iaito)

Ubuntu 26.04 does **not** package `rizin`/`cutter`. The available equivalent stack is:

| Tool | Package | Role |
|------|---------|------|
| **radare2** (`r2`) | `radare2` | CLI analysis (same family as rizin) |
| **iaito** | `iaito` | GUI for radare2 (like Cutter for rizin) |

Optional later: install rizin static build from [rizinorg/rizin releases](https://github.com/rizinorg/rizin/releases) if you prefer exact rizin syntax.

## Primary image (use this)

| Version | Clear binary | Source package |
|---------|--------------|----------------|
| **V0.29** (preferred) | `firmware/decrypted_v0.29.bin` | `reference firmware/RT_950Pro_V0.29_260617_1.rar` → `.BTF` |
| V0.18 (legacy) | `firmware/decrypted.bin` | `RT_950Pro_V0.18_250919.BTF` |

Decrypt:

```bash
python3 firmware/scripts/fwcrypt_io.py \
  --infile "firmware/reference firmware/RT_950Pro_V0.29_260617/RT_950Pro_V0.29_260617(1)/RT_950Pro_V0.29_260617.BTF" \
  --outfile firmware/decrypted_v0.29.bin --verbose
```

## Load settings

- Arch: **ARM**, **little-endian**, **Thumb** (`-a arm -b 16`)
- Map base: **`0x08000000`**
- SRAM (for data refs): `0x20000000` length 96 KiB (see `reference project/radtel/AT32F403AxG_FLASH.ld`)
- Vector table at file offset 0 (first `0x800` bytes of BTF are **not** FwCrypt-scrambled)

```bash
# Interactive CLI
./firmware/RE/radare2/analyze_v0.29.sh open

# Batch exports
./firmware/RE/radare2/analyze_v0.29.sh batch

# GUI
./firmware/RE/radare2/analyze_v0.29.sh iaito
# then: set arch arm, bits 16, load address 0x08000000 if not auto
```

## Exports

Under `firmware/RE/radare2/exports/`:

- `strings_v0.29.csv` — address + string
- `functions_v0.29.txt` — `afl` function list (after `aaa`)
- `vector_table_v0.29.txt` / `reset_region_v0.29.txt` — raw peeks

## Note on reset vector

V0.29 vector table: SP=`0x20015f78`, Reset=`0x080032a1` (Thumb). Auto-analysis may still mis-bound early functions; treat string xrefs and manual function creation as more reliable until the call graph is cleaned up.
