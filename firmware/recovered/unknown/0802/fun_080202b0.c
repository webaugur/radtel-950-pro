/**
 * @brief fun_080202b0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080202b0, Ghidra name FUN_080202b0, 74 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080202b0(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 < 0x20) {
    if (4 < (uVar1 - 0x10 & 0xff)) {
      return 1;
    }
    uVar1 = (uVar1 - 0x10 & 0x7f) << 1;
  }
  else {
    uVar1 = uVar1 - 0x20 & 0xff;
    if (4 < uVar1) {
      return 1;
    }
    uVar1 = uVar1 * 2 + 1 & 0xff;
  }
  if (0x13 < param_1[uVar1 + 1]) {
    return 1;
  }
  *(undefined4 *)(DAT_08020300 + 8) = *(undefined4 *)(DAT_080202fc + (uint)param_1[uVar1 + 1] * 5);
  return 0;
}

