/**
 * @brief fun_0800fc74
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800fc74, Ghidra name FUN_0800fc74, 138 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800fc74(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar5 = FUN_0800f378(0xe000,0x20);
  iVar2 = DAT_0800fd04;
  iVar1 = DAT_0800fd00;
  if (uVar5 < 0xfe) {
    FUN_08021824(uVar5 * 0x10 + 0xe020,&local_24,0x10);
    local_14 = local_18 >> 0x10;
    uVar5 = FUN_0800a878(&local_24,0xe);
    iVar3 = DAT_0800fd08;
    if (uVar5 == (local_14 & 0xffff)) {
      *(undefined4 *)(DAT_0800fd08 + 0x102) = local_24;
      *(undefined2 *)(iVar3 + 0x106) = (undefined2)local_20;
      *(undefined2 *)(iVar1 + 2) = local_20._2_2_;
      *(undefined1 *)(iVar2 + 0x62) = (undefined1)local_1c;
      *(undefined1 *)(iVar2 + 0x49) = local_1c._1_1_;
      *(undefined1 *)(iVar2 + 0x4a) = local_1c._2_1_;
      return;
    }
  }
  puVar4 = DAT_0800fd0c;
  *DAT_0800fd0c = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined1 *)(iVar2 + 0x49) = 0x56;
  *(undefined2 *)(iVar1 + 2) = 0;
  *(undefined1 *)(iVar2 + 0x62) = 0;
  *(undefined1 *)(iVar2 + 0x4a) = 0;
  return;
}

