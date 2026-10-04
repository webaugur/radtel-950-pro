/**
 * @brief fun_080106e4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080106e4, Ghidra name FUN_080106e4, 214 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080106e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_1c;
  
  bVar1 = true;
  local_1c = param_4;
  uVar5 = FUN_0800f378(0x8f000,6,param_3,param_4,param_3);
  iVar3 = DAT_080107c0;
  iVar2 = DAT_080107bc;
  uVar8 = uVar5 & 0xff;
  if (uVar8 < 0x29) {
    FUN_08021824(DAT_080107bc + uVar8 * 0x62,DAT_080107c0,0x62);
    uVar6 = (uint)*(ushort *)(iVar3 + 0x60);
    uVar7 = FUN_0800a878(iVar3,0x60);
    if (uVar7 == (uVar6 & 0xffff)) {
      bVar1 = false;
    }
  }
  if (bVar1) {
    FUN_0801b41c();
  }
  else {
    FUN_080105cc(0xff);
  }
  FUN_08000ee4(DAT_080107c0,DAT_080107c4,0x20);
  FUN_08000ee4(DAT_080107c0 + 0x20,DAT_080107c4 + 0x24,0x20);
  FUN_08000ee4(DAT_080107c0 + 0x40,DAT_080107c4 + 0x48,0x20);
  uVar4 = FUN_0800a878(DAT_080107c0,0x60);
  *(undefined2 *)(iVar3 + 0x60) = uVar4;
  if (uVar8 < 0x28) {
    FUN_080219b8(iVar2 + (uVar8 + 1) * 0x62,DAT_080107c0,0x62);
    local_1c = (uint)*(byte *)(DAT_080107c8 + (uVar5 & 7));
    FUN_080219b8((uVar8 >> 3) + 0x8f000,&local_1c,1);
  }
  else {
    FUN_08021764(0x8f000);
    FUN_080219b8(iVar2,DAT_080107c0,0x62);
  }
  return;
}

