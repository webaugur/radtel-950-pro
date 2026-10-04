/**
 * @brief fun_0802fae0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802fae0, Ghidra name FUN_0802fae0, 8 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802fae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_r4;
  int *piVar7;
  int unaff_r5;
  int *unaff_r6;
  int iVar8;
  int *piVar9;
  undefined4 unaff_r7;
  char in_NG;
  char in_ZR;
  char in_OV;
  bool bVar10;
  undefined4 in_cr13;
  
  bVar10 = false;
  if (in_NG == '\0') goto LAB_0802fac4;
  while( true ) {
    coprocessor_loadlong(6,in_cr13,(int *)(unaff_r5 + 0x364));
    if (in_ZR != '\0') break;
    bVar10 = (int)param_1 << 3 < 0;
    in_ZR = (int)param_1 << 3 == 0;
    puVar1 = *(undefined4 **)(unaff_r5 + 0x364);
    iVar2 = *(int *)(unaff_r5 + 0x368);
    iVar4 = *(int *)(unaff_r5 + 0x36c);
    iVar5 = *(int *)(unaff_r5 + 0x370);
    piVar7 = *(int **)(unaff_r5 + 0x374);
    iVar8 = *(int *)(unaff_r5 + 0x378);
    *piVar7 = (int)puVar1;
    piVar7[1] = iVar2;
    piVar7[2] = iVar4;
    piVar7[3] = iVar5;
    piVar7[4] = (int)piVar7;
    piVar7[5] = iVar8;
    *unaff_r6 = (int)puVar1;
    unaff_r6[1] = iVar2;
    unaff_r6[2] = iVar4;
    unaff_r6[3] = iVar5;
    unaff_r6[4] = (int)piVar7;
    unaff_r6[5] = iVar8;
    unaff_r6 = unaff_r6 + 6;
    param_2 = *puVar1;
    param_3 = puVar1[1];
    param_4 = (undefined4 *)puVar1[2];
    unaff_r4 = puVar1[3];
    unaff_r5 = puVar1[4];
    unaff_r7 = puVar1[5];
LAB_0802fac4:
    *param_4 = param_2;
    param_4[1] = param_3;
    param_4[2] = param_4;
    param_4[3] = unaff_r4;
    param_4[4] = unaff_r5;
    param_4[5] = unaff_r7;
    software_bkpt(0xbe);
    piVar7 = (int *)param_1[2];
    param_1[6] = *param_1;
    param_1[7] = param_1[1];
    param_1[8] = piVar7;
    param_1[9] = param_1[3];
    param_1[10] = param_1[4];
    param_1[0xb] = param_1[5];
    iVar2 = *piVar7;
    piVar3 = (int *)piVar7[1];
    iVar4 = piVar7[2];
    piVar6 = (int *)piVar7[3];
    iVar5 = piVar7[4];
    piVar9 = (int *)piVar7[5];
    piVar7 = piVar3;
    if (bVar10 != (bool)in_OV) {
      *piVar3 = iVar2;
      piVar3[1] = (int)piVar3;
      piVar3[2] = iVar4;
      piVar3[3] = (int)piVar6;
      piVar3[4] = iVar5;
      piVar3[5] = (int)piVar9;
      *piVar9 = iVar2;
      piVar9[1] = (int)piVar3;
      piVar9[2] = iVar4;
      piVar9[3] = (int)piVar6;
      piVar9[4] = iVar5;
      piVar9[5] = (int)piVar9;
      iVar2 = *piVar3;
      piVar7 = (int *)piVar3[1];
      iVar4 = piVar3[2];
      piVar6 = (int *)piVar3[3];
      iVar5 = piVar3[4];
      piVar9 = (int *)piVar3[5];
    }
    *(int *)iVar2 = iVar2;
    *(int **)(iVar2 + 4) = piVar7;
    *(int *)(iVar2 + 8) = iVar4;
    *(int **)(iVar2 + 0xc) = piVar6;
    *(int *)(iVar2 + 0x10) = iVar5;
    *(int **)(iVar2 + 0x14) = piVar9;
    *piVar6 = iVar2;
    piVar6[1] = (int)piVar7;
    piVar6[2] = iVar4;
    piVar6[3] = (int)piVar6;
    piVar6[4] = iVar5;
    piVar6[5] = (int)piVar9;
    iVar2 = *unaff_r6;
    piVar7 = unaff_r6 + 1;
    piVar3 = unaff_r6 + 2;
    unaff_r5 = unaff_r6[4];
    unaff_r6 = unaff_r6 + 6;
    param_1 = (undefined4 *)func_0x08e246c2(param_1 + 0xc,iVar2,*piVar7,*piVar3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

