/**
 * @brief fun_0800f3c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f3c0, Ghidra name FUN_0800f3c0, 82 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f3c0(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0800f414;
  iVar1 = (param_1 >> 7) << 0xc;
  FUN_08021824(iVar1,DAT_0800f414,0x1000);
  FUN_08021764(iVar1);
  iVar3 = iVar2 + (param_1 & 0x7f) * 0x20;
  FUN_08000ee4(iVar3,param_2,0x20);
  *(undefined4 *)(iVar3 + 0x14) = *param_3;
  *(undefined4 *)(iVar3 + 0x18) = param_3[1];
  *(undefined4 *)(iVar3 + 0x1c) = param_3[2];
  FUN_080219b8(iVar1,iVar2,0x1000);
  return;
}

