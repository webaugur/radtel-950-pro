/**
 * @brief fun_0800a154
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a154, Ghidra name FUN_0800a154, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a154(void)

{
  int iVar1;
  
  iVar1 = DAT_0800a170;
  *(undefined4 *)(DAT_0800a170 + 4) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_08000fd2(iVar1 + 0x12,0x40);
  iVar1 = DAT_0800a174;
  *(undefined4 *)(DAT_0800a174 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}

