/**
 * @brief fun_0802ede8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802ede8, Ghidra name FUN_0802ede8, 92 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0802e7c0) overlaps instruction at (ram,0x0802e7be)
    */
/* WARNING: Removing unreachable block (ram,0x0802e9fc) */
/* WARNING: Removing unreachable block (ram,0x0802e9fe) */
/* WARNING: Removing unreachable block (ram,0x0802ea00) */
/* WARNING: Removing unreachable block (ram,0x0802ea02) */
/* WARNING: Removing unreachable block (ram,0x0802ea04) */
/* WARNING: Removing unreachable block (ram,0x0802e9c6) */
/* WARNING: Removing unreachable block (ram,0x0802e9e0) */
/* WARNING: Removing unreachable block (ram,0x0802e9ea) */
/* WARNING: Removing unreachable block (ram,0x0802e9f6) */
/* WARNING: Removing unreachable block (ram,0x0802e9fa) */
/* WARNING: Removing unreachable block (ram,0x0802e844) */
/* WARNING: Removing unreachable block (ram,0x0802e848) */
/* WARNING: Removing unreachable block (ram,0x0802e84c) */
/* WARNING: Removing unreachable block (ram,0x0802e84e) */
/* WARNING: Removing unreachable block (ram,0x07a1e422) */

