/**
 * @brief fun_08001744
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001744, Ghidra name FUN_08001744, 508 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08001744(int *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  int local_28;
  
  if (*param_2 == 0xff) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    pbVar6 = param_2;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      if (*pbVar6 == 0xff) break;
      iVar9 = (uint)*pbVar6 + iVar9 * 10;
    }
    if (*param_2 == 0x2d) {
      iVar9 = -iVar9;
    }
  }
  bVar1 = *param_3;
  uVar2 = 0;
  bVar10 = false;
  if ((bVar1 == 0x2d) || (pbVar6 = param_3, bVar1 == 0x2b)) {
    pbVar6 = param_3 + 1;
    bVar10 = bVar1 == 0x2d;
  }
  while( true ) {
    iVar8 = (int)(uVar2 >> 0x20);
    if (*pbVar6 == 0xff) break;
    uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44(iVar8 * 10,(uint)*pbVar6);
    pbVar6 = pbVar6 + 1;
  }
  piStack_34 = param_1;
  pbStack_30 = param_2;
  pbStack_2c = param_3;
  local_28 = param_4;
  uVar3 = FUN_08029ab8(0);
  if (bVar10) {
    uVar3 = uVar3 * 5 >> 1;
  }
  uVar3 = (uVar3 & 0xffffff) >> 0x16;
  if (1 < uVar3) {
    uVar3 = 0xffffffff;
  }
  iVar9 = iVar9 + local_28;
  if ((int)uVar2 == 0 && iVar8 == 0) {
    *param_1 = 0;
    param_1[1] = (uint)bVar10 << 0x1f;
  }
  else {
    if (iVar9 < -500) {
      *param_1 = 0;
      param_1[1] = (uint)bVar10 << 0x1f;
    }
    else {
      if (iVar9 < 0x1f5) {
        iVar7 = iVar9;
        uVar5 = uVar3;
        if (iVar9 < 0) {
          iVar7 = -iVar9;
          uVar5 = -uVar3;
        }
        FUN_08002230(&local_40,iVar7,uVar5);
        local_4c = local_40;
        uStack_48 = uStack_3c;
        uStack_44 = uStack_38;
        local_58 = 0x403e;
        if (iVar8 == 0) {
          uVar2 = uVar2 << 0x20;
          local_58 = 0x401e;
        }
        if ((uVar2 & 0xffff000000000000) == 0) {
          uVar2 = uVar2 << 0x10;
          local_58 = local_58 + -0x10;
        }
        if ((uVar2 & 0xff00000000000000) == 0) {
          uVar2 = uVar2 << 8;
          local_58 = local_58 + -8;
        }
        if ((uVar2 & 0xf000000000000000) == 0) {
          uVar2 = uVar2 << 4;
          local_58 = local_58 + -4;
        }
        if ((uVar2 & 0xc000000000000000) == 0) {
          uVar2 = uVar2 << 2;
          local_58 = local_58 + -2;
        }
        uVar5 = (uint)uVar2;
        if ((uVar2 & 0x8000000000000000) == 0) {
          uVar2 = CONCAT44((int)(uVar2 >> 0x20) * 2 + (uint)CARRY4(uVar5,uVar5),uVar5 * 2);
          local_58 = local_58 + -1;
        }
        local_54 = (undefined4)(uVar2 >> 0x20);
        uStack_50 = (undefined4)uVar2;
        if (iVar9 < 1) {
          uVar11 = FUN_08002eba(&local_58,&local_4c,uVar3);
        }
        else {
          uVar11 = FUN_08002f0a();
        }
        iVar9 = (int)((ulonglong)uVar11 >> 0x20);
        uVar3 = (uint)uVar11;
        if (bVar10) {
          uVar3 = uVar3 ^ 0x80000000;
        }
        if (((uVar3 & 0x7fffffff) == 0 && iVar9 == 0) || ((uVar3 & 0x7fffffff) >> 0x14 == 0x7ff)) {
          puVar4 = (undefined4 *)FUN_080010c4();
          *puVar4 = 2;
          if ((uVar3 & 0x7fffffff) >> 0x14 == 0x7ff) {
            uVar5 = *(uint *)(DAT_08001be0 + 0x800192e);
            *param_1 = *(int *)(DAT_08001be0 + 0x800192a);
            param_1[1] = uVar5;
            param_1[1] = uVar5 | uVar3 & 0x80000000;
            return;
          }
        }
        *param_1 = iVar9;
        param_1[1] = uVar3;
        return;
      }
      uVar3 = *(uint *)(DAT_08001bdc + 0x8001824);
      *param_1 = *(int *)(DAT_08001bdc + 0x8001820);
      param_1[1] = uVar3;
      param_1[1] = uVar3 | (uint)bVar10 << 0x1f;
    }
    puVar4 = (undefined4 *)FUN_080010c4();
    *puVar4 = 2;
  }
  return;
}

