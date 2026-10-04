# V0.29 peripheral call graph

A function is in this graph when `firmware/docs/function-xrefs.tsv` shows it loading an AT32 `*_BASE`. Edges are `FUN_` calls in the Ghidra text. The four flash wait routines are included because `FUN_0800eb84` calls them; they do not load `FLASH_REG` themselves.

110 functions. 135 calls stay inside the set.

`FUN_0801a680` loads `CRM_BASE` and is not ported. Its pool word `0x0802C92E` is not the divider table in `crm_clocks_freq_get`.

## Inside the peripheral set

### `GPIOB_BASE`

- `FUN_0800682c` calls `FUN_08003808`
- `FUN_08008ad8` calls `FUN_080217d0`, `FUN_080218d8`
- `FUN_08009810` calls none in this set
- `FUN_0800a77c` calls `FUN_08009810`, `FUN_0800a8c8`, `FUN_08010b84`, `FUN_08012438`, `FUN_08013dc4`, `FUN_080207ec`
- `FUN_0800db1c` calls `FUN_0800dc68`
- `FUN_0800dc68` calls none in this set
- `FUN_08013e84` calls `FUN_0801267c`, `FUN_0801a5f4`, `FUN_0801a610`, `FUN_0801a648`
- `FUN_08014088` calls `FUN_08022be0`
- `FUN_08014568` calls none in this set
- `FUN_080151cc` calls none in this set
- `FUN_08019960` calls none in this set
- `FUN_0801a9a4` calls `FUN_0801b70c`
- `FUN_0801d228` calls `FUN_080077d0`
- `FUN_080207ec` calls none in this set
- `FUN_08021624` calls `FUN_080218d8`, `FUN_08021a20`
- `FUN_08021694` calls `FUN_080218d8`, `FUN_08021a20`
- `FUN_08021708` calls `FUN_080218d8`, `FUN_08021a20`
- `FUN_08021764` calls `FUN_080218d8`, `FUN_08021a20`
- `FUN_08021824` calls `FUN_080217d0`, `FUN_080218d8`
- `FUN_0802188c` calls `FUN_080217d0`, `FUN_080218d8`
- `FUN_08021934` calls `FUN_080218d8`, `FUN_08021a20`
- `FUN_08021a20` calls `FUN_080218d8`
- `FUN_08021ef8` calls `FUN_08006d54`, `FUN_080077d0`, `FUN_08013560`, `FUN_08014534`, `FUN_08015824`, `FUN_08015868`, `FUN_08019960`, `FUN_080207ec`, `FUN_08021824`
- `FUN_0802235c` calls `FUN_0800a8c8`, `FUN_08015868`, `FUN_0801a9a4`, `FUN_080207ec`, `FUN_08022ee0`
- `FUN_08022954` calls `FUN_08015868`
- `FUN_08022eac` calls none in this set
- `FUN_08022ee0` calls none in this set

### `GPIOC_BASE`

- `FUN_08003808` calls `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a9d4`, `FUN_0800d518`, `FUN_08022194`
- `FUN_08009810` calls none in this set
- `FUN_0800a77c` calls `FUN_08009810`, `FUN_0800a8c8`, `FUN_08010b84`, `FUN_08012438`, `FUN_08013dc4`, `FUN_080207ec`
- `FUN_0800de28` calls `FUN_08009810`, `FUN_0800eccc`, `FUN_08015824`, `FUN_08015868`, `FUN_0801b70c`
- `FUN_0800eccc` calls none in this set
- `FUN_08010b84` calls `FUN_0801b70c`
- `FUN_08011928` calls `FUN_0801b70c`, `FUN_080207ec`
- `FUN_08011ff8` calls `FUN_0801b70c`, `FUN_080207ec`
- `FUN_08012438` calls `FUN_0801b70c`, `FUN_080207ec`
- `FUN_08013560` calls none in this set
- `FUN_08013e84` calls `FUN_0801267c`, `FUN_0801a5f4`, `FUN_0801a610`, `FUN_0801a648`
- `FUN_08014854` calls `FUN_08021b10`
- `FUN_080151cc` calls none in this set
- `FUN_08015824` calls none in this set
- `FUN_08015868` calls none in this set
- `FUN_08018744` calls `FUN_0800eccc`, `FUN_0801b4c0`, `FUN_0801b70c`
- `FUN_08019224` calls `FUN_0800eccc`, `FUN_08015824`, `FUN_0801a9a4`, `FUN_0801b70c`, `FUN_080207ec`
- `FUN_08019960` calls none in this set
- `FUN_0801b4c0` calls `FUN_0801b70c`
- `FUN_0801b70c` calls none in this set
- `FUN_080207ec` calls none in this set
- `FUN_08022f0c` calls `FUN_08022be0`

