/**
 * @brief fun_0800fda8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800fda8, Ghidra name FUN_0800fda8, 164 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800fda8(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_120 [128];
  undefined1 auStack_a0 [126];
  undefined2 local_22;
  ushort local_20 [2];
  uint local_1c;
  uint local_18;
  
  FUN_08001016(auStack_a0,0x80);
  uVar1 = FUN_0800f378(0x10000);
  FUN_08000ee4(auStack_a0,DAT_0800fe4c,0x79);
  uVar2 = FUN_0800a878(auStack_a0,0x79);
  iVar4 = DAT_0800fe50;
  local_1c._0_2_ = (undefined2)uVar2;
  local_22 = (undefined2)local_1c;
  local_1c = uVar2;
  if (uVar1 < 0x1e) {
    iVar4 = DAT_0800fe50 + uVar1 * 0x80;
    FUN_08021824(iVar4 + 0x7e,local_20,2);
    if (local_20[0] == uVar2) {
      FUN_08021824(iVar4,auStack_120,0x79);
      iVar3 = FUN_08000e06(auStack_120,auStack_a0,0x79);
      if (iVar3 == 0) {
        return;
      }
    }
    FUN_080219b8(iVar4 + 0x80,auStack_a0,0x80);
    local_18 = (uint)*(byte *)(DAT_0800fe54 + (uVar1 & 7));
    FUN_080219b8((uVar1 >> 3) + 0x10000,&local_18,1);
  }
  else {
    FUN_08021764(0x10000);
    FUN_080219b8(iVar4,auStack_a0,0x80);
  }
  return;
}

