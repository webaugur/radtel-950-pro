/**
 * @brief fun_08002f32
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002f32, Ghidra name FUN_08002f32, 580 bytes.
 *       Not linked into rt950-firmware.
 */

ulonglong FUN_08002f32(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  param_1 = param_1 ^ param_4;
  if (param_3 == 0) {
    if (unaff_r5 == 0) {
      uVar5 = unaff_r4 >> 0x10;
      uVar6 = param_2 >> 0x10;
      uVar14 = unaff_r4 & ~(uVar5 << 0x10);
      param_2 = param_2 & ~(uVar6 << 0x10);
      uVar7 = uVar14 * uVar6;
      uVar14 = param_2 * uVar14;
      param_2 = uVar5 * param_2;
      uVar3 = uVar7 * 0x10000;
      uVar1 = uVar14 + uVar3;
      uVar2 = param_2 * 0x10000;
      uVar4 = uVar1 + uVar2;
      iVar8 = uVar5 * uVar6 + (uVar7 >> 0x10) + (uint)CARRY4(uVar14,uVar3) +
              (param_2 >> 0x10) + (uint)CARRY4(uVar1,uVar2);
      if (-1 < iVar8) {
        return CONCAT44(iVar8 * 2 + (uint)CARRY4(uVar4,uVar4),param_1) & 0xffffffff80000000;
      }
      return CONCAT44(iVar8,param_1) & 0xffffffff80000000;
    }
    uVar4 = param_2 >> 0x10;
    uVar12 = unaff_r4 >> 0x10;
    param_2 = param_2 & ~(uVar4 << 0x10);
    uVar15 = unaff_r4 & ~(uVar12 << 0x10);
    uVar5 = uVar15 * param_2;
    uVar15 = uVar4 * uVar15;
    uVar3 = param_2 * uVar12 * 0x10000;
    uVar6 = uVar5 + uVar3;
    uVar13 = unaff_r5 >> 0x10;
    uVar2 = uVar15 * 0x10000;
    uVar7 = uVar6 + uVar2;
    uVar16 = unaff_r5 & ~(uVar13 << 0x10);
    uVar9 = uVar16 * param_2;
    uVar16 = uVar4 * uVar16;
    uVar14 = param_2 * uVar13 * 0x10000;
    uVar10 = uVar9 + uVar14;
    uVar1 = uVar16 * 0x10000;
    uVar11 = uVar10 + uVar1;
    uVar14 = uVar4 * uVar13 + (param_2 * uVar13 >> 0x10) + (uint)CARRY4(uVar9,uVar14) +
             (uVar16 >> 0x10) + (uint)CARRY4(uVar10,uVar1);
    uVar1 = uVar14 + uVar7;
    iVar8 = uVar4 * uVar12 + (param_2 * uVar12 >> 0x10) + (uint)CARRY4(uVar5,uVar3) +
            (uVar15 >> 0x10) + (uint)CARRY4(uVar6,uVar2) + (uint)CARRY4(uVar14,uVar7);
    if (-1 < iVar8) {
      return CONCAT44(iVar8 * 2 +
                      (uint)(CARRY4(uVar1,uVar1) || CARRY4(uVar1 * 2,(uint)CARRY4(uVar11,uVar11))),
                      param_1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar8,param_1) & 0xffffffff80000000;
  }
  if (unaff_r5 == 0) {
    uVar7 = unaff_r4 >> 0x10;
    uVar13 = param_2 >> 0x10;
    uVar9 = unaff_r4 & ~(uVar7 << 0x10);
    param_2 = param_2 & ~(uVar13 << 0x10);
    uVar4 = param_2 * uVar9;
    param_2 = uVar7 * param_2;
    uVar3 = uVar9 * uVar13 * 0x10000;
    uVar5 = uVar4 + uVar3;
    uVar15 = param_3 >> 0x10;
    uVar2 = param_2 * 0x10000;
    uVar6 = uVar5 + uVar2;
    param_3 = param_3 & ~(uVar15 << 0x10);
    uVar10 = param_3 * uVar9;
    param_3 = uVar7 * param_3;
    uVar14 = uVar9 * uVar15 * 0x10000;
    uVar11 = uVar10 + uVar14;
    uVar1 = param_3 * 0x10000;
    uVar12 = uVar11 + uVar1;
    uVar1 = uVar7 * uVar15 + (uVar9 * uVar15 >> 0x10) + (uint)CARRY4(uVar10,uVar14) +
            (param_3 >> 0x10) + (uint)CARRY4(uVar11,uVar1);
    uVar14 = uVar1 + uVar6;
    iVar8 = uVar7 * uVar13 + (uVar9 * uVar13 >> 0x10) + (uint)CARRY4(uVar4,uVar3) +
            (param_2 >> 0x10) + (uint)CARRY4(uVar5,uVar2) + (uint)CARRY4(uVar1,uVar6);
    if (-1 < iVar8) {
      return CONCAT44(iVar8 * 2 +
                      (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)CARRY4(uVar12,uVar12))
                            ),param_1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar8,param_1) & 0xffffffff80000000;
  }
  uVar1 = param_2 >> 0x10;
  uVar4 = unaff_r4 >> 0x10;
  uVar11 = param_2 & ~(uVar1 << 0x10);
  uVar9 = unaff_r4 & ~(uVar4 << 0x10);
  uVar5 = uVar11 * uVar4;
  uVar11 = uVar9 * uVar11;
  uVar9 = uVar1 * uVar9;
  uVar3 = uVar5 * 0x10000;
  uVar12 = uVar11 + uVar3;
  uVar15 = param_3 >> 0x10;
  uVar2 = uVar9 * 0x10000;
  uVar13 = uVar12 + uVar2;
  uVar6 = unaff_r5 >> 0x10;
  uVar16 = param_3 & ~(uVar15 << 0x10);
  uVar10 = unaff_r5 & ~(uVar6 << 0x10);
  uVar7 = uVar16 * uVar6;
  uVar16 = uVar10 * uVar16;
  uVar10 = uVar15 * uVar10;
  uVar14 = uVar7 * 0x10000;
  uVar17 = uVar16 + uVar14;
  uVar7 = uVar15 * uVar6 + (uVar7 >> 0x10) + (uint)CARRY4(uVar16,uVar14);
  iVar8 = 0;
  uVar14 = uVar10 * 0x10000;
  uVar15 = uVar17 + uVar14;
  uVar6 = uVar7 + (uVar10 >> 0x10) + (uint)CARRY4(uVar17,uVar14);
  uVar14 = uVar13 + uVar6;
  uVar2 = uVar1 * uVar4 + (uVar5 >> 0x10) + (uint)CARRY4(uVar11,uVar3) +
          (uVar9 >> 0x10) + (uint)CARRY4(uVar12,uVar2) + (uint)CARRY4(uVar13,uVar6);
  uVar4 = uVar14 + uVar15;
  uVar1 = uVar14 + uVar2 + CARRY4(uVar14,uVar15);
  bVar19 = param_3 <= param_2;
  param_2 = param_2 - param_3;
  bVar18 = param_2 == 0;
  uVar3 = 0;
  if (!bVar19) {
    uVar3 = 0xffffffff;
    iVar8 = unaff_r4 - unaff_r5;
  }
  if (!bVar18) {
    bVar19 = unaff_r4 <= unaff_r5;
    uVar7 = unaff_r5 - unaff_r4;
    bVar18 = uVar7 == 0;
  }
  if (bVar18) {
    uVar3 = 0;
  }
  if (!bVar19) {
    uVar3 = ~uVar3;
    iVar8 = iVar8 - param_2;
  }
  uVar9 = param_2 >> 0x10;
  param_2 = param_2 & ~(uVar9 << 0x10);
  uVar12 = uVar7 >> 0x10;
  uVar7 = uVar7 & ~(uVar12 << 0x10);
  uVar13 = param_2 * uVar12;
  param_2 = uVar7 * param_2;
  uVar7 = uVar9 * uVar7;
  uVar5 = uVar13 * 0x10000;
  uVar10 = param_2 + uVar5;
  uVar6 = uVar7 * 0x10000;
  uVar11 = uVar10 + uVar6;
  uVar5 = uVar9 * uVar12 + iVar8 + (uVar13 >> 0x10) + (uint)CARRY4(param_2,uVar5) +
          (uVar7 >> 0x10) + (uint)CARRY4(uVar10,uVar6);
  uVar6 = uVar1 + uVar5 + CARRY4(uVar4,uVar11);
  iVar8 = uVar3 + uVar2 + (CARRY4(uVar14,uVar2) ||
                          CARRY4(uVar14 + uVar2,(uint)CARRY4(uVar14,uVar15))) +
          (uint)(CARRY4(uVar1,uVar5) || CARRY4(uVar1 + uVar5,(uint)CARRY4(uVar4,uVar11)));
  uVar3 = uVar4 + uVar11 | (uVar15 | uVar15 * 4) >> 2;
  if (-1 < iVar8) {
    return CONCAT44(iVar8 * 2 +
                    (uint)(CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)CARRY4(uVar3,uVar3))),
                    param_1) & 0xffffffff80000000;
  }
  return CONCAT44(iVar8,param_1) & 0xffffffff80000000;
}

