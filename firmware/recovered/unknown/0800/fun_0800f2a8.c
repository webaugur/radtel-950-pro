/**
 * @brief fun_0800f2a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f2a8, Ghidra name FUN_0800f2a8, 26 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800f2a8(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(DAT_0800f2c4 + 0x1c) - *(int *)(DAT_0800f2c4 + 0x18);
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  if (*(ushort *)(DAT_0800f2c4 + 0x12) <= uVar1) {
    return 1;
  }
  return 0;
}

