/**
 * @brief fun_0801f0f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f0f0, Ghidra name FUN_0801f0f0, 186 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f0f0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [80];
  undefined2 local_48;
  undefined4 local_18;
  uint local_14 [3];
  
  iVar1 = DAT_0801f114;
  uVar2 = 0;
  do {
    *(undefined4 *)(iVar1 + (uVar2 + 1) * 4 + 4) = *(undefined4 *)(iVar1 + uVar2 * 4 + 4);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x13);
  *(undefined4 *)(iVar1 + 4) = param_1;
  FUN_08001016(auStack_98,0x80);
  uVar2 = FUN_0800f378(0x82000,8);
  FUN_08000f6e(auStack_98,DAT_08010460,0x50);
  local_18 = FUN_0800a878(auStack_98,0x50);
  iVar1 = DAT_08010464;
  local_48 = (undefined2)local_18;
  if (uVar2 < 0x2f) {
    iVar3 = DAT_08010464 + uVar2 * 0x52;
    FUN_08021824(iVar3,auStack_118,0x50);
    iVar1 = FUN_08000e06(auStack_118,auStack_98,0x50);
    if (iVar1 != 0) {
      FUN_080219b8(iVar3 + 0x52,auStack_98,0x52);
      local_14[0] = (uint)*(byte *)(DAT_08010468 + (uVar2 & 7));
      FUN_080219b8((uVar2 >> 3) + 0x82000,local_14,1);
    }
  }
  else {
    FUN_08021764(0x82000);
    FUN_080219b8(iVar1,auStack_98,0x52);
  }
  return;
}

