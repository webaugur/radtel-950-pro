/**
 * @brief fun_08024bf2
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08024bf2, Ghidra name FUN_08024bf2, 1638 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08024bf2(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar4;
  undefined4 extraout_r1_02;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_r5;
  int unaff_r6;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  char cVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uStack00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined8 in_stack_00000098;
  
  uVar17 = CONCAT44(unaff_r6,in_stack_00000038);
  iVar2 = 0;
  if (unaff_r6 < 0x100000) {
    uVar17 = FUN_08028a98(in_stack_00000038,in_stack_0000003c,(int)DAT_08024f88,
                          (int)((ulonglong)DAT_08024f88 >> 0x20));
    iVar2 = -0x35;
  }
  uVar3 = (uint)((ulonglong)uVar17 >> 0x20);
  in_stack_00000038 = (undefined4)uVar17;
  iVar2 = iVar2 + ((int)uVar3 >> 0x14);
  iVar9 = iVar2 + -0x3ff;
  uVar3 = uVar3 & 0xfffff;
  uVar8 = uVar3 | 0x3ff00000;
  if (DAT_08024f90 < (int)uVar3) {
    if ((int)uVar3 < DAT_08024f94) {
      iVar7 = 1;
    }
    else {
      iVar7 = 0;
      uVar8 = uVar8 - 0x100000;
      iVar9 = iVar2 + -0x3fe;
    }
  }
  else {
    iVar7 = 0;
  }
  uVar17 = *(undefined8 *)(DAT_08024f98 + 0x8024c4e + iVar7 * 8);
  uVar5 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar13 = (undefined4)uVar17;
  uVar17 = FUN_080291f8(in_stack_00000038,uVar8,uVar13,uVar5);
  uVar23 = (undefined4)((ulonglong)uVar17 >> 0x20);
  FUN_0802819c(in_stack_00000038,uVar8,uVar13,uVar5);
  uVar18 = FUN_0802841c();
  uVar15 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar19 = FUN_08028a98((int)uVar17,uVar23,(int)uVar18,uVar15);
  uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar14 = (undefined4)uVar19;
  iVar2 = ((int)uVar8 >> 1 | 0x20000000U) + iVar7 * 0x40000 + 0x80000;
  uVar16 = (undefined4)*(undefined8 *)(DAT_08024f9c + 0x8024ca8);
  uVar19 = FUN_080291f8(uVar16,iVar2,uVar13,uVar5);
  uVar19 = FUN_08028fa0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),in_stack_00000038,uVar8);
  uVar19 = FUN_08028a98(unaff_r5,uVar6,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
  uVar20 = FUN_08028a98(unaff_r5,uVar6,uVar16,iVar2);
  uVar17 = FUN_08028fa0((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar17,uVar23);
  uVar17 = FUN_080291f8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar19,
                        (int)((ulonglong)uVar19 >> 0x20));
  uVar17 = FUN_08028a98((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,uVar15);
  uVar15 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar18 = FUN_08028a98(uVar14,uVar6,uVar14,uVar6);
  uVar5 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar23 = (undefined4)uVar18;
  uVar13 = FUN_08025978(uVar23,DAT_08024fa0 + 0x8024d46,6);
  uVar18 = FUN_08028a98(uVar23,uVar5,uVar23,uVar5);
  uVar18 = FUN_08028a98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar13,extraout_s1);
  uVar19 = FUN_0802819c(unaff_r5,uVar6,uVar14,uVar6);
  uVar19 = FUN_08028a98((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,uVar15);
  uVar18 = FUN_0802819c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,
                        (int)((ulonglong)uVar18 >> 0x20));
  uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar19 = FUN_08028a98(unaff_r5,uVar6,unaff_r5,uVar6);
  uVar5 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar13 = (undefined4)((ulonglong)DAT_08024fa8 >> 0x20);
  uVar16 = (undefined4)DAT_08024fa8;
  uVar20 = FUN_0802819c((int)uVar19,uVar5,uVar16,uVar13);
  FUN_0802819c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar18,uVar23);
  uVar20 = FUN_080291f8(unaff_r5,extraout_r1,uVar16,uVar13);
  uVar19 = FUN_080291f8((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar19,uVar5);
  uVar18 = FUN_08028fa0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar23);
  uVar19 = FUN_08028a98(unaff_r5,uVar6,unaff_r5,extraout_r1);
  uVar23 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar18 = FUN_08028a98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar14,uVar6);
  uVar17 = FUN_08028a98((int)uVar17,uVar15,unaff_r5,extraout_r1);
  uVar17 = FUN_0802819c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                        (int)((ulonglong)uVar18 >> 0x20));
  uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
  FUN_0802819c((int)uVar19,uVar23,(int)uVar17,uVar14);
  uVar18 = FUN_080291f8(unaff_r5,extraout_r1_00,(int)uVar19,uVar23);
  uVar17 = FUN_08028fa0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,uVar14);
  uVar18 = FUN_08028a98(unaff_r5,extraout_r1_00,(int)DAT_08024fb0,
                        (int)((ulonglong)DAT_08024fb0 >> 0x20));
  uVar14 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar17 = FUN_08028a98((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)DAT_08024fb8,
                        (int)((ulonglong)DAT_08024fb8 >> 0x20));
  uVar19 = FUN_08028a98(unaff_r5,extraout_r1_00,(int)DAT_08024fc0,
                        (int)((ulonglong)DAT_08024fc0 >> 0x20));
  uVar19 = FUN_0802819c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,
                        (int)((ulonglong)uVar17 >> 0x20));
  uVar17 = *(undefined8 *)(DAT_08024fc8 + 0x8024eaa + iVar7 * 8);
  uVar19 = FUN_0802819c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,
                        (int)((ulonglong)uVar17 >> 0x20));
  uVar23 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar20 = FUN_080289b0(iVar9);
  uVar15 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar21 = FUN_0802819c((int)uVar18,uVar14,(int)uVar19,uVar23);
  uVar17 = *(undefined8 *)(DAT_08024fcc + 0x8024ee0 + iVar7 * 8);
  uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar5 = (undefined4)uVar17;
  uVar17 = FUN_0802819c((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),uVar5,uVar6);
  FUN_0802819c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar20,uVar15);
  uVar17 = FUN_080291f8(unaff_r5,extraout_r1_01,(int)uVar20,uVar15);
  uVar17 = FUN_080291f8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar5,uVar6);
  uVar17 = FUN_080291f8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,uVar14);
  uVar17 = FUN_08028fa0((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar19,uVar23);
  uVar23 = (undefined4)((ulonglong)in_stack_00000098 >> 0x20);
  uVar17 = FUN_08028a98((int)in_stack_00000098,uVar23,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
  uVar18 = FUN_080291f8((int)in_stack_00000098,uVar23,unaff_r5,uVar23);
  uVar18 = FUN_08028a98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),unaff_r5,extraout_r1_01);
  uVar17 = FUN_0802819c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                        (int)((ulonglong)uVar17 >> 0x20));
  uVar15 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar14 = (undefined4)uVar17;
  uVar17 = FUN_08028a98(unaff_r5,uVar23,unaff_r5,extraout_r1_01);
  uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar23 = (undefined4)uVar17;
  lVar22 = FUN_0802819c(uVar14,uVar15,uVar23,uVar6);
  uVar3 = (uint)((ulonglong)lVar22 >> 0x20);
  iVar2 = (int)lVar22;
  if ((int)DAT_080252b8 <= (int)uVar3) {
    cVar11 = DAT_080252b8 <= uVar3;
    if (iVar2 == 0 && uVar3 == DAT_080252b8) {
      uVar18 = FUN_080291f8(iVar2,uVar3,uVar23,uVar6);
      uVar19 = FUN_0802819c(uVar14,uVar15,(int)DAT_080252c0,(int)((ulonglong)DAT_080252c0 >> 0x20));
      FUN_08028f3c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,
                   (int)((ulonglong)uVar18 >> 0x20));
      if (cVar11 != '\0') goto LAB_080250a8;
    }
    FUN_080011c4(2);
    uVar14 = FUN_08025c18();
    return uVar14;
  }
  uVar12 = DAT_080252c8 <= (uVar3 & 0x7fffffff);
  if (!(bool)uVar12) {
LAB_080250a8:
    uVar8 = 0;
    if (DAT_080252d4 < (int)(uVar3 & 0x7fffffff)) {
      uVar3 = (0x100000U >> (DAT_080252d0 + ((int)(uVar3 & 0x7fffffff) >> 0x14) + 1U & 0xff)) +
              uVar3;
      uVar4 = ((uVar3 & 0x7fffffff) >> 0x14) - 0x3ff;
      uVar8 = (uVar3 & 0xfffff | 0x100000) >> (0x14 - uVar4 & 0xff);
      if (lVar22 < 0) {
        uVar8 = -uVar8;
      }
      uVar17 = FUN_080291f8(uVar23,uVar6,(int)*(undefined8 *)(DAT_080252d8 + 0x80250d0),
                            uVar3 & ~(DAT_080252dc >> (uVar4 & 0xff)));
    }
    uStack00000034 = (undefined4)((ulonglong)uVar17 >> 0x20);
    FUN_0802819c(uVar14,uVar15,(int)uVar17,uStack00000034);
    uVar18 = FUN_08028a98(unaff_r5,extraout_r1_02,(int)DAT_080252e0,
                          (int)((ulonglong)DAT_080252e0 >> 0x20));
    uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_08028a98(unaff_r5,extraout_r1_02,(int)DAT_080252e8,
                          (int)((ulonglong)DAT_080252e8 >> 0x20));
    uVar17 = FUN_080291f8(unaff_r5,extraout_r1_02,(int)uVar17,uStack00000034);
    uVar17 = FUN_08028fa0((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar14,uVar15);
    uVar17 = FUN_08028a98((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)DAT_080252f0,
                          (int)((ulonglong)DAT_080252f0 >> 0x20));
    uVar17 = FUN_0802819c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar19,
                          (int)((ulonglong)uVar19 >> 0x20));
    uVar15 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar19 = FUN_0802819c((int)uVar18,uVar23,(int)uVar17,uVar15);
    uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar14 = (undefined4)uVar19;
    uVar18 = FUN_080291f8(uVar14,uVar6,(int)uVar18,uVar23);
    uVar17 = FUN_08028fa0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,uVar15);
    uVar23 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar18 = FUN_08028a98(uVar14,uVar6,uVar14,uVar6);
    uVar15 = FUN_08025978((int)uVar18,DAT_080252f8 + 0x80251d8,5);
    uVar18 = FUN_08028a98(uVar15,extraout_s1_00,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_08028fa0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar14,uVar6);
    uVar15 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_08028a98(uVar14,uVar6,(int)uVar17,uVar23);
    uVar17 = FUN_0802819c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,uVar23);
    uVar19 = FUN_080291f8((int)uVar18,uVar15,(int)DAT_08025300,
                          (int)((ulonglong)DAT_08025300 >> 0x20));
    uVar18 = FUN_08028a98(uVar14,uVar6,(int)uVar18,uVar15);
    uVar18 = FUN_0802841c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar19,
                          (int)((ulonglong)uVar19 >> 0x20));
    uVar17 = FUN_080291f8((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                          (int)((ulonglong)uVar17 >> 0x20));
    FUN_080291f8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar14,uVar6);
    uVar17 = FUN_08028fa0();
    iVar2 = (int)((ulonglong)uVar17 >> 0x20);
    if ((int)(iVar2 + uVar8 * 0x100000) >> 0x14 < 1) {
      FUN_08029b90((int)uVar17,iVar2,uVar8);
      iVar9 = FUN_08023abc();
      if (iVar9 == 4) {
        FUN_08025c38();
      }
      FUN_08029b90((int)uVar17,iVar2,uVar8);
    }
    uVar14 = FUN_08028a98();
    return uVar14;
  }
  bVar1 = DAT_080252cc + uVar3 == 0;
  uVar10 = iVar2 == 0 && bVar1;
  if (iVar2 == 0 && bVar1) {
    uVar18 = FUN_080291f8(iVar2,uVar3,uVar23,uVar6);
    FUN_08028f3c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar14,uVar15);
    if ((bool)uVar12 && !(bool)uVar10) goto LAB_080250a8;
  }
  FUN_080011c4(2);
  uVar14 = FUN_08025c38();
  return uVar14;
}