### `GPIOA_BASE`

- `FUN_080077d0` calls `FUN_0801a648`, `FUN_08022be0`
- `FUN_08009810` calls none in this set
- `FUN_080098ec` calls none in this set
- `FUN_0800a6d4` calls `FUN_0800a77c`
- `FUN_0800de28` calls `FUN_08009810`, `FUN_0800eccc`, `FUN_08015824`, `FUN_08015868`, `FUN_0801b70c`
- `FUN_0800eccc` calls none in this set
- `FUN_08010b84` calls `FUN_0801b70c`
- `FUN_08011928` calls `FUN_0801b70c`, `FUN_080207ec`
- `FUN_08011ff8` calls `FUN_0801b70c`, `FUN_080207ec`
- `FUN_08012438` calls `FUN_0801b70c`, `FUN_080207ec`
- `FUN_08013560` calls none in this set
- `FUN_08013e84` calls `FUN_0801267c`, `FUN_0801a5f4`, `FUN_0801a610`, `FUN_0801a648`
- `FUN_08014534` calls `FUN_08014088`
- `FUN_08018744` calls `FUN_0800eccc`, `FUN_0801b4c0`, `FUN_0801b70c`
- `FUN_08019224` calls `FUN_0800eccc`, `FUN_08015824`, `FUN_0801a9a4`, `FUN_0801b70c`, `FUN_080207ec`
- `FUN_08019710` calls `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a9d4`, `FUN_0800d518`, `FUN_080207ec`, `FUN_08021824`
- `FUN_0801b4c0` calls `FUN_0801b70c`
- `FUN_0801c8fc` calls `FUN_080033c8`, `FUN_08015824`, `FUN_0801a9a4`, `FUN_080207ec`
- `FUN_0801cd70` calls `FUN_08014534`
- `FUN_0802235c` calls `FUN_0800a8c8`, `FUN_08015868`, `FUN_0801a9a4`, `FUN_080207ec`, `FUN_08022ee0`

### `GPIOE_BASE`

- `FUN_08006d54` calls `FUN_08013560`, `FUN_080151cc`
- `FUN_08009810` calls none in this set
- `FUN_0800999c` calls none in this set
- `FUN_0800a77c` calls `FUN_08009810`, `FUN_0800a8c8`, `FUN_08010b84`, `FUN_08012438`, `FUN_08013dc4`, `FUN_080207ec`
- `FUN_08013560` calls none in this set
- `FUN_08013e84` calls `FUN_0801267c`, `FUN_0801a5f4`, `FUN_0801a610`, `FUN_0801a648`
- `FUN_08017154` calls `FUN_0800682c`, `FUN_0800a6d4`, `FUN_0800de28`, `FUN_08011ff8`, `FUN_08013560`, `FUN_08018744`, `FUN_08019224`
- `FUN_08019960` calls none in this set
- `FUN_0801a9a4` calls `FUN_0801b70c`
- `FUN_0801b9a0` calls none in this set
- `FUN_0801c08c` calls `FUN_0801b9a0`
- `FUN_0801c774` calls `FUN_0801b9a0`
- `FUN_0801c840` calls `FUN_0801b9a0`
- `FUN_0801c894` calls `FUN_0801b9a0`
- `FUN_080207ec` calls none in this set
- `FUN_08021ef8` calls `FUN_08006d54`, `FUN_080077d0`, `FUN_08013560`, `FUN_08014534`, `FUN_08015824`, `FUN_08015868`, `FUN_08019960`, `FUN_080207ec`, `FUN_08021824`
- `FUN_0802235c` calls `FUN_0800a8c8`, `FUN_08015868`, `FUN_0801a9a4`, `FUN_080207ec`, `FUN_08022ee0`
- `FUN_08023678` calls `FUN_080207ec`

