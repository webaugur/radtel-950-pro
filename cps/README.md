# RT-950 / 950Pro CPS (Rust UI)

`eframe` / `egui` front end. It does **not** speak the radio protocol. Open, save,
read, and write all go through `firmware/scripts/radtel_cps.py` so firmware changes
stay in one place.

Layout: zone list, a short channel row (name, RX → TX, mode / bandwidth / power),
and an inspector for the rest. Not the OEM 16-column grid.

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

## What the window does

- **Open / Save .dat** — `dat-export` / `dat-import` (OEM `KDH.RadioData`)
- **Read radio / Write radio** — `read-dat` / `write-dat` on the port field (write asks first)
- Zones are an even split of the channel list (990 / 15 = 66 on the Florida file)
- Dark mode and a shell log (stderr)

Run it from the radtel repo so it can find the shell:

```bash
cd ~/Documents/DragonSDR/webaugur/radtel-950-pro
./cps/target/debug/rt950-cps
```

## Capture plan

1. Quit `rt950-cps` so the tty is free.
2. Install/run OEM CPS under Wine; connect the radio.
3. Capture a full **Read** (and ideally a small **Write**) with usbmon/Wireshark or a tty sniffer.
4. Drop traces under `docs/captures/` and extend `rt950-protocol`.

Firmware flash stays in `firmware/scripts/radtel_flash.py` (different `0xAA`…`0x55` protocol).
