/**
 * @brief fun_0801f1ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f1ac, Ghidra name FUN_0801f1ac, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f1ac(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [80];
  undefined2 uStack_48;
  undefined4 uStack_18;
  uint uStack_14;
  
  iVar1 = DAT_0801f1c4;
  uVar2 = 0;
  do {
    *(undefined4 *)(iVar1 + uVar2 * 4 + 4) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x14);
  FUN_08001016(auStack_98,0x80);
  uVar2 = FUN_0800f378(0x82000,8);
  FUN_08000f6e(auStack_98,DAT_08010460,0x50);
  uStack_18 = FUN_0800a878(auStack_98,0x50);
  iVar1 = DAT_08010464;
  uStack_48 = (undefined2)uStack_18;
  if (uVar2 < 0x2f) {
    iVar3 = DAT_08010464 + uVar2 * 0x52;
    FUN_08021824(iVar3,auStack_118,0x50);
    iVar1 = FUN_08000e06(auStack_118,auStack_98,0x50);
    if (iVar1 != 0) {
      FUN_080219b8(iVar3 + 0x52,auStack_98,0x52);
      uStack_14 = (uint)*(byte *)(DAT_08010468 + (uVar2 & 7));
      FUN_080219b8((uVar2 >> 3) + 0x82000,&uStack_14,1);
    }
  }
  else {
    FUN_08021764(0x82000);
    FUN_080219b8(iVar1,auStack_98,0x52);
  }
  return;
}

