#pragma once

#include <stdint.h>

/**
 * @brief Words at `0x08000000` through `0x080001FC` in V0.29.
 *
 * Index 0 is the initial stack `0x20015F78`. Index 1 is the reset vector
 * `0x080032A1`. This table is not the vector table the linker installs.
 * The 16 bytes at that reset address are `rt950_oem_reset_bitfield` in
 * `oem_reset.s`: they store a bitfield at `[r0,#0x2c]` and pop
 * `{r4,r5,r6,pc}`. Nothing in the decompile calls them. They are not a
 * C runtime, so the linked `Reset_Handler` stays the AT32 startup.
 */
extern const uint32_t rt950_oem_vectors[128];
