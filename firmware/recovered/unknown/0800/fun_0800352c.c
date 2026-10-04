/**
 * @brief fun_0800352c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800352c, Ghidra name FUN_0800352c, 30 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_0800352c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1 & 0xff) {
    iVar1 = iVar1 * 0x5b + -0x21 + (uint)*(byte *)(param_1 + uVar2);
  }
  return iVar1;
}

