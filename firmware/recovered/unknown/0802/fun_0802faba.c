/**
 * @brief fun_0802faba
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802faba, Ghidra name FUN_0802faba, 36 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802faba(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *unaff_r5;
  int *piVar10;
  undefined4 uVar11;
  int *unaff_r6;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  char in_OV;
  char cVar15;
  int *piVar16;
  undefined4 in_cr13;
  
  do {
    cVar15 = (int)param_1 << 3 == 0;
    puVar1 = (undefined4 *)*unaff_r5;
    iVar2 = unaff_r5[1];
    iVar5 = unaff_r5[2];
    iVar7 = unaff_r5[3];
    piVar10 = (int *)unaff_r5[4];
    iVar12 = unaff_r5[5];
    *piVar10 = (int)puVar1;
    piVar10[1] = iVar2;
    piVar10[2] = iVar5;
    piVar10[3] = iVar7;
    piVar10[4] = (int)piVar10;
    piVar10[5] = iVar12;
    *unaff_r6 = (int)puVar1;
    unaff_r6[1] = iVar2;
    unaff_r6[2] = iVar5;
    unaff_r6[3] = iVar7;
    unaff_r6[4] = (int)piVar10;
    unaff_r6[5] = iVar12;
    piVar16 = unaff_r6 + 6;
    uVar3 = puVar1[1];
    puVar6 = (undefined4 *)puVar1[2];
    uVar8 = puVar1[3];
    uVar11 = puVar1[4];
    uVar13 = puVar1[5];
    *puVar6 = *puVar1;
    puVar6[1] = uVar3;
    puVar6[2] = puVar6;
    puVar6[3] = uVar8;
    puVar6[4] = uVar11;
    puVar6[5] = uVar13;
    software_bkpt(0xbe);
    piVar10 = (int *)param_1[2];
    param_1[6] = *param_1;
    param_1[7] = param_1[1];
    param_1[8] = piVar10;
    param_1[9] = param_1[3];
    param_1[10] = param_1[4];
    param_1[0xb] = param_1[5];
    iVar2 = *piVar10;
    piVar4 = (int *)piVar10[1];
    iVar5 = piVar10[2];
    piVar9 = (int *)piVar10[3];
    iVar7 = piVar10[4];
    piVar14 = (int *)piVar10[5];
    piVar10 = piVar4;
    if ((int)param_1 << 3 < 0 != (bool)in_OV) {
      *piVar4 = iVar2;
      piVar4[1] = (int)piVar4;
      piVar4[2] = iVar5;
      piVar4[3] = (int)piVar9;
      piVar4[4] = iVar7;
      piVar4[5] = (int)piVar14;
      *piVar14 = iVar2;
      piVar14[1] = (int)piVar4;
      piVar14[2] = iVar5;
      piVar14[3] = (int)piVar9;
      piVar14[4] = iVar7;
      piVar14[5] = (int)piVar14;
      iVar2 = *piVar4;
      piVar10 = (int *)piVar4[1];
      iVar5 = piVar4[2];
      piVar9 = (int *)piVar4[3];
      iVar7 = piVar4[4];
      piVar14 = (int *)piVar4[5];
    }
    *(int *)iVar2 = iVar2;
    *(int **)(iVar2 + 4) = piVar10;
    *(int *)(iVar2 + 8) = iVar5;
    *(int **)(iVar2 + 0xc) = piVar9;
    *(int *)(iVar2 + 0x10) = iVar7;
    *(int **)(iVar2 + 0x14) = piVar14;
    *piVar9 = iVar2;
    piVar9[1] = (int)piVar10;
    piVar9[2] = iVar5;
    piVar9[3] = (int)piVar9;
    piVar9[4] = iVar7;
    piVar9[5] = (int)piVar14;
    piVar10 = unaff_r6 + 7;
    piVar4 = unaff_r6 + 8;
    iVar2 = unaff_r6[10];
    unaff_r6 = unaff_r6 + 0xc;
    param_1 = (undefined4 *)func_0x08e246c2(param_1 + 0xc,*piVar16,*piVar10,*piVar4);
    unaff_r5 = (int *)(iVar2 + 0x364);
    coprocessor_loadlong(6,in_cr13,unaff_r5);
  } while (cVar15 == '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

