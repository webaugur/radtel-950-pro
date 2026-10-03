# Community CPS editor (linked upstream)

**Upstream:** [cruzerdlc/RT-950-950Pro-Editor](https://github.com/cruzerdlc/RT-950-950Pro-Editor)  
**Local checkout:** [`docs/RT-950-950Pro-Editor/`](RT-950-950Pro-Editor/) (git submodule)

## What it is

Windows community programming app (MIT) for **RT-950 / RT-950 Pro** — alternative to OEM Radtel CPS. Supports USB/COM codeplug read/write, experimental BLE, `.dat` files, channel/zone/APRS/DTMF/modulation editing, and CSV import/export. Created by **KK4OXN**; current stable noted in upstream README (e.g. v0.8.40).

Independent of Radtel; not OEM software.

## Relation to this repo

| This workspace (`webaugur/radtel-950-pro`) | Community editor |
|-------------------------------------------|------------------|
| MCU firmware RE, `fwcrypt_io.py`, `radtel_flash.py` (EnUPDATE path) | Codeplug / settings UI + radio R/W |
| CPS IL teardown: [`cps_teardown.md`](cps_teardown.md) | Practical replacement for OEM CPS day-to-day |
| Protocol notes still incomplete for our own Python CPS | Upstream already implements read/write |

Prefer the submodule for interactive programming; keep OEM CPS / IL artifacts for protocol documentation and Linux automation work.

## Clone / update submodule

```bash
# first clone of this repo with submodules
git clone --recurse-submodules https://github.com/webaugur/radtel-950-pro.git

# existing clone
git submodule update --init --recursive docs/RT-950-950Pro-Editor

# refresh to upstream tip (on the tracked branch)
git -C docs/RT-950-950Pro-Editor fetch origin
git -C docs/RT-950-950Pro-Editor checkout main
git -C docs/RT-950-950Pro-Editor pull --ff-only
```

Build/run instructions: see [`RT-950-950Pro-Editor/README.md`](RT-950-950Pro-Editor/README.md).
