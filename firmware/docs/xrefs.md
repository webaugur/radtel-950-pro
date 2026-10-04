# V0.29 register, string, and data map

Each `DAT_08xxxxxx` in the decompile is a literal-pool slot. The value is the little-endian word at that address in `decrypted_v0.29.bin`. A register match is the highest AT32 `*_BASE` in `at32f403a_407.h` that is at or below the word and still below the next base. Function names are the Ghidra names. This file does not rename them.

Pool values resolved for 862 of 1523 functions. 894 slots were not a pointer into flash, RAM, an AT32 block, or a named ARM system register. 106 functions load a peripheral address. 3 load a string. 746 load a RAM address.

The full per-function list is `firmware/docs/function-xrefs.tsv`.

## Registers

The offset after the block name is `word - BASE`. It is a byte offset into that block, not a field name from the driver struct. The table is every AT32 block a pool word names.

| Block | Functions |
| --- | --- |
| `GPIOB_BASE` | 27 |
| `GPIOC_BASE` | 22 |
| `GPIOA_BASE` | 20 |
| `GPIOE_BASE` | 18 |
| `CRM_BASE` | 10 |
| `FLASH_REG_BASE` | 6 |
| `DAC_BASE` | 5 |
| `DMA2_CHANNEL3_BASE` | 5 |
| `USART1_BASE` | 5 |
| `DMA1_CHANNEL1_BASE` | 4 |
| `GPIOD_BASE` | 4 |
| `ADC2_BASE` | 3 |
| `DMA1_BASE` | 3 |
| `DMA2_BASE` | 3 |
| `SPI2_BASE` | 3 |
| `TMR6_BASE` | 3 |
| `UART4_BASE` | 3 |
| `USART3_BASE` | 3 |
| `TMR1_BASE` | 2 |
| `TMR3_BASE` | 2 |
| `TMR4_BASE` | 2 |
| `TMR5_BASE` | 2 |
| `TMR8_BASE` | 2 |
| `ADC1_BASE` | 1 |
| `DMA2_CHANNEL1_BASE` | 1 |
| `IOMUX_BASE` | 1 |
| `TMR10_BASE` | 1 |
| `TMR11_BASE` | 1 |
| `TMR2_BASE` | 1 |
| `TMR7_BASE` | 1 |
| `TMR9_BASE` | 1 |
| `UART5_BASE` | 1 |
| `UART7_BASE` | 1 |
| `UART8_BASE` | 1 |
| `USART2_BASE` | 1 |
| `USART6_BASE` | 1 |

Functions for each block are listed here when there are 40 or fewer. Larger sets are counted only. The TSV has every function.