### `CRM_BASE`

- `FUN_0801a5dc` calls none in this set
- `FUN_0801a5f4` calls none in this set
- `FUN_0801a610` calls none in this set
- `FUN_0801a62c` calls none in this set
- `FUN_0801a648` calls none in this set
- `FUN_0801a664` calls none in this set
- `FUN_0801a680` calls none in this set
- `FUN_0801a7a0` calls none in this set
- `FUN_08020440` calls `FUN_0801a7a0`
- `FUN_08021e8c` calls `FUN_08020440`

### `FLASH_REG_BASE`

- `FUN_0800eaf0` calls none in this set
- `FUN_0800eb18` calls none in this set
- `FUN_0800eb40` calls none in this set
- `FUN_0800eb6c` calls none in this set
- `FUN_0800eb84` calls `FUN_0800ec3c`, `FUN_0800ec5c`, `FUN_0800ec7c`, `FUN_0800ec9c`
- `FUN_0800ec20` calls none in this set

### `DAC_BASE`

- `FUN_0800a8c8` calls none in this set
- `FUN_0800a8e8` calls none in this set
- `FUN_0800a908` calls none in this set
- `FUN_080195bc` calls `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a908`, `FUN_0800aa94`, `FUN_0801a5f4`
- `FUN_0801b6c4` calls none in this set

### `DMA2_CHANNEL3_BASE`

- `FUN_08003808` calls `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a9d4`, `FUN_0800d518`, `FUN_08022194`
- `FUN_0800a994` calls `FUN_0800a9d4`, `FUN_0800aa20`, `FUN_0800d518`
- `FUN_0800d518` calls none in this set
- `FUN_080195bc` calls `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a908`, `FUN_0800aa94`, `FUN_0801a5f4`
- `FUN_08019710` calls `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a9d4`, `FUN_0800d518`, `FUN_080207ec`, `FUN_08021824`

### `USART1_BASE`

- `FUN_080077d0` calls `FUN_0801a648`, `FUN_08022be0`
- `FUN_08007894` calls none in this set
- `FUN_08021b10` calls `FUN_08022be0`, `FUN_08022ca4`
- `FUN_08022be0` calls `FUN_0801a680`
- `FUN_08022ca4` calls `FUN_0801a62c`, `FUN_0801a664`

### `DMA1_CHANNEL1_BASE`

- `FUN_0800339c` calls `FUN_0800a9ec`
- `FUN_080033c8` calls none in this set
- `FUN_080033d8` calls `FUN_0801a610`, `FUN_080222fc`
- `FUN_0800aa94` calls none in this set

### `GPIOD_BASE`

- `FUN_08013560` calls none in this set
- `FUN_08013e84` calls `FUN_0801267c`, `FUN_0801a5f4`, `FUN_0801a610`, `FUN_0801a648`
- `FUN_080279d4` calls none in this set
- `FUN_08027a34` calls none in this set

### `ADC2_BASE`

- `FUN_08013d88` calls none in this set
- `FUN_08013dc4` calls none in this set
- `FUN_08022f80` calls `FUN_0801a5dc`, `FUN_0801a648`

### `DMA1_BASE`

- `FUN_0800a9d4` calls none in this set
- `FUN_0800a9ec` calls none in this set
- `FUN_0800aa20` calls none in this set

### `DMA2_BASE`

- `FUN_0800a9d4` calls none in this set
- `FUN_0800a9ec` calls none in this set
- `FUN_0800aa20` calls none in this set

### `SPI2_BASE`

