/**
 * @brief fun_08010044
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08010044, Ghidra name FUN_08010044, 190 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08010044(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_84 [32];
  undefined1 auStack_64 [62];
  undefined2 local_26;
  ushort local_24 [2];
  uint local_20;
  uint local_1c;
  
  FUN_08001016(auStack_84,0x60);
  uVar2 = DAT_08010104;
  bVar3 = FUN_0800f378(0x9000,6);
  uVar6 = (uint)bVar3;
  FUN_08000ee4(auStack_84,DAT_08010108,0x20);
  FUN_08000ee4(auStack_64,DAT_0801010c,0x2d);
  uVar4 = FUN_0800a878(auStack_84,0x5e);
  local_20._0_2_ = (undefined2)uVar4;
  local_26 = (undefined2)local_20;
  local_20 = uVar4;
  if (uVar6 < 0x29) {
    iVar1 = uVar6 * 0x60;
    FUN_08021824(iVar1 + 0x906e,local_24,2);
    if (local_24[0] == uVar4) {
      FUN_08021824(iVar1 + 0x9010,uVar2,0x40);
      iVar5 = FUN_08000e06(uVar2,auStack_84,0x40);
      if (iVar5 == 0) {
        return;
      }
    }
    FUN_080219b8(iVar1 + 0x9070,auStack_84,0x60);
    local_1c = (uint)*(byte *)(DAT_08010110 + (uVar6 & 7));
    FUN_080219b8((bVar3 >> 3) + 0x9000,&local_1c,1);
  }
  else {
    FUN_08021764(0x9000);
    FUN_080219b8(0x9010,auStack_84,0x60);
  }
  return;
}

