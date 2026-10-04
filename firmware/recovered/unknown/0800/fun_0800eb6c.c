/**
 * @brief fun_0800eb6c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800eb6c, Ghidra name FUN_0800eb6c, 20 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800eb6c(void)

{
  int iVar1;
  
  iVar1 = DAT_0800eb80;
  *(uint *)(DAT_0800eb80 + 0x10) = *(uint *)(DAT_0800eb80 + 0x10) | 0x80;
  *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 0x80;
  return;
}