- `GPIOB_BASE`: `FUN_0800682c`, `FUN_08008ad8`, `FUN_08009810`, `FUN_0800a77c`, `FUN_0800db1c`, `FUN_0800dc68`, `FUN_08013e84`, `FUN_08014088`, `FUN_08014568`, `FUN_080151cc`, `FUN_08019960`, `FUN_0801a9a4`, `FUN_0801d228`, `FUN_080207ec`, `FUN_08021624`, `FUN_08021694`, `FUN_08021708`, `FUN_08021764`, `FUN_08021824`, `FUN_0802188c`, `FUN_08021934`, `FUN_08021a20`, `FUN_08021ef8`, `FUN_0802235c`, `FUN_08022954`, `FUN_08022eac`, `FUN_08022ee0`
- `GPIOC_BASE`: `FUN_08003808`, `FUN_08009810`, `FUN_0800a77c`, `FUN_0800de28`, `FUN_0800eccc`, `FUN_08010b84`, `FUN_08011928`, `FUN_08011ff8`, `FUN_08012438`, `FUN_08013560`, `FUN_08013e84`, `FUN_08014854`, `FUN_080151cc`, `FUN_08015824`, `FUN_08015868`, `FUN_08018744`, `FUN_08019224`, `FUN_08019960`, `FUN_0801b4c0`, `FUN_0801b70c`, `FUN_080207ec`, `FUN_08022f0c`
- `GPIOA_BASE`: `FUN_080077d0`, `FUN_08009810`, `FUN_080098ec`, `FUN_0800a6d4`, `FUN_0800de28`, `FUN_0800eccc`, `FUN_08010b84`, `FUN_08011928`, `FUN_08011ff8`, `FUN_08012438`, `FUN_08013560`, `FUN_08013e84`, `FUN_08014534`, `FUN_08018744`, `FUN_08019224`, `FUN_08019710`, `FUN_0801b4c0`, `FUN_0801c8fc`, `FUN_0801cd70`, `FUN_0802235c`
- `GPIOE_BASE`: `FUN_08006d54`, `FUN_08009810`, `FUN_0800999c`, `FUN_0800a77c`, `FUN_08013560`, `FUN_08013e84`, `FUN_08017154`, `FUN_08019960`, `FUN_0801a9a4`, `FUN_0801b9a0`, `FUN_0801c08c`, `FUN_0801c774`, `FUN_0801c840`, `FUN_0801c894`, `FUN_080207ec`, `FUN_08021ef8`, `FUN_0802235c`, `FUN_08023678`
- `CRM_BASE`: `FUN_0801a5dc`, `FUN_0801a5f4`, `FUN_0801a610`, `FUN_0801a62c`, `FUN_0801a648`, `FUN_0801a664`, `FUN_0801a680`, `FUN_0801a7a0`, `FUN_08020440`, `FUN_08021e8c`
- `FLASH_REG_BASE`: `FUN_0800eaf0`, `FUN_0800eb18`, `FUN_0800eb40`, `FUN_0800eb6c`, `FUN_0800eb84`, `FUN_0800ec20`
- `DAC_BASE`: `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a908`, `FUN_080195bc`, `FUN_0801b6c4`
- `DMA2_CHANNEL3_BASE`: `FUN_08003808`, `FUN_0800a994`, `FUN_0800d518`, `FUN_080195bc`, `FUN_08019710`
- `USART1_BASE`: `FUN_080077d0`, `FUN_08007894`, `FUN_08021b10`, `FUN_08022be0`, `FUN_08022ca4`
- `DMA1_CHANNEL1_BASE`: `FUN_0800339c`, `FUN_080033c8`, `FUN_080033d8`, `FUN_0800aa94`
- `GPIOD_BASE`: `FUN_08013560`, `FUN_08013e84`, `FUN_080279d4`, `FUN_08027a34`
- `ADC2_BASE`: `FUN_08013d88`, `FUN_08013dc4`, `FUN_08022f80`
- `DMA1_BASE`: `FUN_0800a9d4`, `FUN_0800a9ec`, `FUN_0800aa20`
- `DMA2_BASE`: `FUN_0800a9d4`, `FUN_0800a9ec`, `FUN_0800aa20`
- `SPI2_BASE`: `FUN_08014568`, `FUN_080217d0`, `FUN_080218d8`
- `TMR6_BASE`: `FUN_08003808`, `FUN_080195bc`, `FUN_08022194`
- `UART4_BASE`: `FUN_08022a68`, `FUN_08022ca4`, `FUN_08022f0c`
- `USART3_BASE`: `FUN_08014088`, `FUN_08022b34`, `FUN_08022ca4`
- `TMR1_BASE`: `FUN_08022194`, `FUN_080222fc`
- `TMR3_BASE`: `FUN_08022194`, `FUN_080222fc`
- `TMR4_BASE`: `FUN_08022194`, `FUN_080222fc`
- `TMR5_BASE`: `FUN_08022194`, `FUN_080222fc`
- `TMR8_BASE`: `FUN_08022194`, `FUN_080222fc`
- `ADC1_BASE`: `FUN_080033d8`
- `DMA2_CHANNEL1_BASE`: `FUN_0800aa94`
- `IOMUX_BASE`: `FUN_0801267c`
- `TMR10_BASE`: `FUN_08022194`
- `TMR11_BASE`: `FUN_08022194`
- `TMR2_BASE`: `FUN_08028a98`
- `TMR7_BASE`: `FUN_08022194`
- `TMR9_BASE`: `FUN_08022194`
- `UART5_BASE`: `FUN_08022ca4`
- `UART7_BASE`: `FUN_08022ca4`
- `UART8_BASE`: `FUN_08022ca4`
- `USART2_BASE`: `FUN_08022ca4`
- `USART6_BASE`: `FUN_08022ca4`

## Strings

| String | Functions |
| --- | --- |
| `KISS(UART)` | 1 |
| `Level 8` | 1 |
| `UTC+6` | 1 |

- `KISS(UART)`: `FUN_08014c68`
- `Level 8`: `FUN_080110fc`
- `UTC+6`: `FUN_08014d88`

The pool word often points into the string rather than at its first byte. `firmware/docs/strings.md` lists the on-disk address of every string in the upper table and the English phrases embedded lower in the image. Most of those have no absolute pointer in the file.

## Immediates

These pool words are not addresses. The named ones are IEEE-754 constants. The rest appear in at least 8 functions.

