/**
 * @brief fun_0802e894
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802e894, Ghidra name FUN_0802e894, 234 bytes.
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
/* WARNING: Removing unreachable block (ram,0x0802e844) */
/* WARNING: Removing unreachable block (ram,0x0802e848) */
/* WARNING: Removing unreachable block (ram,0x0802e84c) */
/* WARNING: Removing unreachable block (ram,0x0802e84e) */
/* WARNING: Removing unreachable block (ram,0x0802e9e0) */
/* WARNING: Removing unreachable block (ram,0x0802e9ea) */
/* WARNING: Removing unreachable block (ram,0x0802e9f6) */
/* WARNING: Removing unreachable block (ram,0x0802e9fa) */

undefined4
FUN_0802e894(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined1 *extraout_r2_01;
  undefined1 *extraout_r3;
  undefined1 *extraout_r3_00;
  undefined1 *extraout_r3_01;
  undefined1 *puVar8;
  undefined1 *unaff_r4;
  undefined1 **unaff_r5;
  undefined1 **ppuVar9;
  undefined1 **unaff_r6;
  uint uVar10;
  int *unaff_r7;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  undefined4 *puVar13;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined8 uVar14;
  undefined1 *puStack_14;
  
  uVar14 = CONCAT44(param_2,param_1);
  ppuVar12 = &puStack_14;
  puStack_14 = param_4;
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_0802e858;
  *param_3 = param_1;
  param_3[1] = param_2;
  param_3[2] = param_3;
  param_3[3] = unaff_r4;
  param_3[4] = unaff_r5;
  param_3[5] = unaff_r6;
  param_3[6] = unaff_r7;
  unaff_lr = 0x802e89f;
  uVar14 = func_0x07f14668();
  ppuVar9 = (undefined1 **)((ulonglong)uVar14 >> 0x20);
  iVar6 = (int)uVar14;
  software_bkpt(0xe6);
  if ((iVar6 == 0) || (unaff_r7 != (int *)0x0)) {
    if (unaff_r4 == (undefined1 *)0x0) goto LAB_0802e8e0;
    if (extraout_r3 == (undefined1 *)0x0) goto LAB_0802e8e2;
    if (((ppuVar9 == (undefined1 **)0x0) || (iVar6 == 0)) || (unaff_r7 == (int *)0x0))
    goto LAB_0802e8e8;
    if (extraout_r2 == (undefined1 *)0x0) goto LAB_0802e8ea;
    if ((ppuVar9 != (undefined1 **)0x0) && (unaff_r6 != (undefined1 **)0x0)) {
      puVar7 = extraout_r2;
      puVar8 = extraout_r3;
      if (unaff_r5 == (undefined1 **)0x0) {
        if (in_NG == in_OV) goto LAB_0802e8d2;
      }
      else if (unaff_r6 != (undefined1 **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0802e8f2;
    }
    if (in_ZR == '\0') {
LAB_0802e8d2:
      coprocessor_load(10,in_cr14,ppuVar9 + 0xb1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    ppuVar12 = (undefined1 **)&stack0xfffffffc;
    if (unaff_r6 != (undefined1 **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_0802e8e0:
    ppuVar9 = ppuVar12 + 0xec;
LAB_0802e8e2:
    unaff_r5 = ppuVar12 + 0xec;
    unaff_r7 = (int *)0x802ecc4;
LAB_0802e8e8:
    unaff_r6 = ppuVar12 + 0xec;
LAB_0802e8ea:
    func_0x08d1dcd0(iVar6,ppuVar9);
  }
  unaff_lr = 0x802e8f3;
  uVar14 = func_0x07514ed0();
  puVar7 = extraout_r2_01;
  puVar8 = extraout_r3_01;
LAB_0802e8f2:
  iVar6 = (int)((ulonglong)uVar14 >> 0x20);
  puVar3 = (undefined1 *)uVar14;
  if (((puVar3 == (undefined1 *)0x0) || (puVar3 != (undefined1 *)0x0)) && (unaff_r7 != (int *)0x0))
  {
    if (unaff_r6 != (undefined1 **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0870acb8();
      func_0x07b0a0c4();
      if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_lr = 0x802e8d1;
      uVar14 = func_0x089ff042();
      ppuVar9 = (undefined1 **)0x0;
      param_3 = extraout_r2_00;
      param_4 = extraout_r3_00;
code_r0x0802e86e:
      if (in_NG == '\0') {
        *param_3 = (int)uVar14;
        param_3[1] = param_4;
        param_3[2] = unaff_r4;
        param_3[3] = ppuVar9;
        param_3[4] = (undefined1 *)((int)ppuVar12 + 0x3b8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_0802e854:
      if (in_CY == '\0') goto LAB_0802e7ba;
LAB_0802e856:
      unaff_r6 = ppuVar9;
      if (in_OV != '\0') goto LAB_0802e7bc;
LAB_0802e858:
      ppuVar9 = unaff_r6;
      if ((bool)in_ZR || in_NG != in_OV) goto LAB_0802e7be;
      ppuVar11 = ppuVar12;
      if ((bool)in_ZR == false) {
        unaff_r4 = (undefined1 *)0x802ea88;
        goto LAB_0802e7c2;
      }
      if (in_NG != '\0') goto LAB_0802e7c2;
      if (!(bool)in_CY || (bool)in_ZR) {
        if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if ((int)uVar14 == 0) goto LAB_0802e81a;
      if (unaff_r6 == (undefined1 **)0x0) goto LAB_0802e818;
LAB_0802e7ec:
      iVar6 = (int)uVar14;
      if (iVar6 == 0) goto LAB_0802e81c;
      if (unaff_r4 == (undefined1 *)0x0) {
LAB_0802e81e:
        if ((int)((ulonglong)uVar14 >> 0x20) == 0) {
LAB_0802e852:
          if (in_ZR != '\0') {
LAB_0802e7ba:
            while ((bool)in_CY && !(bool)in_ZR) {
LAB_0802e7bc:
              param_3 = (undefined4 *)&DAT_0802ea84;
LAB_0802e7be:
              iVar6 = (int)uVar14 + 0x2c4;
              uVar14 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),iVar6);
              coprocessor_load(4,in_cr10,iVar6);
              unaff_r6 = ppuVar9;
              ppuVar11 = ppuVar12;
LAB_0802e7c2:
              param_4 = (undefined1 *)((int)ppuVar11 + 0x2c4);
              if (in_NG == in_OV) break;
              if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              *(undefined4 *)((int)ppuVar11 + -4) = unaff_lr;
              *(int **)((int)ppuVar11 + -8) = unaff_r7;
              *(undefined1 ***)((int)ppuVar11 + -0xc) = unaff_r6;
              *(undefined1 ***)((int)ppuVar11 + -0x10) = unaff_r5;
              *(undefined1 **)((int)ppuVar11 + -0x14) = unaff_r4;
              *(undefined4 **)((int)ppuVar11 + -0x18) = param_3;
              ppuVar12 = (undefined1 **)((int)ppuVar11 + -0x1c);
              *ppuVar12 = (undefined1 *)(int)((ulonglong)uVar14 >> 0x20);
              software_interrupt(0xe6);
              ppuVar9 = unaff_r6;
              if ((bool)in_CY == false) {
                while( true ) {
                  iVar4 = (int)((ulonglong)uVar14 >> 0x20);
                  iVar6 = (int)uVar14;
                  if (!(bool)in_CY || (bool)in_ZR) break;
                  if (iVar6 != 0) {
                    *(int *)iVar6 = iVar6;
                    *(undefined4 **)(iVar6 + 4) = param_3;
                    *(undefined1 **)(iVar6 + 8) = unaff_r4;
                    *(undefined1 ***)(iVar6 + 0xc) = unaff_r5;
                    *(undefined1 ***)(iVar6 + 0x10) = ppuVar9;
                    *(int **)(iVar6 + 0x14) = unaff_r7;
                    *(int *)iVar4 = iVar4;
                    *(undefined1 ***)(iVar4 + 4) = unaff_r5;
                    *(undefined1 ***)(iVar4 + 8) = ppuVar9;
                    *(undefined1 ***)(iVar4 + 0xc) = ppuVar12 + 0xdc;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  if (in_NG == in_OV) goto LAB_0802e7ec;
                  uVar14 = *(undefined8 *)ppuVar9;
                  param_4 = ppuVar9[2];
                  unaff_r4 = ppuVar9[3];
                  unaff_r6 = (undefined1 **)ppuVar9[4];
                  unaff_r7 = (int *)ppuVar9[5];
LAB_0802e818:
                  ppuVar9 = unaff_r6;
                  if (in_ZR == '\0') goto LAB_0802e81a;
                }
              }
              else {
                ppuVar9 = (undefined1 **)&DAT_0802ea78;
                uVar14 = CONCAT44(&DAT_0802ea78,(int)uVar14);
                unaff_r4 = (undefined1 *)((int)ppuVar11 + 0x2a8);
                coprocessor_movefromRt(10,5,5,in_cr0,in_cr1);
              }
            }
            goto LAB_0802e756;
          }
          goto LAB_0802e854;
        }
        goto LAB_0802e820;
      }
      if (param_3 != (undefined4 *)0x0) {
        if (unaff_r5 == (undefined1 **)0x0) goto LAB_0802e822;
        if ((param_3 != (undefined4 *)0x0) && (unaff_r7 != (int *)0x0)) {
          if ((int)((ulonglong)uVar14 >> 0x20) == 0) {
            uVar5 = 0;
            goto LAB_0802e996;
          }
          func_0x08609fac();
          if (!(bool)in_ZR && in_NG == in_OV) {
            func_0x0851c592();
            software_interrupt(0xcd);
            software_bkpt(0xb1);
            return *(undefined4 *)((int)ppuVar12 + 0x10);
          }
LAB_0802e756:
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xde,0x802e756);
          (*pcVar2)();
        }
        goto LAB_0802e826;
      }
LAB_0802e820:
      if (param_3 != (undefined4 *)0x0) goto LAB_0802e822;
      goto LAB_0802e854;
    }
  }
  else {
    puVar3 = puVar3 + 0x310;
    ppuVar12 = *(undefined1 ***)puVar3;
  }
  if (in_NG == in_OV) {
    *unaff_r6 = puVar3;
    unaff_r6[1] = puVar7;
    unaff_r6[2] = puVar8;
    unaff_r6[3] = unaff_r4;
    unaff_r6[4] = (undefined1 *)unaff_r5;
    unaff_r6[5] = (undefined1 *)unaff_r6;
    unaff_r6[6] = (undefined1 *)unaff_r7;
    if (iVar6 == 0) {
      ppuVar12 = (undefined1 **)((int)ppuVar12 + -200);
      if (puVar7 == (undefined1 *)0x0) goto LAB_0802e9d2;
      *unaff_r7 = 0;
      unaff_r7[1] = (uint)unaff_r6 & 0xffff;
      unaff_r7[2] = (int)unaff_r6;
      unaff_r7[3] = (int)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((unaff_r4 != (undefined1 *)0x0) && (puVar7 != (undefined1 *)0x0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfe,0x802e932);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xe9,0x802e972);
    (*pcVar2)();
  }
LAB_0802e93a:
  uVar14 = CONCAT44(iVar6,(undefined1 *)((int)ppuVar12 + 0x2c8));
LAB_0802e940:
  ppuVar9 = (undefined1 **)&DAT_0802ec0c;
  do {
    iVar6 = (int)uVar14;
    *(int **)((int)ppuVar12 + -4) = unaff_r7;
    *(undefined1 ***)((int)ppuVar12 + -8) = ppuVar9;
    *(undefined1 **)((int)ppuVar12 + -0xc) = unaff_r4;
    *(undefined4 *)((int)ppuVar12 + -0x10) = (int)((ulonglong)uVar14 >> 0x20);
    puVar7 = (undefined1 *)((int)ppuVar12 + 0x2b8);
    ppuVar12 = (undefined1 **)((int)ppuVar12 + -0x10);
    while( true ) {
      puVar1 = ppuVar12 + 0xb2;
      ppuVar12[-1] = (undefined1 *)unaff_lr;
      ppuVar12[-2] = (undefined1 *)unaff_r7;
      ppuVar12[-3] = (undefined1 *)ppuVar9;
      puVar13 = ppuVar12 + -4;
      *puVar13 = unaff_r4;
      ppuVar12 = ppuVar12 + -5;
      *ppuVar12 = puVar7;
      coprocessor_movefromRt(1,5,5,in_cr0,in_cr1);
      if (puVar13 != (undefined4 *)0xfffffd3c) {
        halt_baddata();
      }
      uVar5 = 0xec20;
      unaff_r7 = (int *)((uint)puVar1 & 0xffff);
LAB_0802e996:
      uVar10 = (uint)unaff_r7 & 0xffff;
      if (iVar6 != 0) {
        *(uint *)uVar10 = uVar10;
        *(int **)(uVar10 + 4) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar3 = (undefined1 *)(uVar5 & 0xff);
      in_CY = '\0';
      in_ZR = uVar5 == 0;
      iVar6 = *unaff_r7;
      unaff_r4 = (undefined1 *)unaff_r7[1];
      unaff_r5 = (undefined1 **)unaff_r7[2];
      unaff_r7 = (int *)unaff_r7[3];
LAB_0802e9d2:
      if (in_ZR != '\0') goto LAB_0802e93a;
      unaff_lr = 0x802e9d9;
      uVar14 = func_0x074e173c(puVar3);
      iVar6 = (int)uVar14;
      if (in_CY != '\0') goto LAB_0802e940;
      ppuVar9 = unaff_r5;
      if (in_ZR == '\0') break;
      puVar7 = *unaff_r5;
      unaff_r4 = unaff_r5[1];
      ppuVar9 = (undefined1 **)unaff_r5[2];
      unaff_r7 = (int *)unaff_r5[3];
    }
  } while( true );
LAB_0802e81a:
  if ((int)uVar14 == 0) goto LAB_0802e81e;
LAB_0802e81c:
  if (unaff_r4 != (undefined1 *)0x0) goto LAB_0802e81e;
  uVar14 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),*ppuVar9);
  unaff_r4 = ppuVar9[1];
  unaff_r5 = (undefined1 **)ppuVar9[2];
  unaff_r7 = (int *)ppuVar9[3];
  ppuVar9 = ppuVar9 + 4;
  goto LAB_0802e852;
LAB_0802e822:
  if ((int)uVar14 != 0) {
    ppuVar12 = (undefined1 **)((int)ppuVar12 + -0x114);
LAB_0802e826:
    if (ppuVar9 != (undefined1 **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r5 = (undefined1 *)param_3;
    unaff_r5[1] = param_4;
    unaff_r5[2] = unaff_r4;
    unaff_r5[3] = (undefined1 *)0x0;
    unaff_r5[4] = (undefined1 *)unaff_r7;
    unaff_r5 = unaff_r5 + 5;
    param_3 = *(undefined4 **)((int)ppuVar12 + 0x378);
    param_4 = *(undefined1 **)((int)ppuVar12 + 0x37c);
    unaff_r4 = *(undefined1 **)((int)ppuVar12 + 0x380);
    ppuVar9 = *(undefined1 ***)((int)ppuVar12 + 900);
    unaff_r7 = *(int **)((int)ppuVar12 + 0x388);
    uVar14 = CONCAT44((undefined1 *)((int)ppuVar12 + 0x38c),*(undefined4 *)((int)ppuVar12 + 0x374));
    ppuVar12 = (undefined1 **)((int)ppuVar12 + -0x160);
    goto code_r0x0802e86e;
  }
  goto LAB_0802e856;
}

