# V0.29 decompile and memory map

Image of record: `re/firmware/decrypted_v0.29.bin`, 385,824 bytes. Loaded at `0x08000000` as ARM Cortex little-endian Thumb. Reset vector in the file is `0x080032A1` (Thumb bit set), so the handler address is `0x080032A0`. `Ver0.29` is the ASCII string at `0x0805D9EC`, next to `Ver1.00`.

Ghidra 12.1.2 produced `re/firmware/RE/v0.29/decompile/`. After the coverage pass the index has 1,523 functions, every one decompiled, none failed. Radare2 6.0.7 lists 1,178 functions in `re/firmware/RE/radare2/exports/functions_v0.29.txt`. The two tools do not agree on every start address. The Ghidra C is the text under `firmware/recovered/`. The radare2 list is the check.

## Coverage

| Region | Ghidra functions |
| --- | --- |
| Below `0x0802A000` | 1,196 |
| `0x0802A000` and above | 281 |
| `0x08040000` and above | 85 |
| `0x08050000` and above | 0 |

The highest function still starts at `0x0804FD8C`. From about `0x08050000` the image is sparse and then a string table. Nothing in the decompile references `Ver0.29` or `0x0805D9EC`.

## Coverage pass

`CoverV029.java` reopened the saved project. Outside existing functions it cleared stray instructions and defined data, then created a function only at a call or branch target or at a Thumb `PUSH` (high byte `0xB5`) or `PUSH.W` (`0xE92D`).

| | Before | After |
| --- | --- | --- |
| Functions | 1,477 | 1,523 |
| Bytes inside functions | 150,771 (39.1%) | 153,879 (39.9%) |
| Unclassified runs | 12,845 runs, 96,252 bytes | 12,666 runs, 93,663 bytes |
| Longest unclassified run | 343 bytes at `0x0803C096` | 343 bytes at `0x0803C096` |

Ghidra defined these bytes as data outside functions: 85,838 zeros, 21,094 `0xFF`, 5,525 string bytes, 5,348 pointer bytes. The script created 43 functions. Analysis brought the total to 1,523. 185 entry addresses were refused because the address was already data. 7,578 entries were already inside a function.

The long runs that remain were not disassembled. `0x0803C096` (343 bytes) and `0x0803B05C` (342 bytes) are a repeating `AE 73` pattern, not a `PUSH` and not a call target. `0x0805A582` (340 bytes) is a table of little-endian words whose first halfword is `0x3F80`. They are not zeros, `0xFF`, ASCII, or pointers, so the data rules left them unmarked, and the entry rules left them un-disassembled.

`re/firmware/RE/bootloader/bootloader_dump_dissassembled.c` stops at `0x08029E1C` and is not this image. Do not rename V0.29 functions by pasting addresses from `re/docs/Function_Names.csv` or from that export.

## CRC-16

Both clear images contain the same two CRC-16 loops (polynomial `0x1021`, init 0, test the high bit, eight shifts per byte). The bodies match. The addresses differ by about `0xA90`.

| Role | V0.29 | V0.18 |
| --- | --- | --- |
| CRC of bytes read by a call | `movw` at `0x08008B10`, function `FUN_08008ad8` | `movw` at `0x080095A4` |
| CRC of a memory buffer, residue left in r0 | `movw` at `0x0800A880`, function `FUN_0800a878` | `movw` at `0x0800B320` |

The address `0x0800B410` in the old bootloader notes is neither of those `movw` sites. On V0.29 the nearest function start at or below it is `FUN_0800b328`, 232 bytes earlier. The old export is a closer address neighborhood to V0.18 than to V0.29, and it is not a byte-identical copy of either image at `0x0800B410`.

`firmware/src/crc16.c` is the buffer loop, with the r0 return the decompiler dropped.

## Register and string map

`firmware/docs/xrefs.md` is the literal-pool map for the 1,523 functions. A `DAT_08xxxxxx` slot is the little-endian word at that address. Peripheral names come from `at32f403a_407.h`. `USD_BASE` is only the 48-byte user system data block at `0x1FFFF800`. `firmware/docs/strings.md` lists the upper string table from `0x0805C700` and the English phrases embedded below that. Four strings have an absolute pointer in the image: `KISS(UART)`, `Level 8`, `UTC+6`, and `ZONE SELECT`. The rest have no absolute pointer in the file.

## Updater notes do not land on the same addresses

| Old note | V0.29 |
| --- | --- |
| `0x0800E500` RX parser | Not a function start. Nearest start `FUN_0800e494` (108 bytes earlier). That decompile has no `0xAA` or `0x55`. |
| `0x0800DF4C` TX queue | Not a function start. Nearest start `FUN_0800de28` (292 bytes earlier). No `0xAA` or `0x55` in that decompile. |
| `0x0801FDB8` chunk writer | A label inside `FUN_0801fc70`, not its entry. `0xAA` and `0x55` in that function are match and miss flags in a search loop, not frame markers. |
| `0x0800B410` CRC | See the CRC table. The buffer CRC on V0.29 is `FUN_0800a878`. |

Those four addresses are not renamed. The USB update path is not ported until a function in this decompile shows the `AA … 55` frame.

## What this tree links

`firmware/` links the AT32 startup at `0x08000000` (`re/sdk/reference-project/radtel/startup_at32f403a_407.s` and `AT32F403AxG_FLASH.ld`). Flash is 1024 KB at `0x08000000`. RAM is 96 KB at `0x20000000`, stack top `0x20018000`. The OEM reset at `0x080032A0` is 16 bytes. Ghidra's C for it uses incoming registers and is not a C runtime. Our `main` is reached from the AT32 startup after `SystemInit`. This tree is not flashed.
