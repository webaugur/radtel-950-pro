/**
 * @brief fun_0800eb18
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800eb18, Ghidra name FUN_0800eb18, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800eb18(void)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if ((*(uint *)(DAT_0800eb3c + 0x4c) & 1) != 0) {
    return 1;
  }
  if (*(int *)(DAT_0800eb3c + 0x4c) << 0x1d < 0) {
    uVar1 = 2;
  }
  else if (*(int *)(DAT_0800eb3c + 0x4c) << 0x1b < 0) {
    return 3;
  }
  return uVar1;
}

