/**
 * @brief fun_0800a8e8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a8e8, Ghidra name FUN_0800a8e8, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a8e8(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = ((int)DAT_0800a904 >> 0x12) << (param_1 & 0xff);
  if (param_2 != 0) {
    *DAT_0800a904 = *DAT_0800a904 | uVar1;
    return;
  }
  *DAT_0800a904 = *DAT_0800a904 & ~uVar1;
  return;
}

