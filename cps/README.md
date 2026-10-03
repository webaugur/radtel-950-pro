# RT-950 / 950Pro CPS (Rust UI)

`eframe` / `egui` front end. One binary opens and saves a `.950pro` file, reads
and writes that codeplug on the radio, draws the map, and sends the boot
picture. It does not launch another program. A `.dat` is not opened. The guide
is `docs/guide/RT-950-CPS.md`, and `tools/usb-stick/stage.sh` copies
`docs/guide/RT-950-CPS.pdf` next to the binary.

Layout: zone list, a short channel row (name, RX → TX, mode / bandwidth / power),
and an inspector for the rest. Not the OEM 16-column grid.

## Crates

| Crate | Role |
|-------|------|
| `rt950-protocol` | Codeplug model, port list, handshake probe, boot-picture upload |
| `rt950-cps` | Native GUI (`rt950-cps` binary) |

## Build / run (gentle)

First build downloads crates and compiles egui — prefer one job if the disk is busy:

```bash
cd ~/Documents/DragonSDR/webaugur/radtel-950-pro/cps
CARGO_BUILD_JOBS=1 cargo build -p rt950-cps
./target/debug/rt950-cps
```

## What the window does

- **Open / Save .950pro** — JSON in this process. A `.dat` is refused.
- **Read / Write radio** — the session in the guide appendix. Write asks first.
- **Boot picture** — upload of a 24-bit 240×320 BMP (asks first)
- Zones follow the zone-name list (10 zones of 99 on a current codeplug)
- Dark mode and a transfer log

Run it from the radtel repo:

```bash
cd ~/Documents/DragonSDR/webaugur/radtel-950-pro
./cps/target/debug/rt950-cps
```

Firmware flash stays in `re/firmware/scripts/radtel_flash.py` (different `0xAA`…`0x55` protocol). The guide is the user-facing description of the window.
