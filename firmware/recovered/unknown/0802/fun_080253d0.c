/**
 * @brief fun_080253d0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080253d0, Ghidra name FUN_080253d0, 664 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_080253d0(ulonglong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_r1;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong in_d0;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint auStack_78 [6];
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  uint uStack_2c;
  undefined4 uVar9;
  undefined4 uVar11;
  
  param_1[1] = DAT_08025780;
  uVar4 = DAT_080257a0;
  uStack_2c = (uint)(in_d0 >> 0x20);
  uVar13 = uStack_2c & 0x7fffffff;
  if (DAT_08025788 < (int)uVar13) {
    uVar21 = (undefined4)DAT_08025790;
    uVar8 = (undefined4)((ulonglong)DAT_08025790 >> 0x20);
    uVar22 = (undefined4)DAT_08025798;
    uVar9 = (undefined4)((ulonglong)DAT_08025798 >> 0x20);
    if ((int)uVar13 < DAT_0802578c) {
      uVar20 = (undefined4)DAT_080257a8;
      uVar10 = (undefined4)((ulonglong)DAT_080257a8 >> 0x20);
      uVar19 = (undefined4)DAT_080257b0;
      uVar11 = (undefined4)((ulonglong)DAT_080257b0 >> 0x20);
      if ((int)uStack_2c < 1) {
        uVar23 = FUN_0802819c((int)in_d0,uStack_2c,uVar21,uVar8);
        uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
        if (uVar13 == uVar4) {
          uVar23 = FUN_0802819c((int)uVar23,uVar8,uVar20,uVar10);
          uVar24 = FUN_0802819c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar19,uVar11);
          *param_1 = uVar24;
        }
        else {
          uVar24 = FUN_0802819c((int)uVar23,uVar8,uVar22,uVar9);
          *param_1 = uVar24;
        }
        uVar4 = 0xffffffff;
      }
      else {
        uVar23 = FUN_080291f8();
        uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
        if (uVar13 == uVar4) {
          uVar23 = FUN_080291f8((int)uVar23,uVar8,uVar20,uVar10);
          uVar24 = FUN_080291f8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar19,uVar11);
          *param_1 = uVar24;
        }
        else {
          uVar24 = FUN_080291f8((int)uVar23,uVar8,uVar22,uVar9);
          *param_1 = uVar24;
        }
        uVar4 = 1;
      }
    }
    else if (DAT_080257b8 < (int)uVar13) {
      uVar4 = ((uStack_2c & 0x7fffffff) >> 0x14) - 0x3f5;
      uVar13 = uVar4 & 0x1f;
      local_58 = 0x20 - uVar13;
      local_60 = 0;
      local_5c = 0;
      iVar14 = 5;
      do {
        iVar6 = ((int)uVar4 >> 5) + iVar14;
        iVar16 = DAT_080257d4 + 0x80255f8;
        if (uVar13 == 0) {
          uVar5 = *(uint *)(iVar16 + iVar6 * 4);
        }
        else {
          uVar5 = *(uint *)(iVar16 + iVar6 * 4 + 4) >> (local_58 & 0xff) |
                  *(int *)(iVar16 + iVar6 * 4) << uVar13;
        }
        lVar2 = (ulonglong)uVar5 * (ulonglong)(uStack_2c & 0xfffff | 0x100000);
        lVar3 = (ulonglong)uVar5 * (in_d0 & 0xffffffff);
        uVar5 = (uint)lVar3;
        uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar7 = (int)lVar2 + uVar12;
        uVar15 = auStack_78[iVar14 + 2] + uVar5;
        uVar5 = (uint)(uVar15 < uVar5);
        uVar17 = auStack_78[iVar14 + 1] + uVar7 + uVar5;
        if (uVar5 == 0) {
          if (uVar7 <= uVar17) goto LAB_0802564e;
LAB_0802564a:
          iVar16 = 1;
        }
        else {
          if (uVar17 <= uVar7) goto LAB_0802564a;
LAB_0802564e:
          iVar16 = 0;
        }
        auStack_78[iVar14 + 1] = uVar17;
        auStack_78[iVar14 + 2] = uVar15;
        auStack_78[iVar14] = iVar16 + (uint)(uVar7 < uVar12) + (int)((ulonglong)lVar2 >> 0x20);
        bVar1 = 0 < iVar14;
        iVar14 = iVar14 + -1;
      } while (bVar1);
      uVar4 = auStack_78[2] + 0x20000000 >> 0x1e;
      uVar23 = FUN_080289b0(auStack_78[2] << 2);
      uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar25 = FUN_080289f8(auStack_78[3]);
      uVar25 = FUN_08028a98((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)DAT_080257d8,
                            (int)((ulonglong)DAT_080257d8 >> 0x20));
      uVar8 = (undefined4)((ulonglong)uVar25 >> 0x20);
      uVar26 = FUN_080289f8(auStack_78[4]);
      uVar26 = FUN_08028a98((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)DAT_080257e0,
                            (int)((ulonglong)DAT_080257e0 >> 0x20));
      uVar21 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uVar27 = FUN_080289f8(auStack_78[5]);
      uVar27 = FUN_08028a98((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)DAT_080257e8,
                            (int)((ulonglong)DAT_080257e8 >> 0x20));
      uVar22 = (undefined4)((ulonglong)uVar27 >> 0x20);
      uVar28 = FUN_0802819c((int)uVar26,uVar21,(int)uVar27,uVar22);
      uVar28 = FUN_0802819c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar25,uVar8);
      FUN_0802819c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar23,uVar9);
      local_58 = 0;
      uStack_54 = extraout_r1;
      uVar23 = FUN_080291f8(0,extraout_r1,(int)uVar23,uVar9);
      uVar23 = FUN_080291f8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar25,uVar8);
      uVar23 = FUN_080291f8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar26,uVar21);
      uVar23 = FUN_08028fa0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar27,uVar22);
      uVar23 = FUN_08028a98((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)DAT_080257f0,
                            (int)((ulonglong)DAT_080257f0 >> 0x20));
      uVar25 = FUN_08028a98(local_58,uStack_54,(int)DAT_080257f8,
                            (int)((ulonglong)DAT_080257f8 >> 0x20));
      uVar23 = FUN_0802819c((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,
                            (int)((ulonglong)uVar23 >> 0x20));
      uVar25 = FUN_08028a98(local_58,uStack_54,(int)DAT_08025800,
                            (int)((ulonglong)DAT_08025800 >> 0x20));
      uVar24 = FUN_0802819c((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,
                            (int)((ulonglong)uVar23 >> 0x20));
      if ((in_d0 & 0x8000000000000000) != 0) {
        uVar4 = -uVar4;
        uVar24 = FUN_08027ec0((int)uVar24,(int)(uVar24 >> 0x20));
      }
      *param_1 = uVar24;
    }
    else {
      uVar23 = FUN_08026002((int)in_d0,uStack_2c);
      uVar11 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar25 = FUN_08028a98((int)uVar23,uVar11,(int)DAT_080257c0,
                            (int)((ulonglong)DAT_080257c0 >> 0x20));
      FUN_0802819c((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)DAT_080257c8,
                   (int)((ulonglong)DAT_080257c8 >> 0x20));
      uVar4 = FUN_0802880c();
      uVar25 = FUN_080289b0();
      uVar19 = (undefined4)((ulonglong)uVar25 >> 0x20);
      uVar10 = (undefined4)uVar25;
      uVar25 = FUN_08028a98(uVar10,uVar19,uVar21,uVar8);
      uVar23 = FUN_08028fa0((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,uVar11);
      uVar25 = FUN_08028a98(uVar10,uVar19,uVar22,uVar9);
      iVar14 = 1;
      iVar16 = DAT_080257d0 + 0x8025516;
      while( true ) {
        uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
        uVar9 = (undefined4)uVar23;
        uVar24 = FUN_080291f8(uVar9,uVar8,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
        *param_1 = uVar24;
        if ((iVar14 == 3) ||
           ((int)((uVar13 >> 0x14) - (((uint)(uVar24 >> 0x20) & 0x7fffffff) >> 0x14)) <=
            iVar14 * 0x21 + -0x11)) break;
        puVar18 = (undefined8 *)(iVar16 + iVar14 * 0x10);
        uVar23 = *puVar18;
        uVar25 = FUN_08028a98(uVar10,uVar19,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
        uVar21 = (undefined4)((ulonglong)uVar25 >> 0x20);
        uVar23 = FUN_080291f8(uVar9,uVar8,(int)uVar25,uVar21);
        uVar26 = FUN_080291f8(uVar9,uVar8,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
        uVar26 = FUN_080291f8((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,uVar21);
        uVar25 = puVar18[1];
        uVar25 = FUN_08028a98(uVar10,uVar19,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
        uVar25 = FUN_080291f8((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
                              (int)((ulonglong)uVar26 >> 0x20));
        iVar14 = iVar14 + 1;
      }
      if ((longlong)in_d0 < 0) {
        uVar24 = FUN_08027ec0((int)*param_1,(int)(*param_1 >> 0x20));
        *param_1 = uVar24;
        uVar4 = -uVar4;
      }
    }
  }
  else {
    uVar4 = 0;
    *param_1 = in_d0;
  }
  return uVar4;
}

