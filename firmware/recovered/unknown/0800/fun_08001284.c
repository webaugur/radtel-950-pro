/**
 * @brief fun_08001284
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001284, Ghidra name FUN_08001284, 428 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08001284(uint *param_1,char *param_2,int *param_3,uint param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char extraout_r2;
  char extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  uint uVar9;
  uint uVar10;
  uint unaff_r11;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 local_60;
  int local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_3c;
  int local_38;
  uint *local_34;
  char *pcStack_30;
  int *piStack_2c;
  uint uStack_28;
  
  local_38 = *param_3;
  uVar5 = param_3[1];
  uVar9 = (uVar5 & 0x7fffffff) >> 0x14;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  local_34 = param_1;
  pcStack_30 = param_2;
  piStack_2c = param_3;
  uStack_28 = param_4;
  uVar3 = FUN_08029ab8(0);
  uVar12 = CONCAT44(local_60._4_4_,(int)local_60);
  uVar3 = uVar3 & 0xc00000;
  if ((int)uVar5 < 0) {
    uVar3 = uVar3 * 5 >> 1 & 0xc00000;
  }
  uVar3 = uVar3 >> 0x16;
  if (1 < uVar3) {
    uVar3 = 0xffffffff;
  }
  if (local_38 == 0 && (uVar5 & 0x7fffffff) == 0) {
    uVar5 = 0;
    if (param_5 == 1) {
      uVar9 = ~param_4;
    }
    else {
      for (; (int)uVar5 < (int)param_4; uVar5 = uVar5 + 1) {
        param_2[uVar5] = '0';
      }
      uVar9 = 0;
      uVar5 = param_4;
    }
    param_2[uVar5] = '\0';
    local_34[2] = param_5;
    *local_34 = uVar9;
    local_34[1] = uVar5;
    return;
  }
  uVar9 = (int)((uVar9 - 0x3ff) * 0x4d10) >> 0x10;
LAB_080012e4:
  do {
    if (param_5 == 0) {
      iVar8 = (uVar9 - param_4) + 1;
    }
    else {
      iVar8 = -param_4;
    }
    uVar10 = uVar3;
    if (0 < iVar8) {
      uVar10 = -uVar3;
    }
    iVar6 = iVar8;
    if (iVar8 < 0) {
      iVar6 = -iVar8;
    }
    local_60 = uVar12;
    FUN_08002230(&local_48,iVar6,uVar10);
    local_54 = local_48;
    uStack_50 = uStack_44;
    uStack_4c = uStack_40;
    uVar11 = FUN_0800295a(uVar5,local_38);
    local_60._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
    local_60._0_4_ = (int)uVar11 + -0x201f;
    if (iVar8 < 1) {
      local_54 = local_54 + -0x201f;
      uVar12 = FUN_08002ee2(&local_60,&local_54,uVar3);
      uVar4 = extraout_r2_02;
    }
    else {
      local_54 = local_54 + 0x201f;
      uVar12 = FUN_08002e92(&local_60,&local_54,uVar3);
      uVar4 = extraout_r2_01;
    }
    local_60._4_4_ = (undefined4)(uVar12 >> 0x20);
    uVar7 = local_60._4_4_;
    if ((uVar12 & 0xffff) != 0) {
      uVar4 = 0xffffffff;
      uVar7 = 0x7fffffff;
    }
    lVar13 = CONCAT44(uVar7,uVar4);
    uVar10 = param_4;
    if (param_5 != 0) {
      local_60._0_4_ = 0;
      for (uVar10 = 0;
          (uVar12 = CONCAT44(local_60._4_4_,(int)local_60), lVar13 != 0 && ((int)uVar10 < 0x11));
          uVar10 = uVar10 + 1) {
        lVar13 = FUN_08001ccc();
        param_2[uVar10] = extraout_r2_00 + '0';
      }
      if (lVar13 != 0) {
        if ((int)local_60 != 0) goto LAB_08001414;
        param_4 = 0x11;
        param_5 = 0;
        goto LAB_080012e4;
      }
      uVar5 = uVar10;
      for (iVar8 = 0; uVar5 = uVar5 - 1, iVar8 < (int)uVar5; iVar8 = iVar8 + 1) {
        cVar1 = param_2[iVar8];
        param_2[iVar8] = param_2[uVar5];
        param_2[uVar5] = cVar1;
      }
      unaff_r11 = uVar10;
      local_3c = (uVar10 - param_4) - 1;
LAB_08001414:
      param_2[unaff_r11] = '\0';
      local_34[2] = param_5;
      *local_34 = local_3c;
      local_34[1] = unaff_r11;
      return;
    }
    while (uVar10 = uVar10 - 1, -1 < (int)uVar10) {
      local_60 = uVar12;
      lVar13 = FUN_08001ccc();
      param_2[uVar10] = extraout_r2 + '0';
      uVar12 = local_60;
    }
    bVar2 = true;
    if (lVar13 == 0) {
      if (*param_2 == '0') {
        bVar2 = false;
        uVar9 = uVar9 - 1;
      }
    }
    else {
      bVar2 = false;
      uVar9 = uVar9 + 1;
    }
    unaff_r11 = param_4;
    local_3c = uVar9;
    if (bVar2) goto LAB_08001414;
  } while( true );
}

