/**
 * @brief fun_08002a3e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002a3e, Ghidra name FUN_08002a3e, 696 bytes.
 *       Not linked into rt950-firmware.
 */

ulonglong FUN_08002a3e(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  
  param_1 = param_1 ^ param_4;
  uVar2 = param_1 & 0x80000000;
  uVar17 = unaff_r5 >> 0x10;
  uVar8 = unaff_r4 >> 0x10;
  uVar22 = unaff_r5 & ~(uVar17 << 0x10);
  uVar16 = unaff_r4 & ~(uVar8 << 0x10);
  uVar10 = (uint)*(byte *)((unaff_r4 >> 0x18) + 0x8002c78);
  uVar3 = (uint)((param_2 & 1) != 0) << 0x1f | param_3 >> 1;
  iVar11 = ((0x800000 - (uVar8 * uVar10 + uVar10)) * uVar10 >> 0x13) + 2;
  uVar18 = 0x20000000 - ((unaff_r4 >> 0xd) * iVar11 + iVar11);
  uVar10 = uVar18 >> 0x10;
  uVar10 = uVar10 * iVar11 + ((uVar18 & ~(uVar10 << 0x10)) * iVar11 >> 0x10) >> 6;
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
  }
  if ((param_3 & 1) != 0) {
    uVar2 = 0x80000000;
  }
  uVar19 = uVar10 * (param_2 >> 0x10) >> 0x10;
  uVar4 = uVar3 - uVar19 * uVar17;
  uVar18 = uVar19 * uVar22;
  bVar23 = uVar18 * 0x10000 <= uVar2;
  uVar2 = uVar2 + uVar18 * -0x10000;
  uVar18 = uVar18 >> 0x10;
  bVar1 = uVar4 - uVar18 < (uint)bVar23;
  bVar24 = uVar18 < uVar4 || bVar1;
  uVar5 = (uVar4 - uVar18) - (uint)!bVar23;
  uVar12 = uVar19 * uVar16;
  if (uVar18 < uVar4 || bVar1) {
    bVar24 = uVar12 * 0x10000 <= uVar5;
  }
  uVar5 = uVar5 + uVar12 * -0x10000;
  uVar18 = ((((param_2 >> 1) - uVar8 * uVar19) - (uint)(uVar3 < uVar19 * uVar17)) - (uVar12 >> 0x10)
           ) - (uint)!bVar24;
  uVar20 = uVar10 * (uVar18 >> 2) >> 0x10;
  uVar3 = uVar20 * uVar17;
  bVar23 = uVar3 * 0x80000 <= uVar2;
  uVar2 = uVar2 + uVar3 * -0x80000;
  uVar3 = uVar3 >> 0xd;
  bVar1 = uVar5 - uVar3 < (uint)bVar23;
  bVar24 = uVar3 < uVar5 || bVar1;
  uVar4 = (uVar5 - uVar3) - (uint)!bVar23;
  uVar12 = uVar8 * uVar20;
  if (uVar3 < uVar5 || bVar1) {
    bVar24 = uVar12 * 0x80000 <= uVar4;
  }
  uVar4 = uVar4 + uVar12 * -0x80000;
  uVar5 = uVar20 * uVar22;
  bVar25 = uVar5 * 8 <= uVar2;
  uVar3 = uVar5 >> 0x1d;
  bVar1 = uVar4 - uVar3 < (uint)bVar25;
  bVar23 = uVar3 < uVar4 || bVar1;
  uVar6 = (uVar4 - uVar3) - (uint)!bVar25;
  uVar13 = uVar20 * uVar16;
  if (uVar3 < uVar4 || bVar1) {
    bVar23 = uVar13 * 8 <= uVar6;
  }
  uVar6 = uVar6 + uVar13 * -8;
  uVar3 = ((((uVar18 - (uVar12 >> 0xd)) - (uint)!bVar24) - (uVar13 >> 0x1d)) - (uint)!bVar23) *
          0x4000000 | uVar6 >> 6;
  uVar13 = uVar10 * (uVar3 >> 0xf);
  uVar18 = uVar6 * 0x4000000 | uVar2 + uVar5 * -8 >> 6;
  uVar5 = uVar5 * -0x20000000;
  uVar21 = uVar13 >> 0x10;
  uVar4 = uVar18 - uVar21 * uVar17;
  uVar2 = uVar21 * uVar22;
  bVar23 = uVar2 * 0x10000 <= uVar5;
  uVar5 = uVar5 + uVar2 * -0x10000;
  uVar2 = uVar2 >> 0x10;
  bVar1 = uVar4 - uVar2 < (uint)bVar23;
  bVar24 = uVar2 < uVar4 || bVar1;
  uVar12 = (uVar4 - uVar2) - (uint)!bVar23;
  uVar6 = uVar21 * uVar16;
  if (uVar2 < uVar4 || bVar1) {
    bVar24 = uVar6 * 0x10000 <= uVar12;
  }
  uVar12 = uVar12 + uVar6 * -0x10000;
  uVar3 = (((uVar3 - uVar8 * uVar21) - (uint)(uVar18 < uVar21 * uVar17)) - (uVar6 >> 0x10)) -
          (uint)!bVar24;
  uVar6 = uVar10 * (uVar3 >> 2) >> 0x10;
  uVar2 = uVar6 * uVar17;
  bVar23 = uVar2 * 0x80000 <= uVar5;
  uVar5 = uVar5 + uVar2 * -0x80000;
  uVar2 = uVar2 >> 0xd;
  bVar1 = uVar12 - uVar2 < (uint)bVar23;
  bVar24 = uVar2 < uVar12 || bVar1;
  uVar18 = (uVar12 - uVar2) - (uint)!bVar23;
  uVar4 = uVar8 * uVar6;
  if (uVar2 < uVar12 || bVar1) {
    bVar24 = uVar4 * 0x80000 <= uVar18;
  }
  uVar18 = uVar18 + uVar4 * -0x80000;
  uVar12 = uVar6 * uVar22;
  bVar25 = uVar12 * 8 <= uVar5;
  uVar2 = uVar12 >> 0x1d;
  bVar1 = uVar18 - uVar2 < (uint)bVar25;
  bVar23 = uVar2 < uVar18 || bVar1;
  uVar7 = (uVar18 - uVar2) - (uint)!bVar25;
  uVar14 = uVar6 * uVar16;
  if (uVar2 < uVar18 || bVar1) {
    bVar23 = uVar14 * 8 <= uVar7;
  }
  uVar7 = uVar7 + uVar14 * -8;
  uVar9 = uVar21 * 0x400000 + uVar6 * 0x200;
  uVar18 = ((((uVar3 - (uVar4 >> 0xd)) - (uint)!bVar24) - (uVar14 >> 0x1d)) - (uint)!bVar23) *
           0x4000000 | uVar7 >> 6;
  uVar4 = uVar7 * 0x4000000 | uVar5 + uVar12 * -8 >> 6;
  uVar10 = uVar10 * (uVar18 >> 0xf);
  uVar12 = uVar12 * -0x20000000;
  uVar14 = uVar10 >> 0x10;
  uVar5 = uVar4 - uVar14 * uVar17;
  uVar3 = uVar14 * uVar22;
  bVar23 = uVar3 * 0x10000 <= uVar12;
  uVar2 = uVar3 >> 0x10;
  bVar1 = uVar5 - uVar2 < (uint)bVar23;
  bVar24 = uVar2 < uVar5 || bVar1;
  uVar7 = (uVar5 - uVar2) - (uint)!bVar23;
  uVar15 = uVar14 * uVar16;
  if (uVar2 < uVar5 || bVar1) {
    bVar24 = uVar15 * 0x10000 <= uVar7;
  }
  uVar7 = uVar7 + uVar15 * -0x10000;
  uVar10 = uVar10 >> 0x14;
  uVar5 = uVar9 + uVar10;
  uVar4 = ((((uVar18 - uVar8 * uVar14) - (uint)(uVar4 < uVar14 * uVar17)) - (uVar15 >> 0x10)) -
          (uint)!bVar24) * 0x4000 | uVar7 >> 0x12;
  uVar2 = uVar7 * 0x4000 | uVar12 + uVar3 * -0x10000 >> 0x12;
  uVar18 = uVar3 * -0x40000000;
  uVar14 = uVar14 << 0x1c;
  uVar16 = uVar16 | uVar8 << 0x10;
  uVar22 = uVar22 | uVar17 << 0x10;
  bVar1 = uVar4 - uVar16 < (uint)(uVar22 <= uVar2);
  uVar8 = uVar4;
  if (uVar16 < uVar4 || bVar1) {
    uVar8 = (uVar4 - uVar16) - (uint)(uVar22 > uVar2);
    uVar2 = uVar2 - uVar22;
  }
  uVar3 = uVar3 * -0x80000000;
  bVar23 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)CARRY4(uVar18,uVar18));
  uVar2 = uVar2 * 2 + (uint)CARRY4(uVar18,uVar18);
  bVar24 = CARRY4(uVar8 * 2,(uint)bVar23);
  bVar25 = CARRY4(uVar8,uVar8) || bVar24;
  uVar17 = uVar8 * 2 + (uint)bVar23;
  bVar23 = bVar25 < (uVar16 < uVar17 || uVar17 - uVar16 < (uint)(uVar22 <= uVar2));
  if ((CARRY4(uVar8,uVar8) || bVar24) || bVar23) {
    uVar17 = (uVar17 - uVar16) - (uint)(uVar22 > uVar2);
    uVar2 = uVar2 - uVar22;
  }
  bVar26 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)CARRY4(uVar3,uVar3));
  uVar2 = uVar2 * 2 + (uint)CARRY4(uVar3,uVar3);
  bVar24 = CARRY4(uVar17 * 2,(uint)bVar26);
  bVar27 = CARRY4(uVar17,uVar17) || bVar24;
  uVar3 = uVar17 * 2 + (uint)bVar26;
  bVar26 = bVar27 < (uVar16 < uVar3 || uVar3 - uVar16 < (uint)(uVar22 <= uVar2));
  if ((CARRY4(uVar17,uVar17) || bVar24) || bVar26) {
    uVar3 = (uVar3 - uVar16) - (uint)(uVar22 > uVar2);
    uVar2 = uVar2 - uVar22;
  }
  if (uVar3 != 0 || uVar2 != 0) {
    uVar14 = uVar14 | 1;
  }
  uVar2 = (((uint)(uVar16 < uVar4 || bVar1) * 2 + (uint)(bVar25 || bVar23)) * 2 +
          (uint)(bVar27 || bVar26)) * 0x10000000;
  uVar3 = uVar5 + CARRY4(uVar14,uVar2);
  iVar11 = uVar19 * 0x10000 + uVar20 * 8 + (uVar13 >> 0x1a) +
           (uint)CARRY4(uVar21 * 0x400000,uVar6 * 0x200) + (uint)CARRY4(uVar9,uVar10) +
           (uint)CARRY4(uVar5,(uint)CARRY4(uVar14,uVar2));
  if (-1 < iVar11) {
    return CONCAT44(iVar11 * 2 +
                    (uint)(CARRY4(uVar3,uVar3) ||
                          CARRY4(uVar3 * 2,(uint)CARRY4(uVar14 + uVar2,uVar14 + uVar2))),param_1) &
           0xffffffff80000000;
  }
  return CONCAT44(iVar11,param_1) & 0xffffffff80000000;
}

