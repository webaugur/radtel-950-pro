/**
 * @brief fun_08029ca8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08029ca8, Ghidra name thunk_FUN_080023d8, 4 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_080023d8(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
                      uint param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  iVar12 = 0x3c;
  param_5 = param_5 + 1;
  uStack_44 = (param_6 & 0x400) << 0x15;
  iStack_3c = 0;
  bVar13 = false;
  uVar10 = 0;
  uVar9 = 0;
  iStack_40 = 0;
  iVar11 = -1;
  uStack_34 = param_1;
  uStack_30 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  uStack_48 = (*(code *)param_4[6])(param_2);
  param_7 = param_7 + -1;
  while (0 < param_7) {
    if (uStack_48 == 0x2e) {
      iStack_40 = 1;
    }
    else {
      iVar3 = FUN_08001728(uStack_48,0x10);
      if (iVar3 < 0) {
        if ((uStack_48 == 0x70) || (uStack_48 == 0x50)) {
          uStack_48 = 0;
          iStack_40 = 1;
          if (!bVar13) goto LAB_080024c2;
          iVar12 = (*(code *)param_4[6])(uStack_30);
          iVar3 = param_7 + -1;
          if (iVar3 < 1) goto LAB_080024c2;
          if (iVar12 == 0x2b) {
LAB_080024e0:
            iVar12 = (*(code *)param_4[6])(uStack_30);
            iVar3 = param_7 + -2;
            iVar2 = param_5 + 2;
            if (iVar3 < 1) goto LAB_080024c2;
          }
          else {
            iVar2 = param_5 + 1;
            if (iVar12 == 0x2d) {
              iStack_40 = -1;
              goto LAB_080024e0;
            }
          }
          param_5 = iVar2;
          if ((iVar12 == -1) || (iVar12 = FUN_08001728(iVar12,10), iVar12 < 0)) {
LAB_080024c2:
            (*(code *)param_4[7])(uStack_30);
            return -2;
          }
          goto LAB_08002502;
        }
        break;
      }
      bVar13 = true;
      if (iStack_3c == 0 && iVar3 == 0) {
        if (iStack_40 != 0) {
          iVar11 = iVar11 + -4;
        }
      }
      else {
        if (iVar12 < 0) {
          if (iVar3 != 0) {
            uVar10 = uVar10 | 1;
          }
        }
        else {
          uVar14 = FUN_0800284c(iVar3,iVar3 >> 0x1f,iVar12);
          uVar10 = uVar10 | (uint)uVar14;
          uVar9 = uVar9 | (uint)((ulonglong)uVar14 >> 0x20);
          iVar12 = iVar12 + -4;
        }
        iStack_3c = 1;
        if (iStack_40 == 0) {
          iVar11 = iVar11 + 4;
        }
      }
    }
    param_5 = param_5 + 1;
    uStack_48 = (*(code *)param_4[6])(uStack_30);
    param_7 = param_7 + -1;
    if (bVar13) {
      *piStack_2c = param_5;
    }
  }
  (*(code *)param_4[7])(uStack_30);
  if (!bVar13) {
    return -2;
  }
  goto LAB_08002540;
  while (-1 < iVar12) {
LAB_08002502:
    param_5 = param_5 + 1;
    uStack_48 = iVar12 + uStack_48 * 10;
    uVar4 = (*(code *)param_4[6])(uStack_30);
    iVar12 = FUN_08001728(uVar4,10);
    iVar3 = iVar3 + -1;
    *piStack_2c = param_5;
    if (iVar3 < 1) break;
  }
  (*(code *)param_4[7])(uStack_30);
  iVar11 = uStack_48 * iStack_40 + iVar11;
LAB_08002540:
  uStack_4c = uStack_44;
  if (uVar10 != 0 || uVar9 != 0) {
    if ((uVar9 & 0xc0000000) == 0) {
      uVar9 = uVar9 << 2 | uVar10 >> 0x1e;
      uVar10 = uVar10 << 2;
      iVar11 = iVar11 + -2;
    }
    if ((uVar9 & 0x80000000) == 0) {
      bVar13 = CARRY4(uVar10,uVar10);
      uVar10 = uVar10 * 2;
      uVar9 = uVar9 * 2 + (uint)bVar13;
      iVar11 = iVar11 + -1;
    }
    if ((param_6 & 0x24) == 0) {
      iVar3 = 0x28;
      iVar12 = -0x7e;
    }
    else {
      iVar3 = 0xb;
      iVar12 = DAT_080026ec;
    }
    if ((iVar11 < iVar12) && (iVar3 = iVar3 + (iVar12 - iVar11), 0x41 < iVar3)) {
      iVar3 = 0x41;
    }
    lVar15 = FUN_0800284c(1,0,iVar3 + -1);
    uStack_48 = (uint)(((uint)lVar15 & uVar10) != 0 ||
                      ((uint)((ulonglong)lVar15 >> 0x20) & uVar9) != 0);
    bVar13 = ((uint)(lVar15 + -1) & uVar10) == 0;
    bVar1 = ((uint)((ulonglong)(lVar15 + -1) >> 0x20) & uVar9) == 0;
    if (uStack_48 != 0 || (!bVar13 || !bVar1)) {
      uVar5 = FUN_08029ab8(0);
      uVar5 = uVar5 & 0xc00000;
      if (uStack_44 != 0) {
        uVar5 = (uVar5 * 5) / 2 & 0xc00000;
      }
      uVar5 = (int)uVar5 >> 0x16;
      if (uVar5 < 2) {
        if (uVar5 != 1) goto LAB_08002606;
      }
      else {
        uVar5 = 0xffffffff;
LAB_08002606:
        if (((uVar5 == 0xffffffff) || (uStack_48 == 0)) ||
           ((bVar13 && bVar1 &&
            (uVar14 = FUN_0800284c(1,0,iVar3),
            ((uint)uVar14 & uVar10) == 0 && ((uint)((ulonglong)uVar14 >> 0x20) & uVar9) == 0))))
        goto LAB_08002678;
      }
      lVar16 = FUN_0800284c(1,0,iVar3);
      lVar15 = lVar16 + CONCAT44(uVar9,uVar10);
      uVar5 = (uint)lVar15;
      uVar8 = (uint)((ulonglong)lVar15 >> 0x20);
      if (uVar8 < uVar9 || uVar9 - uVar8 < (uint)(uVar5 <= uVar10)) {
        if (iVar3 < 0x41) {
          iVar11 = iVar11 + 1;
        }
        else if ((param_6 & 0x24) == 0) {
          iVar11 = iVar12 + -0x17;
        }
        else {
          iVar11 = iVar12 + -0x34;
        }
        uVar10 = 0;
        uVar9 = 0;
      }
      else {
        uVar10 = uVar5 & ~(uint)(lVar16 + -1);
        uVar9 = uVar8 & ~(uint)((ulonglong)(lVar16 + -1) >> 0x20);
      }
    }
LAB_08002678:
    if (iVar11 <= 1 - iVar12) {
      uStack_50 = uVar10 >> 0xb | uVar9 << 0x15;
      uStack_4c = uStack_44 | (uVar9 & 0x7fffffff) >> 0xb | _BYTE_ARRAY_080026f4;
      FUN_08025d40(&uStack_50,iVar11);
      goto LAB_080026ac;
    }
    uStack_4c = uStack_44 | _BYTE_ARRAY_080026f0;
  }
  uStack_50 = 0;
LAB_080026ac:
  if ((param_6 & 0x24) == 0) {
    FUN_08025c88(&uStack_48,&uStack_50);
    if ((param_6 & 1) == 0) {
      puVar6 = (undefined4 *)*param_4;
      *param_4 = (int)(puVar6 + 1);
      *(uint *)*puVar6 = uStack_48;
    }
  }
  else if ((param_6 & 1) == 0) {
    puVar6 = (undefined4 *)*param_4;
    *param_4 = (int)(puVar6 + 1);
    puVar7 = (uint *)*puVar6;
    *puVar7 = uStack_50;
    puVar7[1] = uStack_4c;
  }
  return param_5;
}

