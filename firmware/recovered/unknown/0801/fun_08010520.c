/**
 * @brief fun_08010520
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08010520, Ghidra name FUN_08010520, 156 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08010520(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar2 = FUN_0800f378(0xe000,0x20);
  uVar1 = local_20;
  local_28 = *(undefined4 *)(DAT_080105bc + 0x102);
  local_24 = CONCAT22(*(undefined2 *)(DAT_080105c0 + 2),*(undefined2 *)(DAT_080105bc + 0x106));
  local_20._3_1_ = SUB41(uVar1,3);
  local_20._0_3_ = CONCAT12(DAT_080105c4[1],CONCAT11(*DAT_080105c4,DAT_080105c4[0x19]));
  local_18 = FUN_0800a878(&local_28,0xe);
  local_1c = CONCAT22((undefined2)local_18,(undefined2)local_1c);
  if (uVar2 < 0xfd) {
    FUN_080219b8((uVar2 + 1) * 0x10 + 0xe020,&local_28,0x10);
    local_14 = (uint)*(byte *)(DAT_080105c8 + (uVar2 & 7));
    FUN_080219b8((uVar2 >> 3) + 0xe000,&local_14,1);
  }
  else {
    FUN_08021764(0xe000);
    FUN_080219b8(0xe020,&local_28,0x10);
  }
  return;
}

