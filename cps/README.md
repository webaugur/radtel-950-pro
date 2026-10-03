# RT-950 / 950Pro CPS (Rust UI)

`eframe` / `egui` front end. A `.950pro` file is JSON in this process. Opening
or saving a `.dat`, and reading or writing the radio, runs `mono RadtelDat.exe`
(the OEM `DoIt` path). The boot picture is sent by `rt950-protocol`.
`firmware/scripts/radtel_cps.py` remains the terminal tool for `flash` and
the block read/write commands. The window does not start it.

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

- **Open / Save .950pro** — JSON in this process
- **Open / Save .dat** — Mono `export` / `import` (OEM `KDH.RadioData`)
- **Read radio** — asks for a new `.dat` path, then Mono `read` (no existing file required)
- **Write radio** — Mono `write` on the port field (asks first)
- **Boot picture** — Rust upload of a 24-bit 240×320 BMP (asks first)
- Zones are an even split of the channel list (990 / 15 = 66 on the Florida file)
- Dark mode and a transfer log

Run it from the radtel repo so it can find `RadtelDat.exe` and the blank template:

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
