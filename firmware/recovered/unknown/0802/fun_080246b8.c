/**
 * @brief fun_080246b8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080246b8, Ghidra name FUN_080246b8, 982 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_080246b8(void)

{
  bool bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  char cVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  ulonglong in_d1;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  longlong lVar29;
  int local_b8;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  
  uVar4 = DAT_08024ae8;
  uVar21 = DAT_08024ae0;
  uStack_2c = (uint)(in_d0 >> 0x20);
  local_28 = (uint)in_d1;
  uStack_24 = (uint)(in_d1 >> 0x20);
  local_30 = (int)in_d0;
  uVar13 = uStack_2c & 0x7fffffff;
  uVar14 = uStack_24 & 0x7fffffff;
  if (((uint)(local_30 != 0) + uStack_2c * 2 + DAT_08024ad8 < (uint)(DAT_08024ad8 >> 1)) ||
     ((uint)(local_28 != 0) + uStack_24 * 2 + DAT_08024ad8 < DAT_08024adc)) goto LAB_08025be4;
  iVar5 = (int)DAT_08024ae0;
  if ((in_d1 & 0x7fffffff00000000) == 0 && local_28 == 0) {
    return iVar5;
  }
  if (uStack_2c == DAT_08024ae8) {
    if (local_30 == 0) {
      return iVar5;
    }
LAB_08024728:
    iVar6 = 1;
  }
  else {
    if (local_30 != 0) goto LAB_08024728;
    iVar6 = 0;
  }
  if ((0xffe00000 < iVar6 + uStack_2c * 2) ||
     (uVar7 = (uint)(local_28 != 0) + uStack_24 * 2, 0xffe00000 < uVar7)) {
LAB_08025be4:
    iVar5 = FUN_0802819c(local_30,uStack_2c,local_28,uStack_24);
    return iVar5;
  }
  iVar6 = 0;
  if ((longlong)in_d0 < 0) {
    uVar7 = DAT_08024aec;
  }
  if ((longlong)in_d0 < 0 && (int)uVar14 < (int)uVar7) {
    if ((int)uVar14 < DAT_08024af0) {
      if ((int)DAT_08024ae8 <= (int)uVar14) {
        iVar8 = DAT_08024af4 + ((int)uVar14 >> 0x14);
        if (iVar8 < 0x15) {
          if ((local_28 == 0) &&
             (uVar7 = uVar14 >> (0x14U - iVar8 & 0xff), uVar7 << (0x14U - iVar8 & 0xff) == uVar14))
          goto LAB_080247a6;
        }
        else {
          uVar7 = local_28 >> (0x34U - iVar8 & 0xff);
          if (uVar7 << (0x34U - iVar8 & 0xff) == local_28) {
LAB_080247a6:
            iVar6 = 2 - (uVar7 & 1);
          }
        }
      }
    }
    else {
      iVar6 = 2;
    }
  }
  if (((in_d0 & 0x7fffffff00000000) == 0 && local_30 == 0) && ((longlong)in_d1 < 0)) {
    if ((uStack_2c != 0 && iVar6 != 2) && (iVar6 == 1)) {
      FUN_080011c4(2);
      uVar18 = FUN_08025ba0();
      iVar5 = FUN_08027ec0(uVar18,extraout_s1);
      return iVar5;
    }
    FUN_080011c4(2);
    iVar5 = FUN_08025ba0();
    return iVar5;
  }
  uVar18 = (undefined4)(DAT_08024ae0 >> 0x20);
  uVar2 = (ulonglong)DAT_08024af8 >> 0x20;
  local_b8 = (int)DAT_08024af8;
  iVar8 = (int)DAT_08024b00;
  if (local_28 == 0) {
    if (uVar14 == DAT_08024aec) {
      if (in_d0 == 0xbff0000000000000) {
        return iVar5;
      }
      if ((int)uVar13 < (int)DAT_08024ae8) {
        if ((longlong)in_d1 < 0) {
          iVar5 = FUN_08027ec0(0,uStack_24);
          return iVar5;
        }
      }
      else if (-1 < (longlong)in_d1) {
        return 0;
      }
      return (int)*(undefined8 *)(DAT_08024b08 + 0x8024852);
    }
    if (uVar14 == DAT_08024ae8) {
      if ((longlong)in_d1 < 0) {
        if ((in_d0 & 0x7fffffff00000000) == 0) {
          if (local_30 != 0) {
            FUN_080011c4(2);
            iVar5 = FUN_08025c18();
            return iVar5;
          }
          return local_b8;
        }
        if (uVar13 == DAT_08024aec) {
          if (local_30 == 0) {
            return iVar8;
          }
        }
        else if ((int)uVar13 < (int)DAT_08024aec) {
          iVar5 = FUN_0802841c(iVar5,uVar18,local_30,uStack_2c);
          return iVar5;
        }
      }
      return local_30;
    }
    if ((int)uVar13 < (int)DAT_08024aec) {
      uVar25 = in_d0;
      if (uStack_24 == 0x40000000) goto LAB_080252b0;
      if ((uStack_24 == 0x3fe00000) && (-1 < (longlong)in_d0)) {
        iVar5 = FUN_08027872(local_30,uStack_2c);
        return iVar5;
      }
    }
  }
  uVar23 = FUN_08026002(local_30,uStack_2c);
  uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
  uVar3 = (undefined4)uVar23;
  uVar25 = CONCAT44(uStack_2c,uVar3) & 0x7fffffffffffffff;
  if (local_30 == 0) {
    if ((in_d0 & 0x7fffffff00000000) == 0) {
      if (iVar6 == 2 || uStack_2c == 0) {
        return iVar8;
      }
      if (iVar6 != 1) {
        return iVar8;
      }
      if (-1 < (longlong)in_d0) {
        return iVar8;
      }
      return (int)DAT_08024b10;
    }
    if (uVar13 == 0x7ff00000) {
      if ((0xffffffff < (longlong)in_d0) && (-1 < (longlong)in_d1)) {
        return local_b8;
      }
      if ((0xffffffff < (longlong)in_d0) && ((longlong)in_d1 < 0)) {
        return iVar8;
      }
      if (((longlong)in_d0 < 0) && (-1 < (longlong)in_d1)) {
        if (iVar6 != 1) {
          return local_b8;
        }
        return (int)uRam08024b18;
      }
      if ((longlong)in_d0 < 0 && (longlong)in_d1 < 0) {
        if (iVar6 != 1) {
          return iVar8;
        }
        return (int)DAT_08024b10;
      }
    }
    else if (uVar13 == uVar4) {
      if ((-1 < (longlong)in_d0) || (iVar6 != 0)) {
        if (iVar6 == 2) {
          uVar18 = 1;
        }
        else {
          uVar18 = 0xffffffff;
        }
        iVar5 = FUN_080289b0(uVar18);
        return iVar5;
      }
      goto LAB_08024a06;
    }
  }
  if ((longlong)in_d0 < 0 && iVar6 == 0) {
LAB_08024a06:
    FUN_080011c4(1);
    iVar5 = FUN_08025bf8();
    return iVar5;
  }
  if ((longlong)in_d0 < 0 && iVar6 == 1) {
    uVar21 = DAT_08024b20;
  }
  if ((int)uVar14 <= DAT_08024b28) {
    iVar6 = 0;
    if (uVar13 < 0x100000) {
      uVar25 = FUN_08028a98(uVar3,uVar9,(int)DAT_08024f88,(int)((ulonglong)DAT_08024f88 >> 0x20));
      iVar6 = -0x35;
    }
    uVar4 = (uint)(uVar25 >> 0x20);
    local_88 = (undefined4)uVar25;
    iVar6 = iVar6 + ((int)uVar4 >> 0x14);
    iVar8 = iVar6 + -0x3ff;
    uVar4 = uVar4 & 0xfffff;
    uVar13 = uVar4 | 0x3ff00000;
    if (DAT_08024f90 < (int)uVar4) {
      if ((int)uVar4 < DAT_08024f94) {
        iVar12 = 1;
      }
      else {
        iVar12 = 0;
        uVar13 = uVar13 - 0x100000;
        iVar8 = iVar6 + -0x3fe;
      }
    }
    else {
      iVar12 = 0;
    }
    uVar23 = *(undefined8 *)(DAT_08024f98 + 0x8024c4e + iVar12 * 8);
    uVar10 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar19 = (undefined4)uVar23;
    uVar23 = FUN_080291f8(local_88,uVar13,uVar19,uVar10);
    uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar24 = FUN_0802819c(local_88,uVar13,uVar19,uVar10);
    uVar24 = FUN_0802841c(iVar5,uVar18,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
    uVar20 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar26 = FUN_08028a98((int)uVar23,uVar9,(int)uVar24,uVar20);
    uVar11 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar3 = (undefined4)uVar26;
    iVar6 = ((int)uVar13 >> 1 | 0x20000000U) + iVar12 * 0x40000 + 0x80000;
    local_a0 = (undefined4)*(undefined8 *)(DAT_08024f9c + 0x8024ca8);
    uVar26 = FUN_080291f8(local_a0,iVar6,uVar19,uVar10);
    uVar26 = FUN_08028fa0((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),local_88,uVar13);
    uVar26 = FUN_08028a98(0,uVar11,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
    uVar27 = FUN_08028a98(0,uVar11,local_a0,iVar6);
    uVar23 = FUN_08028fa0((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar23,uVar9);
    uVar23 = FUN_080291f8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar26,
                          (int)((ulonglong)uVar26 >> 0x20));
    uVar23 = FUN_08028a98((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,uVar20);
    uVar20 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar24 = FUN_08028a98(uVar3,uVar11,uVar3,uVar11);
    uVar10 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar9 = (undefined4)uVar24;
    uVar19 = FUN_08025978(uVar9,DAT_08024fa0 + 0x8024d46,6);
    uVar24 = FUN_08028a98(uVar9,uVar10,uVar9,uVar10);
    uVar24 = FUN_08028a98((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar19,extraout_s1_00);
    uVar26 = FUN_0802819c(0,uVar11,uVar3,uVar11);
    uVar26 = FUN_08028a98((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar23,uVar20);
    uVar24 = FUN_0802819c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar24,
                          (int)((ulonglong)uVar24 >> 0x20));
    uVar9 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar26 = FUN_08028a98(0,uVar11,0,uVar11);
    uVar10 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar19 = (undefined4)((ulonglong)DAT_08024fa8 >> 0x20);
    uVar22 = (undefined4)DAT_08024fa8;
    uVar27 = FUN_0802819c((int)uVar26,uVar10,uVar22,uVar19);
    FUN_0802819c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar24,uVar9);
    uVar27 = FUN_080291f8(0,extraout_r1,uVar22,uVar19);
    uVar26 = FUN_080291f8((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,uVar10);
    uVar24 = FUN_08028fa0((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar24,uVar9);
    uVar26 = FUN_08028a98(0,uVar11,0,extraout_r1);
    uVar9 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar24 = FUN_08028a98((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar3,uVar11);
    uVar23 = FUN_08028a98((int)uVar23,uVar20,0,extraout_r1);
    uVar23 = FUN_0802819c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                          (int)((ulonglong)uVar24 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar23 >> 0x20);
    FUN_0802819c((int)uVar26,uVar9,(int)uVar23,uVar3);
    uVar24 = FUN_080291f8(0,extraout_r1_00,(int)uVar26,uVar9);
    uVar23 = FUN_08028fa0((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,uVar3);
    uVar24 = FUN_08028a98(0,extraout_r1_00,(int)DAT_08024fb0,(int)((ulonglong)DAT_08024fb0 >> 0x20))
    ;
    uVar3 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar23 = FUN_08028a98((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)DAT_08024fb8,
                          (int)((ulonglong)DAT_08024fb8 >> 0x20));
    uVar26 = FUN_08028a98(0,extraout_r1_00,(int)DAT_08024fc0,(int)((ulonglong)DAT_08024fc0 >> 0x20))
    ;
    uVar26 = FUN_0802819c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar23,
                          (int)((ulonglong)uVar23 >> 0x20));
    uVar23 = *(undefined8 *)(DAT_08024fc8 + 0x8024eaa + iVar12 * 8);
    uVar26 = FUN_0802819c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar23,
                          (int)((ulonglong)uVar23 >> 0x20));
    uVar9 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar27 = FUN_080289b0(iVar8);
    uVar20 = (undefined4)((ulonglong)uVar27 >> 0x20);
    uVar28 = FUN_0802819c((int)uVar24,uVar3,(int)uVar26,uVar9);
    uVar23 = *(undefined8 *)(DAT_08024fcc + 0x8024ee0 + iVar12 * 8);
    uVar11 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar10 = (undefined4)uVar23;
    uVar23 = FUN_0802819c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar10,uVar11);
    FUN_0802819c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar27,uVar20);
    uVar23 = FUN_080291f8(0,extraout_r1_01,(int)uVar27,uVar20);
    uVar23 = FUN_080291f8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar10,uVar11);
    uVar23 = FUN_080291f8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,uVar3);
    uVar23 = FUN_08028fa0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar26,uVar9);
    lVar29 = (ulonglong)uStack_24 << 0x20;
    uVar23 = FUN_08028a98(local_28,uStack_24,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0,
                          uStack_24);
    uVar24 = FUN_080291f8(local_28,uStack_24,(int)lVar29,(int)((ulonglong)lVar29 >> 0x20));
    uVar24 = FUN_08028a98((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0,extraout_r1_01);
    uVar23 = FUN_0802819c((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,
                          (int)((ulonglong)uVar23 >> 0x20));
    uVar20 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar3 = (undefined4)uVar23;
    uVar23 = FUN_08028a98((int)lVar29,(int)((ulonglong)lVar29 >> 0x20),0,extraout_r1_01);
    uVar11 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar9 = (undefined4)uVar23;
    lVar29 = FUN_0802819c(uVar3,uVar20,uVar9,uVar11);
    uVar4 = (uint)((ulonglong)lVar29 >> 0x20);
    iVar6 = (int)lVar29;
    if ((int)uVar4 < (int)DAT_080252b8) {
      uVar17 = DAT_080252c8 <= (uVar4 & 0x7fffffff);
      if ((bool)uVar17) {
        bVar1 = DAT_080252cc + uVar4 == 0;
        uVar15 = iVar6 == 0 && bVar1;
        if (iVar6 != 0 || !bVar1) goto LAB_08024a66;
        uVar24 = FUN_080291f8(iVar6,uVar4,uVar9,uVar11);
        FUN_08028f3c((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar3,uVar20);
        if (!(bool)uVar17 || (bool)uVar15) goto LAB_08024a66;
      }
    }
    else {
      cVar16 = DAT_080252b8 <= uVar4;
      if (iVar6 != 0 || uVar4 != DAT_080252b8) {
LAB_0802504c:
        FUN_080011c4(2);
        iVar5 = FUN_08025c18();
        return iVar5;
      }
      uVar24 = FUN_080291f8(iVar6,uVar4,uVar9,uVar11);
      uVar26 = FUN_0802819c(uVar3,uVar20,(int)DAT_080252c0,(int)((ulonglong)DAT_080252c0 >> 0x20));
      FUN_08028f3c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar24,
                   (int)((ulonglong)uVar24 >> 0x20));
      if (cVar16 == '\0') goto LAB_0802504c;
    }
    uVar13 = 0;
    if (DAT_080252d4 < (int)(uVar4 & 0x7fffffff)) {
      uVar4 = (0x100000U >> (DAT_080252d0 + ((int)(uVar4 & 0x7fffffff) >> 0x14) + 1U & 0xff)) +
              uVar4;
      uVar14 = ((uVar4 & 0x7fffffff) >> 0x14) - 0x3ff;
      uVar13 = (uVar4 & 0xfffff | 0x100000) >> (0x14 - uVar14 & 0xff);
      local_a0 = (undefined4)*(undefined8 *)(DAT_080252d8 + 0x80250d0);
      if (lVar29 < 0) {
        uVar13 = -uVar13;
      }
      uVar23 = FUN_080291f8(uVar9,uVar11,local_a0,uVar4 & ~(DAT_080252dc >> (uVar14 & 0xff)));
    }
    uStack_8c = (undefined4)((ulonglong)uVar23 >> 0x20);
    local_90 = (undefined4)uVar23;
    FUN_0802819c(uVar3,uVar20,local_90,uStack_8c);
    uVar23 = FUN_08028a98(0,extraout_r1_02,(int)DAT_080252e0,(int)((ulonglong)DAT_080252e0 >> 0x20))
    ;
    uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar24 = FUN_08028a98(0,extraout_r1_02,(int)DAT_080252e8,(int)((ulonglong)DAT_080252e8 >> 0x20))
    ;
    uVar26 = FUN_080291f8(0,extraout_r1_02,local_90,uStack_8c);
    uVar26 = FUN_08028fa0((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar3,uVar20);
    uVar26 = FUN_08028a98((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)DAT_080252f0,
                          (int)((ulonglong)DAT_080252f0 >> 0x20));
    uVar24 = FUN_0802819c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar24,
                          (int)((ulonglong)uVar24 >> 0x20));
    uVar20 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar26 = FUN_0802819c((int)uVar23,uVar9,(int)uVar24,uVar20);
    uVar11 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar3 = (undefined4)uVar26;
    uVar23 = FUN_080291f8(uVar3,uVar11,(int)uVar23,uVar9);
    uVar23 = FUN_08028fa0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,uVar20);
    uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar24 = FUN_08028a98(uVar3,uVar11,uVar3,uVar11);
    uVar20 = FUN_08025978((int)uVar24,DAT_080252f8 + 0x80251d8,5);
    uVar24 = FUN_08028a98(uVar20,extraout_s1_01,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
    uVar24 = FUN_08028fa0((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar3,uVar11);
    uVar20 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar26 = FUN_08028a98(uVar3,uVar11,(int)uVar23,uVar9);
    uVar23 = FUN_0802819c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar23,uVar9);
    uVar26 = FUN_080291f8((int)uVar24,uVar20,(int)DAT_08025300,
                          (int)((ulonglong)DAT_08025300 >> 0x20));
    uVar24 = FUN_08028a98(uVar3,uVar11,(int)uVar24,uVar20);
    uVar24 = FUN_0802841c((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar26,
                          (int)((ulonglong)uVar26 >> 0x20));
    uVar23 = FUN_080291f8((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,
                          (int)((ulonglong)uVar23 >> 0x20));
    uVar23 = FUN_080291f8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar3,uVar11);
    uVar23 = FUN_08028fa0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),iVar5,uVar18);
    iVar6 = (int)((ulonglong)uVar23 >> 0x20);
    uVar18 = (undefined4)uVar23;
    iVar5 = iVar6 + uVar13 * 0x100000;
    in_d0 = CONCAT44(iVar5,uVar18);
    uVar25 = uVar21;
    if (iVar5 >> 0x14 < 1) {
      FUN_08029b90(uVar18,iVar6,uVar13);
      iVar5 = FUN_08023abc();
      if (iVar5 == 4) {
        FUN_08025c38();
      }
      in_d0 = FUN_08029b90(uVar18,iVar6,uVar13);
    }
LAB_080252b0:
    iVar5 = FUN_08028a98((int)uVar25,(int)(uVar25 >> 0x20),(int)in_d0,(int)(in_d0 >> 0x20));
    return iVar5;
  }
  if (DAT_08024b2c < (int)uVar14) {
    if (DAT_08024b30 < (int)uVar13) {
      if ((int)uVar13 < (int)uVar4) goto LAB_08024a26;
      goto joined_r0x08024a36;
    }
  }
  else {
LAB_08024a26:
    if (DAT_08024b30 <= (int)uVar13) {
      if ((int)uVar13 <= (int)uVar4) {
        uVar23 = FUN_080291f8(uVar3,uVar9,iVar5,uVar18);
        uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
        uVar24 = FUN_08028a98((int)uVar23,uVar18,(int)DAT_08024b38,
                              (int)((ulonglong)DAT_08024b38 >> 0x20));
        uVar24 = FUN_08028fa0((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)DAT_08024b40,
                              (int)((ulonglong)DAT_08024b40 >> 0x20));
        uVar23 = FUN_08028a98((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,uVar18);
        iVar5 = FUN_08024b50((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)DAT_08024b48,
                             (int)((ulonglong)DAT_08024b48 >> 0x20));
        return iVar5;
      }
joined_r0x08024a36:
      if ((int)uStack_24 < 1) goto LAB_08024a66;
      goto LAB_08024a38;
    }
  }
  if (-1 < (longlong)in_d1) {
LAB_08024a66:
    FUN_080011c4(2);
    iVar5 = FUN_08025c38();
    return iVar5;
  }
LAB_08024a38:
  FUN_080011c4(2);
  iVar5 = FUN_08025c18();
  FUN_08028a98((int)uVar21,(int)(uVar21 >> 0x20),local_b8,(int)uVar2);
  return iVar5;
}

