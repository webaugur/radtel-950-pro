/**
 * @brief fun_08002230
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002230, Ghidra name FUN_08002230, 216 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08002230(undefined8 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  uVar9 = *(undefined8 *)(DAT_08002308 + 0x8002240);
  uStack_40 = *(undefined4 *)(DAT_08002308 + 0x8002248);
  local_3c._0_4_ = *(undefined4 *)(DAT_08002308 + 0x800224c);
  local_3c._4_4_ = *(undefined4 *)(DAT_08002308 + 0x8002250);
  uStack_34 = *(undefined4 *)(DAT_08002308 + 0x8002254);
  uVar4 = (param_2 + 0x1b9b) / 0x37 - 0x80;
  uVar3 = (param_2 + 0x1b9b) % 0x37 - 0x1b;
  bVar7 = -1 < (int)uVar3;
  if (!bVar7) {
    uVar3 = -uVar3;
  }
  iVar5 = 0;
  iVar6 = DAT_08002308 + 0x80021c4;
  for (; uVar8 = CONCAT44(local_3c._4_4_,(undefined4)local_3c), uVar3 != 0; uVar3 = (int)uVar3 >> 1)
  {
    if ((uVar3 & 1) != 0) {
      local_48 = uVar9;
      uVar9 = FUN_08002ee2(&local_48,iVar6 + iVar5 * 0xc,param_3);
      uStack_40 = extraout_r2;
    }
    iVar5 = iVar5 + 1;
  }
  iVar6 = DAT_08002308 + 0x8002200;
  iVar5 = 0;
  for (; local_48 = uVar9, local_3c = uVar8, uVar4 != 0; uVar4 = (int)uVar4 >> 1) {
    if ((uVar4 & 1) != 0) {
      puVar1 = (undefined4 *)(iVar6 + iVar5 * 0x10);
      local_30 = *puVar1;
      uStack_2c = puVar1[1];
      local_28 = puVar1[2];
      if (puVar1[3] + param_3 == 0) {
        local_28 = local_28 + param_3;
      }
      uVar8 = FUN_08002ee2(&local_3c,&local_30,param_3);
      uStack_34 = extraout_r2_00;
      uVar9 = local_48;
    }
    iVar5 = iVar5 + 1;
  }
  if (bVar7) {
    uVar9 = FUN_08002ee2(&local_3c,&local_48,param_3);
    uVar2 = extraout_r2_02;
  }
  else {
    uVar9 = FUN_08002e92();
    uVar2 = extraout_r2_01;
  }
  *param_1 = uVar9;
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}