uint FUN_0802ede8(uint param_1,undefined4 param_2,undefined4 *param_3,uint *param_4)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  int *piVar9;
  int *extraout_r2_02;
  undefined1 *extraout_r3;
  uint *extraout_r3_00;
  uint *extraout_r3_01;
  uint uVar10;
  uint extraout_r3_02;
  undefined1 *unaff_r4;
  uint uVar11;
  uint *puVar12;
  uint *unaff_r5;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *unaff_r6;
  int *piVar16;
  int *unaff_r7;
  uint *puVar17;
  undefined4 extraout_r12;
  undefined4 in_r12;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined4 unaff_pc;
  char cVar20;
  char in_NG;
  char cVar21;
  undefined1 in_ZR;
  char cVar22;
  undefined1 in_CY;
  char cVar23;
  char in_OV;
  undefined4 *puVar24;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 in_d20;
  undefined8 uVar25;
  int iStack_16c;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  int *piStack_70;
  uint uStack_6c;
  undefined4 *puStack_68;
  uint uStack_64;
  int *piStack_60;
  uint uStack_5c;
  undefined4 *puStack_58;
  
  uVar25 = CONCAT44(param_2,param_1);
  puVar17 = &uStack_5c;
  uStack_5c = param_1;
  puStack_58 = param_3;
  if (in_NG == in_OV) {
    uVar19 = 0x802ed65;
    uVar25 = func_0x087e2ecc();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12;
  }
  else {
    uVar19 = coprocessor_movefromRt(5,6,7,in_cr4,in_cr5);
    if (!(bool)in_ZR && in_NG == in_OV) {
      if (in_NG == in_OV) {
        func_0x081f9990();
        return uStack_5c;
      }
      software_interrupt(0xf9);
      uVar5 = *param_4;
      uStack_78 = param_4[2];
      uStack_74 = param_4[3];
      piVar16 = (int *)param_4[4];
      piVar9 = param_3 + 0xad;
      *param_3 = &uStack_7c;
      param_3[1] = unaff_pc;
      uStack_7c = uVar5;
      piStack_70 = piVar16;
      uStack_6c = uVar5;
      puStack_68 = param_3;
      uStack_64 = uStack_78;
      piStack_60 = piVar16;
LAB_0802f528:
      iVar7 = *piVar16;
      uVar10 = piVar16[1];
      puVar17 = (uint *)piVar16[4];
      coprocessor_loadlong(0,in_cr13,puVar17);
      do {
        uVar25 = CONCAT44(iVar7,uVar5);
        uVar11 = *puVar17;
        software_hlt(0x3d);
        software_hlt(0x3b);
        piVar16 = piVar9;
        if (in_NG != in_OV) {
          uVar25 = func_0x08603d38(uVar5,iVar7);
          piVar16 = extraout_r2_02;
          uVar10 = extraout_r3_02;
        }
        uVar5 = (uint)uVar25;
        if (in_NG == in_OV) {
          iVar7 = func_0x07be9010();
          return iVar7;
        }
        if ((in_NG == '\0') && (uVar5 == 0)) {
          software_hlt(0x39);
          software_hlt(0x23);
          software_hlt(0x24);
          software_hlt(0x22);
          software_hlt(0x27);
          software_hlt(0x21);
        }
        else {
          coprocessor_function2(0xb,0xd,7,in_cr10,in_cr14,in_cr5);
          if (in_NG == in_OV) goto code_r0x0802f520;
        }
        if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar3 = (ushort)((uVar11 & 0xff) << 8);
        iVar7 = (int)(short)((ushort)(uVar11 >> 8) & 0xff);
        uVar4 = (ushort)(iVar7 << 8);
        iVar13 = (int)(short)(uVar3 >> 8);
        puVar17 = (uint *)(int)(short)((ushort)(iVar7 << 8) | uVar3 >> 8);
        iVar7 = (int)(short)((ushort)(iVar13 << 8) | uVar4 >> 8);
        piVar9 = (int *)(int)(short)((ushort)(iVar13 << 8) | uVar4 >> 8);
        uVar5 = (uint)(short)((ushort)(iVar13 << 8) | uVar4 >> 8);
        if (in_NG == in_OV) {
          bVar2 = (uVar10 & 0x20000000) == 0;
          iVar7 = uVar10 << 3;
          if (&stack0x00000000 == (undefined1 *)0xfffffd88) {
            return uStack_7c;
          }
          if (&stack0x00000000 != (undefined1 *)0xfffffd88) {
            if (iVar7 == 0 || iVar7 < 0 != (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            return iStack_16c;
          }
          if (bVar2 || iVar7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (bVar2) {
            func_0x082e786c(uVar5,0xffffffe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          coprocessor_movefromRt(4,6,7,in_cr8,in_cr4);
          if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          coprocessor_storelong(1,in_cr12,0xffffffcc);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xea,0x802f5de);
          (*pcVar1)();
        }
      } while( true );
    }
  }
  puVar12 = (uint *)((ulonglong)uVar25 >> 0x20);
  iVar7 = (int)uVar25;
  VectorRoundShiftRight(in_d20,0xc);
  uVar5 = coprocessor_movefromRt(1,5,5,in_cr4,in_cr4);
  cVar23 = (uVar5 >> 0x1c & 1) != 0;
  cVar22 = (uVar5 >> 0x1d & 1) != 0;
  cVar21 = (uVar5 >> 0x1e & 1) != 0;
  cVar20 = (int)uVar5 < 0;
  coprocessor_moveto(0xe,6,7,in_r12,in_cr11,in_cr3);
  *unaff_r7 = (int)puVar12;
  unaff_r7[1] = (int)param_3;
  unaff_r7[2] = (int)param_4;
  unaff_r7[3] = (int)unaff_r4;
  unaff_r7[4] = (int)unaff_r6;
  unaff_r7[5] = (int)unaff_r7;
  if ((bool)cVar20) {
    if (!(bool)cVar23) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = FUN_0802f55a();
    return iVar7;
  }
  if ((iVar7 == 0) || (unaff_r7 != (int *)0x0)) {
    if (unaff_r4 == (undefined1 *)0x0) goto LAB_0802e8e0;
    if (param_4 == (uint *)0x0) goto LAB_0802e8e2;
    if (((puVar12 == (uint *)0x0) || (iVar7 == 0)) || (unaff_r7 == (int *)0x0)) goto LAB_0802e8e8;
    if (param_3 == (undefined4 *)0x0) goto LAB_0802e8ea;
    if ((puVar12 != (uint *)0x0) && (unaff_r6 != (uint *)0x0)) {
      if (unaff_r5 == (uint *)0x0) {
        if (!(bool)cVar23) goto LAB_0802e8d2;
      }
      else if (unaff_r6 != (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0802e8f2;
    }
    if (!(bool)cVar21) {
LAB_0802e8d2:
      coprocessor_load(10,in_cr14,puVar12 + 0xb1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    puVar17 = (uint *)&stack0xffffffb4;
    if (unaff_r4 != (undefined1 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_0802e8e0:
    puVar12 = puVar17 + 0xec;
LAB_0802e8e2:
    unaff_r5 = puVar17 + 0xec;
    unaff_r7 = (int *)0x802ecc4;
LAB_0802e8e8:
    unaff_r6 = puVar17 + 0xec;
LAB_0802e8ea:
    func_0x08d1dcd0(iVar7,puVar12);
  }
  uVar19 = 0x802e8f3;
  uVar25 = func_0x07514ed0();
  param_3 = extraout_r2_00;
  param_4 = extraout_r3_00;
LAB_0802e8f2:
  iVar7 = (int)((ulonglong)uVar25 >> 0x20);
  uVar5 = (uint)uVar25;
  if (((uVar5 == 0) || (uVar5 != 0)) && (unaff_r7 != (int *)0x0)) {
    if (unaff_r6 != (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)cVar22 || (bool)cVar21) {
      func_0x0870acb8();
      func_0x07b0a0c4();
      if (!(bool)cVar21 && cVar20 == cVar23) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar19 = 0x802e8d1;
      uVar25 = func_0x089ff042();
      puVar15 = (undefined8 *)0x0;
      puVar8 = extraout_r2;
      puVar6 = extraout_r3;
code_r0x0802e86e:
      if (cVar20 == '\0') {
        *puVar8 = (int)uVar25;
        puVar8[1] = puVar6;
        puVar8[2] = unaff_r4;
        puVar8[3] = puVar15;
        puVar8[4] = (undefined1 *)((int)puVar17 + 0x3b8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_0802e854:
      if ((bool)cVar22 == false) goto LAB_0802e7ba;
LAB_0802e856:
      if (cVar23 != '\0') goto LAB_0802e7bc;
      if ((bool)cVar21 || cVar20 != '\0') goto LAB_0802e7be;
      puVar14 = puVar15;
      puVar18 = (undefined1 *)puVar17;
      if ((bool)cVar21 == false) {
        unaff_r4 = (undefined1 *)0x802ea88;
        goto LAB_0802e7c2;
      }
      if (cVar20 != '\0') goto LAB_0802e7c2;
      if (((bool)cVar22 && !(bool)cVar21) && ((int)uVar25 == 0)) goto LAB_0802e81a;
      if (puVar15 == (undefined8 *)0x0) goto LAB_0802e818;
LAB_0802e7ec:
      iVar7 = (int)uVar25;
      if (iVar7 == 0) goto LAB_0802e81c;
      if (unaff_r4 == (undefined1 *)0x0) {
LAB_0802e81e:
        if ((int)((ulonglong)uVar25 >> 0x20) == 0) {
LAB_0802e852:
          if ((bool)cVar21 != false) {
LAB_0802e7ba:
            while ((bool)cVar22 && !(bool)cVar21) {
LAB_0802e7bc:
              puVar8 = (undefined4 *)&DAT_0802ea84;
LAB_0802e7be:
              iVar7 = (int)uVar25 + 0x2c4;
              uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),iVar7);
              coprocessor_load(4,in_cr10,iVar7);
              puVar14 = puVar15;
              puVar18 = (undefined1 *)puVar17;
LAB_0802e7c2:
              puVar6 = puVar18 + 0x2c4;
              if (cVar20 == cVar23) break;
              if (!(bool)cVar22 || (bool)cVar21) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              *(undefined4 *)(puVar18 + -4) = 0x802e8d1;
              *(int **)(puVar18 + -8) = unaff_r7;
              *(undefined8 **)(puVar18 + -0xc) = puVar14;
              *(uint **)(puVar18 + -0x10) = unaff_r5;
              *(undefined1 **)(puVar18 + -0x14) = unaff_r4;
              *(undefined4 **)(puVar18 + -0x18) = puVar8;
              puVar17 = (uint *)(puVar18 + -0x1c);
              *puVar17 = (int)((ulonglong)uVar25 >> 0x20);
              software_interrupt(0xe6);
              if ((bool)cVar22 == false) {
                while( true ) {
                  iVar13 = (int)((ulonglong)uVar25 >> 0x20);
                  iVar7 = (int)uVar25;
                  puVar15 = puVar14;
                  if (!(bool)cVar22 || (bool)cVar21) break;
                  if (iVar7 != 0) {
                    *(int *)iVar7 = iVar7;
                    *(undefined4 **)(iVar7 + 4) = puVar8;
                    *(undefined1 **)(iVar7 + 8) = unaff_r4;
                    *(uint **)(iVar7 + 0xc) = unaff_r5;
                    *(undefined8 **)(iVar7 + 0x10) = puVar14;
                    *(int **)(iVar7 + 0x14) = unaff_r7;
                    *(int *)iVar13 = iVar13;
                    *(uint **)(iVar13 + 4) = unaff_r5;
                    *(undefined8 **)(iVar13 + 8) = puVar14;
                    *(uint **)(iVar13 + 0xc) = puVar17 + 0xdc;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  if (cVar20 == cVar23) goto LAB_0802e7ec;
                  uVar25 = *puVar14;
                  puVar6 = *(undefined1 **)(puVar14 + 1);
                  unaff_r4 = *(undefined1 **)((int)puVar14 + 0xc);
                  puVar15 = *(undefined8 **)(puVar14 + 2);
                  unaff_r7 = *(int **)((int)puVar14 + 0x14);
LAB_0802e818:
                  puVar14 = puVar15;
                  if ((bool)cVar21 == false) goto LAB_0802e81a;
                }
              }
              else {
                uVar25 = CONCAT44(&DAT_0802ea78,(int)uVar25);
                unaff_r4 = puVar18 + 0x2a8;
                coprocessor_movefromRt(10,5,5,in_cr0,in_cr1);
                puVar15 = (undefined8 *)&DAT_0802ea78;
              }
            }
            goto LAB_0802e756;
          }
          goto LAB_0802e854;
        }
        goto LAB_0802e820;
      }
      if (puVar8 != (undefined4 *)0x0) {
        if (unaff_r5 == (uint *)0x0) goto LAB_0802e822;
        if ((puVar8 != (undefined4 *)0x0) && (unaff_r7 != (int *)0x0)) {
          if ((int)((ulonglong)uVar25 >> 0x20) == 0) {
            uVar10 = 0;
            goto LAB_0802e996;
          }
          func_0x08609fac();
          if (!(bool)cVar21 && cVar20 == cVar23) {
            func_0x0851c592();
            software_interrupt(0xcd);
            software_bkpt(0xb1);
            return *(int *)((int)puVar17 + 0x10);
          }
LAB_0802e756:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xde,0x802e756);
          (*pcVar1)();
        }
        goto LAB_0802e826;
      }
LAB_0802e820:
      if (puVar8 != (undefined4 *)0x0) goto LAB_0802e822;
      goto LAB_0802e854;
    }
  }
  else {
    uVar5 = uVar5 + 0x310;
    puVar17 = *(uint **)uVar5;
  }
  if (cVar20 == cVar23) {
    *unaff_r6 = uVar5;
    unaff_r6[1] = (uint)param_3;
    unaff_r6[2] = (uint)param_4;
    unaff_r6[3] = (uint)unaff_r4;
    unaff_r6[4] = (uint)unaff_r5;
    unaff_r6[5] = (uint)unaff_r6;
    unaff_r6[6] = (uint)unaff_r7;
    if (iVar7 == 0) {
      puVar17 = (uint *)((int)puVar17 + -200);
      if (param_3 == (undefined4 *)0x0) goto LAB_0802e9d2;
      *unaff_r7 = 0;
      unaff_r7[1] = (uint)unaff_r6 & 0xffff;
      unaff_r7[2] = (int)unaff_r6;
      unaff_r7[3] = (int)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((unaff_r4 != (undefined1 *)0x0) && (param_3 != (undefined4 *)0x0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfe,0x802e932);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xe9,0x802e972);
    (*pcVar1)();
  }
LAB_0802e93a:
  uVar25 = CONCAT44(iVar7,(undefined1 *)((int)puVar17 + 0x2c8));
LAB_0802e940:
  puVar12 = (uint *)&DAT_0802ec0c;
  do {
    iVar7 = (int)uVar25;
    *(int **)((int)puVar17 + -4) = unaff_r7;
    *(uint **)((int)puVar17 + -8) = puVar12;
    *(undefined1 **)((int)puVar17 + -0xc) = unaff_r4;
    *(undefined4 *)((int)puVar17 + -0x10) = (int)((ulonglong)uVar25 >> 0x20);
    puVar6 = (undefined1 *)((int)puVar17 + 0x2b8);
    puVar17 = (undefined4 *)((int)puVar17 + -0x10);
    while( true ) {
      puVar8 = puVar17 + 0xb2;
      puVar17[-1] = uVar19;
      puVar17[-2] = (uint)unaff_r7;
      puVar17[-3] = (uint)puVar12;
      puVar24 = puVar17 + -4;
      *puVar24 = unaff_r4;
      puVar17 = puVar17 + -5;
      *puVar17 = (uint)puVar6;
      coprocessor_movefromRt(1,5,5,in_cr0,in_cr1);
      if (puVar24 != (undefined4 *)0xfffffd3c) {
        halt_baddata();
      }
      uVar10 = 0xec20;
      unaff_r7 = (int *)((uint)puVar8 & 0xffff);
LAB_0802e996:
      uVar5 = (uint)unaff_r7 & 0xffff;
      if (iVar7 != 0) {
        *(uint *)uVar5 = uVar5;
        *(int **)(uVar5 + 4) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = uVar10 & 0xff;
      cVar22 = '\0';
      cVar21 = uVar10 == 0;
      iVar7 = *unaff_r7;
      unaff_r4 = (undefined1 *)unaff_r7[1];
      unaff_r5 = (uint *)unaff_r7[2];
      unaff_r7 = (int *)unaff_r7[3];
LAB_0802e9d2:
      if (cVar21 != '\0') goto LAB_0802e93a;
      uVar19 = 0x802e9d9;
      uVar25 = func_0x074e173c(uVar5);
      iVar7 = (int)uVar25;
      if (cVar22 != '\0') goto LAB_0802e940;
      puVar12 = unaff_r5;
      if (cVar21 == '\0') break;
      puVar6 = (undefined1 *)*unaff_r5;
      unaff_r4 = (undefined1 *)unaff_r5[1];
      puVar12 = (uint *)unaff_r5[2];
      unaff_r7 = (int *)unaff_r5[3];
    }
  } while( true );
code_r0x0802f520:
  coprocessor_loadlong(0,in_cr12,(int)((ulonglong)uVar25 >> 0x20));
  piVar9 = (int *)*piVar16;
  piVar16 = (int *)piVar16[4];
  goto LAB_0802f528;
LAB_0802e81a:
  if ((int)uVar25 == 0) goto LAB_0802e81e;
LAB_0802e81c:
  if (unaff_r4 != (undefined1 *)0x0) goto LAB_0802e81e;
  uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),*(undefined4 *)puVar15);
  unaff_r4 = *(undefined1 **)((int)puVar15 + 4);
  unaff_r5 = *(uint **)(puVar15 + 1);
  unaff_r7 = *(int **)((int)puVar15 + 0xc);
  puVar15 = puVar15 + 2;
  goto LAB_0802e852;
LAB_0802e822:
  if ((int)uVar25 != 0) {
    puVar17 = (uint *)((int)puVar17 + -0x114);
LAB_0802e826:
    if (puVar15 != (undefined8 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r5 = (uint)puVar8;
    unaff_r5[1] = (uint)puVar6;
    unaff_r5[2] = (uint)unaff_r4;
    unaff_r5[3] = 0;
    unaff_r5[4] = (uint)unaff_r7;
    unaff_r5 = unaff_r5 + 5;
    puVar8 = *(undefined4 **)((int)puVar17 + 0x378);
    puVar6 = *(undefined1 **)((int)puVar17 + 0x37c);
    unaff_r4 = *(undefined1 **)((int)puVar17 + 0x380);
    puVar15 = *(undefined8 **)((int)puVar17 + 900);
    unaff_r7 = *(int **)((int)puVar17 + 0x388);
    uVar25 = CONCAT44((undefined1 *)((int)puVar17 + 0x38c),*(undefined4 *)((int)puVar17 + 0x374));
    puVar17 = (uint *)((int)puVar17 + -0x160);
    goto code_r0x0802e86e;
  }
  goto LAB_0802e856;
}

