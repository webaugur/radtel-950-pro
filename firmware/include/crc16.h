#pragma once

#include <stddef.h>
#include <stdint.h>

/**
 * @brief CRC-16/XMODEM over a byte buffer.
 *
 * Polynomial 0x1021, initial value 0, no reflection, xor-out 0.
 * This is the loop in V0.29 `FUN_0800a878` (`0x0800A878`). The decompiler
 * emitted that function as `void`. The Thumb sequence keeps the residue in
 * r0 and returns with `pop {r4, r5, r6, r7, pc}`, so r0 is the result.
 *
 * @param data Bytes to cover. A null pointer with a non-zero length is ignored
 *             and the function returns 0.
 * @param len  Number of bytes.
 * @return Residue in the low 16 bits.
 */
uint16_t crc16_xmodem(const uint8_t *data, size_t len);
