/**
 * @brief fun_0801046c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801046c, Ghidra name FUN_0801046c, 170 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801046c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_120 [128];
  undefined1 auStack_a0 [58];
  undefined2 local_66;
  ushort local_20 [2];
  uint local_1c;
  uint local_18;
  
  FUN_08001016(auStack_a0,0x80);
  uVar2 = FUN_0800f378(0x80000);
  FUN_08000f6e(auStack_a0,DAT_08010518,0x40);
  uVar3 = FUN_0800a878(auStack_a0,0x3a);
  local_1c._0_2_ = (undefined2)uVar3;
  local_66 = (undefined2)local_1c;
  local_1c = uVar3;
  if (uVar2 < 0x3f) {
    iVar1 = uVar2 * 0x3c;
    FUN_08021824(iVar1 + 0x80042,local_20,2);
    if (local_20[0] == uVar3) {
      FUN_08021824(iVar1 + 0x80008,auStack_120,0x3a);
      iVar4 = FUN_08000e06(auStack_120,auStack_a0,0x3a);
      if (iVar4 == 0) {
        return;
      }
    }
    FUN_080219b8(iVar1 + 0x80044,auStack_a0,0x3c);
    local_18 = (uint)*(byte *)(DAT_0801051c + (uVar2 & 7));
    FUN_080219b8((uVar2 >> 3) + 0x80000,&local_18,1);
  }
  else {
    FUN_08021764(0x80000);
    FUN_080219b8(0x80008,auStack_a0,0x3c);
  }
  return;
}

