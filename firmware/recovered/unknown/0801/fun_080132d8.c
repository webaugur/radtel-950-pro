/**
 * @brief fun_080132d8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080132d8, Ghidra name FUN_080132d8, 142 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080132d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = _DAT_08013368 + param_1 * 2;
  if (*(byte *)(_DAT_08013368 + 0x43) == 1) {
    sVar1 = *(short *)(iVar2 + 0x24);
    if (sVar1 == -1) {
      FUN_08000850(DAT_08013378,s_CH__02d_0801337c,param_1 + 1,0xffff,param_4);
    }
    else {
      FUN_08000850(DAT_08013378,s_CH__02d__d_0801336b + 1,param_1 + 1,sVar1,param_4);
    }
  }
  else if (*(byte *)(_DAT_08013368 + 0x43) < 2) {
    uVar3 = (uint)*(ushort *)(iVar2 + 2);
    if (uVar3 == 0xffff) {
      FUN_08000850(DAT_08013378,s_CH__02d_0801337c,param_1 + 1,_DAT_08013368,param_4);
    }
    else {
      FUN_08000850(DAT_08013378,s_CH__02d__3d__02d_0801338c,param_1 + 1,uVar3 / 100,uVar3 % 100);
    }
  }
  else {
    sVar1 = *(short *)(param_1 * 5 + _DAT_08013368 + 0x4a);
    if (sVar1 == -1) {
      FUN_08000850(DAT_08013378,s_CH__02d_0801337c,param_1 + 1,0xffff,param_4);
    }
    else {
      FUN_08000850(DAT_08013378,s_CH__02d__d_0801336b + 1,param_1 + 1,sVar1,param_4);
    }
  }
  return DAT_08013378;
}

