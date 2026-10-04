# Radtel 950 Pro reverse engineering

Notes, captures, OEM packages, and vendor SDKs for the Radtel RT-950 Pro. The program this repository ships is the Rust CPS described in the [root README](../README.md). This tree is the hardware and firmware archive that work came from.

The short-term goal here is to document the hardware and OEM firmware behaviour. The long-term goal is an open replacement firmware.

## What is where

| Path | Contents |
|------|----------|
| `re/firmware/` | Decrypted images, radare2 notes, flash scripts, BTF packages, and EnUPDATE. Details are in [`re/firmware/README.md`](firmware/README.md). |
| `re/cps/` | OEM CPS IL, installers, resources, USB captures, and the Python codeplug shell. |
| `re/docs/` | Pinout, display, SPI flash, audio, function names, and status notes. |
| `re/datasheets/` | AT32F403A datasheet and reference manual, BK4829, the CH340 cable datasheet, the Si4732-A10 short sheet, and AN332. |
| `re/sdk/` | Artery BSP (`artery_cortex-m4/`) and the reference project (`reference-project/`). |

CPS teardown: [`re/cps/cps_teardown.md`](cps/cps_teardown.md).

Community CPS alternative (git submodule): **[cruzerdlc/RT-950-950Pro-Editor](https://github.com/cruzerdlc/RT-950-950Pro-Editor)** at `re/cps/RT-950-950Pro-Editor/`. Notes are in [`re/cps/community-cps-editor.md`](cps/community-cps-editor.md).

## Project status

- **MCU**: Artery AT32F403A (Cortex-M4F). Reference BSP, linker scripts, and peripheral headers are archived under `re/sdk/reference-project/` and `re/sdk/artery_cortex-m4/`.
- **OEM firmware**: Prefer **V0.29** clear image `re/firmware/decrypted_v0.29.bin` (from `RT_950Pro_V0.29_*.BTF` via `re/firmware/scripts/fwcrypt_io.py`). Legacy V0.18 remains as `re/firmware/decrypted.bin`. Tooling notes: `re/docs/rizin_setup.md`. Status: `re/docs/re_status.md`. Older Ghidra/C exports are low-trust. Primary analysis is **radare2/iaito** (`re/firmware/RE/radare2/`).
- **Peripherals**:
  - BK4829 RF transceivers: one on hardware SPI1, the second via bit-banged SPI on GPIOA.
  - SI4732 broadcast receiver: bit-banged I2C on PA8/PA9.
  - Display: 320×240 TFT on a GPIOD[15:8] 8080 bus, driven through custom routines (`LCD_WriteCommand`, `LCD_WriteData`, and the rest).
  - Keypad, encoder, PTT relays, band relays, and the audio front-end are mapped in `re/docs/pinout.md` and `re/docs/display.md`.
- **Function catalogue**: Human-readable names and annotations are tracked in `re/docs/Function_Names.csv`.

## Hardware notes

- **MCU clocks and memory**: `re/sdk/reference-project/radtel/AT32F403AxG_FLASH.ld` is the flash and RAM layout. Stack and heap sizes match the OEM firmware.
- **Display**: The TFT responds to DCS commands 0x2A/0x2B/0x2C. Pixel data is RGB565 sourced from 0x20000BD0. Timing is in `re/docs/display.md`.
- **RF chain**: BK4829 configuration uses a mixture of 4k/32k/64k SPI flash erase commands (`Software_SPI_FlashErase*`). Check those before changing channel memories.
- **Datasheet files**:
  - AT32F403A: `DS_AT32F403A_V2.04_EN.pdf` and `RM_AT32F403A_407_V2.07_EN.pdf`. The workbench names package `AT32F403AVGT7`. That letter is not measured from the radio.
  - Cable: `CH340DS1-EN_V3D.pdf` (WCH, 17 pages, 12 March 2025). The sheet's default USB id is 1A86/7523. The OEM CPS read used `1a86:7523` on `/dev/ttyUSB0`.
  - `Si4732-A10_short.pdf` is the Skyworks 3-page short sheet. The vendor page returned HTML, so this copy is the one published at `download.mikroe.com`. `AN332_Si47xx.pdf` is the Skyworks programming guide of 29 October 2024. It says Si4732-A10 matches the Si4735-D60 FM and AM/SW/LW firmware.
  - `DS-BK4829-E01_V1.0.pdf` is Beken DS-BK4829-E01 V1.0, 26 May 2023, 28 pages. BK4829 and SI4732 are the names in this file and in `re/docs/pinout.md`. Those notes still use the older `FUN_8000xxxx` addresses. No photo in the working set shows a chip marking.
  - The SPI NOR and the 320×240 display controller have no part number in the notes. No datasheet was fetched for them.

## Toward custom firmware

1. **Toolchain**: The reference project builds with Arm GCC. Confirm version alignment (the AT32 SDK typically targets GCC 10.x). A future custom firmware can start from the vendor BSP or from an open stack such as OpenRTX.
2. **Boot and flash**: Map the bootloader entry points before flashing. OEM firmware performs signature checks. The bootloader has to accept an unsigned image, or the image needs a bypass.
3. **Drivers**:
   - GPIO, timers, and ADC/DAC are already documented and can be ported.
   - Display: an 8080 parallel driver using the routines in `re/docs/display.md`.
   - RF: reverse or replace the BK4829 register sequences. Current init blocks are at `FUN_80007f04` (hardware SPI) and the `Software_SPI_Write_Block` flows.

## Next steps

- Fill in missing function names and record the diffs in `re/docs/Function_Names.csv`.
- Capture logic traces for the display and SPI flash to confirm controller IDs.
- Document the bootloader and the flash layout boundaries.
- Once the core drivers are ready, scaffold a minimal blink firmware and an LCD test pattern before a full-feature firmware.

## Credits

OEM firmware and the reference BSP belong to Radtel and Artery. The work in this tree is for education and interoperability.
