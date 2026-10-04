/**
 * @brief fun_0800fee8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800fee8, Ghidra name FUN_0800fee8, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800fee8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_30 [32];
  
  FUN_08001016(auStack_30,0x20);
  FUN_08021824(param_1 << 5,auStack_30,0x20);
  iVar1 = FUN_08000e06(auStack_30,param_2,0x20);
  if ((iVar1 != 0) || (iVar1 = FUN_08000e06(param_3,param_2 + 0x14,0xc), iVar1 != 0)) {
    FUN_0800f3c0(param_1,param_2,param_3);
  }
  return;
}

