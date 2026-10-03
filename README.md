# RT-950 CPS

A Linux program for the Radtel RT-950 Pro. One Rust binary edits a `.950pro` codeplug and reads and writes it over the programming cable. It does not start the OEM Windows CPS, Mono, or Python, and it does not flash firmware.

The window has six pages: Global, APRS, Channels, Shortwave, AM, and FM. Open and Save use `.950pro` (pretty-printed JSON with the OEM field names). Choosing a `.dat` leaves that file unopened. Write asks before it programs the radio. The boot picture is a one-way send of an uncompressed 24-bit BMP, 240 by 320. APRS Listen plots stations within 100 miles. The Beacon button writes one KISS frame and does not key the radio.

The user guide is [`docs/guide/RT-950-CPS.md`](docs/guide/RT-950-CPS.md). The PDF next to a staged binary is `docs/guide/RT-950-CPS.pdf`. Crate notes are in [`cps/README.md`](cps/README.md).

Firmware images, the OEM CPS, captures, datasheets, and the vendor SDK are under [`re/`](re/readme.md).

## Layout

```
.
├── cps/                 # Rust window (rt950-cps) and protocol crate
├── docs/guide/          # User guide (Markdown and PDF)
├── codeplugs/           # Example .950pro and companion .dat files
├── boot/                # 240×320 boot pictures
├── tools/usb-stick/     # Release staging and install scripts
└── re/                  # Reverse-engineering archive (see re/readme.md)
```

## Build

```bash
cd cps
CARGO_BUILD_JOBS=1 cargo build -p rt950-cps
./target/debug/rt950-cps
```

## Install

`tools/usb-stick/stage.sh` builds the release binary and writes `dist/rt950-usb`: the binary, `run.sh`, `setup.sh`, `uninstall.sh`, the guide PDF, the icon, and `codeplugs/`. On a machine that already has the packages, `SETUP_LAUNCHER_ONLY=1 tools/usb-stick/setup.sh` copies that tree to `~/Applications/rt950pro`, links `~/bin/rt950pro`, and refreshes the menu entry. A published GitHub release runs the same stage and attaches `rt950-cps-{version}.zip`.

`setup.sh` can add the account to the `dialout` group. That membership applies after you log out and back in. `uninstall.sh` does not remove the group and does not remove packages.

## Codeplugs and boot pictures

`codeplugs/indydhs-2026-10-03.950pro` is the IndyDHS plan. The `.dat` files beside it are OEM copies. This program does not open them. To bring a `.dat` across, write it to the radio with the OEM CPS, then Read and Save here. The steps are in the guide.

`boot/wizard-240x320.bmp` is the boot picture in this tree.
