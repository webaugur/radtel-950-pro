/**
 * @brief fun_08012fb8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012fb8, Ghidra name FUN_08012fb8, 42 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08012fb8(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((param_1 < *(ushort *)(DAT_08012fe4 + uVar1 * 4) ||
         (*(ushort *)(DAT_08012fe4 + (uVar1 * 2 + 1) * 2) <= param_1))) {
    uVar1 = uVar1 + 1 & 0xff;
    if (4 < uVar1) {
      return 0;
    }
  }
  return uVar1;
}

