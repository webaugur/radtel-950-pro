# RT-950 / 950Pro CPS (Rust scaffold)

Maxx Steele–style **`eframe` / `egui`** programming UI, plus a thin protocol crate.
Modeled on [cruzerdlc/RT-950-950Pro-Editor](../docs/RT-950-950Pro-Editor/) workflows and
`docs/cps_teardown.md`. **Codeplug block R/W is stubbed** until a USB/COM capture
against OEM CPS (Wine) or the community editor fills the memory map.

## Crates

| Crate | Role |
|-------|------|
| `rt950-protocol` | Codeplug model, port list, `PROGRAMBT9000U` handshake probe |
| `rt950-cps` | Native GUI (`rt950-cps` binary) |

## Build / run (gentle)

First build downloads crates and compiles egui — prefer one job if the disk is busy:

```bash
cd ~/Documents/DragonSDR/webaugur/radtel-950-pro/cps
CARGO_BUILD_JOBS=1 cargo build -p rt950-cps
./target/debug/rt950-cps
```

## What works now

- Sidebar: Connection, Channels, Zones, VFO, Optional Features, DTMF, Modulation, APRS, Log
- Channel spreadsheet (256 empty slots) + zone names
- Open / save **JSON** codeplug (our format, not OEM `.dat` yet)
- Serial port list + **handshake probe** (`PROGRAMBT9000U` @ 115200)
- Dark mode, status bar, log

## Stubbed (needs capture)

- Read Radio / Write Radio block map (`0xA5` frames beyond handshake)
- OEM `.dat` (BinaryFormatter)
- Boot picture upload / BLE

## Capture plan

1. Quit `rt950-cps` so the tty is free.
2. Install/run OEM CPS under Wine; connect the radio.
3. Capture a full **Read** (and ideally a small **Write**) with usbmon/Wireshark or a tty sniffer.
4. Drop traces under `docs/captures/` and extend `rt950-protocol`.

Firmware flash stays in `firmware/scripts/radtel_flash.py` (different `0xAA`…`0x55` protocol).
