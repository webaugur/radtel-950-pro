/**
 * @brief fun_08024b50
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08024b50, Ghidra name FUN_08024b50, 162 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08024b50(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_r1_00;
  undefined4 uVar7;
  undefined4 unaff_r5;
  uint uVar8;
  undefined1 uVar9;
  char cVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 extraout_s1;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 uStack00000020;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined8 in_stack_00000098;
  
  uVar14 = FUN_08028fa0();
  uVar7 = (undefined4)((ulonglong)_uStack00000020 >> 0x20);
  uVar13 = (undefined4)_uStack00000020;
  uVar15 = FUN_08028a98(uVar13,uVar7,uVar13,uVar7);
  uVar14 = FUN_08028a98((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                        (int)((ulonglong)uVar14 >> 0x20));
  uVar15 = FUN_08028a98(uVar13,uVar7,(int)DAT_08024f70,(int)((ulonglong)DAT_08024f70 >> 0x20));
  uVar12 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar14 = FUN_08028a98((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)DAT_08024f78,
                        (int)((ulonglong)DAT_08024f78 >> 0x20));
  uVar16 = FUN_08028a98(uVar13,uVar7,(int)DAT_08024f80,(int)((ulonglong)DAT_08024f80 >> 0x20));
  uVar14 = FUN_080291f8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar14,
                        (int)((ulonglong)uVar14 >> 0x20));
  uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
  FUN_0802819c((int)uVar15,uVar12,(int)uVar14,uVar7);
  uVar15 = FUN_080291f8(unaff_r5,extraout_r1,(int)uVar15,uVar12);
  uVar14 = FUN_08028fa0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,uVar7);
  uVar7 = (undefined4)((ulonglong)in_stack_00000098 >> 0x20);
  uVar14 = FUN_08028a98((int)in_stack_00000098,uVar7,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  uVar15 = FUN_080291f8((int)in_stack_00000098,uVar7,unaff_r5,uVar7);
  uVar15 = FUN_08028a98((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),unaff_r5,extraout_r1);
  uVar14 = FUN_0802819c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                        (int)((ulonglong)uVar14 >> 0x20));
  uVar13 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar12 = (undefined4)uVar14;
  uVar14 = FUN_08028a98(unaff_r5,uVar7,unaff_r5,extraout_r1);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar7 = (undefined4)uVar14;
  lVar17 = FUN_0802819c(uVar12,uVar13,uVar7,uVar5);
  uVar3 = (uint)((ulonglong)lVar17 >> 0x20);
  iVar2 = (int)lVar17;
  if ((int)DAT_080252b8 <= (int)uVar3) {
    cVar10 = DAT_080252b8 <= uVar3;
    if (iVar2 == 0 && uVar3 == DAT_080252b8) {
      uVar15 = FUN_080291f8(iVar2,uVar3,uVar7,uVar5);
      uVar16 = FUN_0802819c(uVar12,uVar13,(int)DAT_080252c0,(int)((ulonglong)DAT_080252c0 >> 0x20));
      FUN_08028f3c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                   (int)((ulonglong)uVar15 >> 0x20));
      if (cVar10 != '\0') goto LAB_080250a8;
    }
    FUN_080011c4(2);
    uVar12 = FUN_08025c18();
    return uVar12;
  }
  uVar11 = DAT_080252c8 <= (uVar3 & 0x7fffffff);
  if (!(bool)uVar11) {
LAB_080250a8:
    uVar8 = 0;
    if (DAT_080252d4 < (int)(uVar3 & 0x7fffffff)) {
      uVar3 = (0x100000U >> (DAT_080252d0 + ((int)(uVar3 & 0x7fffffff) >> 0x14) + 1U & 0xff)) +
              uVar3;
      uVar6 = ((uVar3 & 0x7fffffff) >> 0x14) - 0x3ff;
      uVar8 = (uVar3 & 0xfffff | 0x100000) >> (0x14 - uVar6 & 0xff);
      uStack00000020 = (undefined4)*(undefined8 *)(DAT_080252d8 + 0x80250d0);
      if (lVar17 < 0) {
        uVar8 = -uVar8;
      }
      uVar14 = FUN_080291f8(uVar7,uVar5,uStack00000020,uVar3 & ~(DAT_080252dc >> (uVar6 & 0xff)));
    }
    uStack00000034 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uStack00000030 = (undefined4)uVar14;
    FUN_0802819c(uVar12,uVar13,uStack00000030,uStack00000034);
    uVar14 = FUN_08028a98(unaff_r5,extraout_r1_00,(int)DAT_080252e0,
                          (int)((ulonglong)DAT_080252e0 >> 0x20));
    uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar15 = FUN_08028a98(unaff_r5,extraout_r1_00,(int)DAT_080252e8,
                          (int)((ulonglong)DAT_080252e8 >> 0x20));
    uVar16 = FUN_080291f8(unaff_r5,extraout_r1_00,uStack00000030,uStack00000034);
    uVar16 = FUN_08028fa0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar12,uVar13);
    uVar16 = FUN_08028a98((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)DAT_080252f0,
                          (int)((ulonglong)DAT_080252f0 >> 0x20));
    uVar15 = FUN_0802819c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                          (int)((ulonglong)uVar15 >> 0x20));
    uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar16 = FUN_0802819c((int)uVar14,uVar7,(int)uVar15,uVar13);
    uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar12 = (undefined4)uVar16;
    uVar14 = FUN_080291f8(uVar12,uVar5,(int)uVar14,uVar7);
    uVar14 = FUN_08028fa0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,uVar13);
    uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar15 = FUN_08028a98(uVar12,uVar5,uVar12,uVar5);
    uVar13 = FUN_08025978((int)uVar15,DAT_080252f8 + 0x80251d8,5);
    uVar15 = FUN_08028a98(uVar13,extraout_s1,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar15 = FUN_08028fa0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar12,uVar5);
    uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar16 = FUN_08028a98(uVar12,uVar5,(int)uVar14,uVar7);
    uVar14 = FUN_0802819c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar14,uVar7);
    uVar16 = FUN_080291f8((int)uVar15,uVar13,(int)DAT_08025300,
                          (int)((ulonglong)DAT_08025300 >> 0x20));
    uVar15 = FUN_08028a98(uVar12,uVar5,(int)uVar15,uVar13);
    uVar15 = FUN_0802841c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                          (int)((ulonglong)uVar16 >> 0x20));
    uVar14 = FUN_080291f8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                          (int)((ulonglong)uVar14 >> 0x20));
    FUN_080291f8((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar5);
    uVar14 = FUN_08028fa0();
    iVar2 = (int)((ulonglong)uVar14 >> 0x20);
    if ((int)(iVar2 + uVar8 * 0x100000) >> 0x14 < 1) {
      FUN_08029b90((int)uVar14,iVar2,uVar8);
      iVar4 = FUN_08023abc();
      if (iVar4 == 4) {
        FUN_08025c38();
      }
      FUN_08029b90((int)uVar14,iVar2,uVar8);
    }
    uVar12 = FUN_08028a98();
    return uVar12;
  }
  bVar1 = DAT_080252cc + uVar3 == 0;
  uVar9 = iVar2 == 0 && bVar1;
  if (iVar2 == 0 && bVar1) {
    uVar15 = FUN_080291f8(iVar2,uVar3,uVar7,uVar5);
    FUN_08028f3c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar12,uVar13);
    if ((bool)uVar11 && !(bool)uVar9) goto LAB_080250a8;
  }
  FUN_080011c4(2);
  uVar12 = FUN_08025c38();
  return uVar12;
}

