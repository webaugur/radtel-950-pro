# Radtel 950 Pro reverse engineering

Notes, captures, OEM packages, and vendor SDKs for the Radtel RT-950 Pro. The program this repository ships is the Rust CPS described in the [root README](../README.md). This tree is the hardware and firmware archive that work came from.

The short-term goal here is to document the hardware and OEM firmware behaviour. The long-term goal is an open replacement firmware.

## What is where

| Path | Contents |
|------|----------|
| `re/firmware/` | Decrypted images, radare2 notes, flash scripts, BTF packages, and EnUPDATE. Details are in [`re/firmware/README.md`](firmware/README.md). |
| `re/cps/` | OEM CPS IL, installers, resources, USB captures, and the Python codeplug shell. |
| `re/docs/` | Pinout, display, SPI flash, audio, function names, and status notes. |
| `re/datasheets/` | AT32F403A datasheet and reference manual. |
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
