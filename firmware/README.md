# RT-950 firmware

A new AT32F403A image. It is not the OEM firmware and it is not flashed.

The source of the decompile is V0.29, `re/firmware/decrypted_v0.29.bin`. Ghidra wrote one `.c` file per function to `re/firmware/RE/v0.29/decompile/`. `firmware/recovered/` is that export split by address, with Doxygen banners. It is not linked. `firmware/src/` is the code this project builds.

`firmware/docs/memory-map.md` records what the decompile covers and why the old bootloader export is not this image. `firmware/docs/function-catalog.md` is one line per function. `firmware/docs/xrefs.md` and `firmware/docs/strings.md` are the register and string maps. `firmware/docs/at32-and-arm.md` is the header map.

## Build

```bash
cmake -S firmware -B firmware/build
cmake --build firmware/build
```

The output is `firmware/build/rt950-firmware.elf` and `.bin`. Startup and `SystemInit` come from `re/sdk/reference-project/radtel`. The CRC in `src/crc16.c` is the V0.29 buffer loop at `0x0800A878`. `src/flash_oem.c` is the flash status, word-program, unlock, and lock cluster at `0x0800EAF0`. `src/crm_oem.c` is the clock and bus-clock cluster at `0x0801A5DC`, including `FUN_08020440` and `FUN_08021e8c`. `firmware/docs/call-graph.md` lists who calls them. The radio's flash status numbers are 1 through 5, not the Artery enum. The linker script keeps `.rt950_oem` so those functions stay in the image. `main` calls only the CRC.