- `FUN_08014568` calls none in this set
- `FUN_080217d0` calls none in this set
- `FUN_080218d8` calls none in this set

### `TMR6_BASE`

- `FUN_08003808` calls `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a9d4`, `FUN_0800d518`, `FUN_08022194`
- `FUN_080195bc` calls `FUN_0800a8c8`, `FUN_0800a8e8`, `FUN_0800a908`, `FUN_0800aa94`, `FUN_0801a5f4`
- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`

### `UART4_BASE`

- `FUN_08022a68` calls `FUN_080098ec`
- `FUN_08022ca4` calls `FUN_0801a62c`, `FUN_0801a664`
- `FUN_08022f0c` calls `FUN_08022be0`

### `USART3_BASE`

- `FUN_08014088` calls `FUN_08022be0`
- `FUN_08022b34` calls none in this set
- `FUN_08022ca4` calls `FUN_0801a62c`, `FUN_0801a664`

### `TMR1_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`
- `FUN_080222fc` calls none in this set

### `TMR3_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`
- `FUN_080222fc` calls none in this set

### `TMR4_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`
- `FUN_080222fc` calls none in this set

### `TMR5_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`
- `FUN_080222fc` calls none in this set

### `TMR8_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`
- `FUN_080222fc` calls none in this set

### `ADC1_BASE`

- `FUN_080033d8` calls `FUN_0801a610`, `FUN_080222fc`

### `DMA2_CHANNEL1_BASE`

- `FUN_0800aa94` calls none in this set

### `IOMUX_BASE`

- `FUN_0801267c` calls none in this set

### `TMR10_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`

### `TMR11_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`

### `TMR2_BASE`

- `FUN_08028a98` calls none in this set

### `TMR7_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`

### `TMR9_BASE`

- `FUN_08022194` calls `FUN_0801a62c`, `FUN_0801a664`

### `UART5_BASE`

- `FUN_08022ca4` calls `FUN_0801a62c`, `FUN_0801a664`

### `UART7_BASE`

- `FUN_08022ca4` calls `FUN_0801a62c`, `FUN_0801a664`

### `UART8_BASE`

- `FUN_08022ca4` calls `FUN_0801a62c`, `FUN_0801a664`

### `USART2_BASE`

- `FUN_08022ca4` calls `FUN_0801a62c`, `FUN_0801a664`

### `USART6_BASE`

- `FUN_08022ca4` calls `FUN_0801a62c`, `FUN_0801a664`

## Flash and clock callers

- `FUN_0800eaf0`: `FUN_0800ec3c`, `FUN_0800ec9c`
- `FUN_0800eb18`: `FUN_0800ec5c`
- `FUN_0800eb40`: `FUN_0800ec7c`
- `FUN_0800eb6c`: `FUN_0800808c`
- `FUN_0800eb84`: `FUN_0800808c`
- `FUN_0800ec20`: `FUN_0800808c`
- `FUN_0800ec3c` (flash bank1 wait): `FUN_0800eb84`
- `FUN_0800ec5c` (flash bank2 wait): `FUN_0800eb84`
- `FUN_0800ec7c` (flash spim wait): `FUN_0800eb84`
- `FUN_0800ec9c` (flash bank1 wait): `FUN_0800eb84`
- `FUN_0801a5dc`: `FUN_08022f80`
- `FUN_0801a5f4`: `FUN_08013e84`, `FUN_080195bc`
- `FUN_0801a610`: `FUN_080033d8`, `FUN_08013e84`
- `FUN_0801a62c`: `FUN_08022194`, `FUN_08022ca4`
- `FUN_0801a648`: `FUN_080077d0`, `FUN_08013e84`, `FUN_08022f80`
- `FUN_0801a664`: `FUN_08022194`, `FUN_08022ca4`
- `FUN_0801a680`: `FUN_08022be0`
- `FUN_0801a7a0`: `FUN_08020440`
- `FUN_08020440`: `FUN_08021e8c`
- `FUN_08021e8c`: no caller in the decompile

