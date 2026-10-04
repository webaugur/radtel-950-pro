/**
 * @brief fun_08022e54
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022e54, Ghidra name FUN_08022e54, 78 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022e54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = param_1 * 0x20;
  FUN_080154a4(0xb,0xe4,iVar1 + 0x9cU & 0xffff,iVar1 + 0xb8U & 0xffff,1,0x3377,param_4);
  iVar3 = param_1 * 0x11 + DAT_08022ea4;
  *(undefined1 *)(iVar3 + 0x10) = 0;
  uVar4 = 0x3377;
  uVar5 = 0xffff;
  uVar6 = 0;
  uVar2 = FUN_08014f44(iVar1 + 0x9eU & 0xffff,0xe,iVar3,0x18);
  FUN_08015500(uVar2,uVar4,uVar5,uVar6);
  return;
}

