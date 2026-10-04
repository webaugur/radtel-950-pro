/**
 * @brief fun_0800ff84
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ff84, Ghidra name FUN_0800ff84, 180 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ff84(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_c4 [158];
  undefined2 local_26;
  ushort local_24 [2];
  uint local_20;
  uint local_1c;
  
  FUN_08001016(auStack_c4,0xa0);
  uVar2 = DAT_08010038;
  uVar3 = FUN_0800f378(0xb000,8);
  FUN_08000ee4(auStack_c4,DAT_0801003c,0x99);
  uVar4 = FUN_0800a878(auStack_c4,0x9e);
  local_20._0_2_ = (undefined2)uVar4;
  local_26 = (undefined2)local_20;
  local_20 = uVar4;
  if (uVar3 < 0x18) {
    iVar1 = uVar3 * 0xa0;
    FUN_08021824(iVar1 + 0xb0ae,local_24,2);
    if (local_24[0] == uVar4) {
      FUN_08021824(iVar1 + 0xb010,uVar2,0x9e);
      iVar5 = FUN_08000e06(uVar2,auStack_c4,0x9e);
      if (iVar5 == 0) {
        return;
      }
    }
    FUN_080219b8(iVar1 + 0xb0b0,auStack_c4,0xa0);
    local_1c = (uint)*(byte *)(DAT_08010040 + (uVar3 & 7));
    FUN_080219b8((uVar3 >> 3) + 0xb000,&local_1c,1);
  }
  else {
    FUN_08021764(0xb000);
    FUN_080219b8(0xb010,auStack_c4,0xa0);
  }
  return;
}