| Value | Meaning | Functions |
| --- | --- | --- |
| `0x7ff00000` | double +inf high word | 21 |
| `0x00007325` | ASCII `%s` | 18 |
| `0x7f800000` | float +inf | 17 |
| `0x7f7fffff` | float max finite | 16 |
| `0x7fc00000` | float NaN | 16 |
| `0x7ff80000` | double NaN high word | 16 |
| `0xffffffff` |  | 16 |
| `0x7fefffff` | double max finite high word | 15 |
| `0x000186a0` | 100000 | 13 |
| `0x26080318` |  | 10 |
| `0xd2f8d2a1` |  | 10 |
| `0xd2fad2fc` |  | 10 |
| `0xd3e0abdb` |  | 10 |
| `0xd3fdd2f2` |  | 10 |
| `0xe9bdf6f7` |  | 10 |
| `0xf0f3edbc` |  | 10 |
| `0xf8e7fcde` |  | 10 |
| `0x0046464f` | ASCII `OFF` | 8 |

## RAM

205 distinct RAM addresses are loaded from pools. The image does not contain the bytes at those addresses. They are runtime SRAM.

## Code pointers

18 distinct function pointers are loaded from pools.

- `code:0x08015ddc`: `FUN_080162d0`, `FUN_08016310`
- `code:0x08015930`: `FUN_08016ff8`
- `code:0x08015b20`: `FUN_08015f4c`
- `code:0x08015ed8`: `FUN_08016438`
- `code:0x08015fa0`: `FUN_08016474`
- `code:0x08016010`: `FUN_08016394`
- `code:0x0801608c`: `FUN_08016568`
- `code:0x08016464`: `FUN_08015aa0`
- `code:0x08016608`: `FUN_080160b8`
- `code:0x080166e0`: `FUN_0801ca8c`
- `code:0x080166f8`: `FUN_08016ba8`
- `code:0x080167c8`: `FUN_08016ca0`
- `code:0x0801ec8c`: `FUN_0800ad30`
- `code:0x0801f494`: `FUN_0800ad30`
- `code:0x08029ab4`: `FUN_08015c68`
- `code:FUN_08015a38`: `FUN_08015cf4`
- `code:FUN_08015ea0`: `FUN_08016360`
- `code:FUN_08016a00`: `FUN_080170b0`

## Other

A peripheral hit is kept only when the address is below the next `*_BASE` and inside that block's span: 0x400 for a normal block, 0x30 for `USD_BASE` (48 bytes, RM Rev 2.07), 0x100 for `FLASH_REG_BASE`. `SCB.VTOR`, `SCB.AIRCR`, `SCB.CPACR`, and `SCB.SHP` are the names from `core_cm4.h`. `SCB.SHP` is the 12-byte system-handler priority array at SCB+0x18. `reserved-info` is the gap `0x1FFFF830`–`0x1FFFFFFF` in Figure 2-1 of that manual. `flash+` is a file offset from `0x08000000`. `flash+0x308ac` is a halfword table, mostly a `0xC7` lead byte, not a C string. `flash+0x2ca58` is not ASCII and not a pointer to a string.

| Target | Functions |
| --- | --- |
| `flash+0x2ca58` | 10 |
| `flash+0x308ac` | 9 |
| `SCB.AIRCR` | 7 |
| `flash+0x2c94e` | 6 |
| `flash+0x3f946` | 6 |
| `flash+0x308ca` | 5 |
| `flash+0x3089c` | 4 |
| `flash+0x308a2` | 4 |
| `flash+0x30b60` | 4 |
| `flash+0x3838a` | 4 |
| `flash+0x3863e` | 4 |
| `flash+0x30966` | 3 |
| `flash+0x30c1e` | 3 |
| `flash+0x311a8` | 3 |
| `flash+0x2cabe` | 2 |
| `flash+0x308a8` | 2 |
| `flash+0x30c00` | 2 |
| `flash+0x30ca4` | 2 |
| `flash+0x310cc` | 2 |
| `flash+0x310ea` | 2 |
| `flash+0x3b9dc` | 2 |
| `flash+0x3f152` | 2 |
| `flash+0x3f844` | 2 |
| `flash+0x4aca4` | 2 |
| `flash+0x4aeac` | 2 |
| `flash+0x4b17c` | 2 |
| `flash+0x58038` | 2 |
| `flash+0x5cf62` | 2 |
| `SCB.CPACR` | 1 |
| `SCB.SHP+0xb` | 1 |
| `SCB.VTOR` | 1 |
| `flash+0x15960` | 1 |
| `flash+0x163f4` | 1 |
| `flash+0x164c8` | 1 |
| `flash+0x1655c` | 1 |
| `flash+0x16850` | 1 |
| `flash+0x16930` | 1 |
| `flash+0x1f374` | 1 |
| `flash+0x1f440` | 1 |
| `flash+0x2c92e` | 1 |

