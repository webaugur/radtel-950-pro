/**
 * @brief fun_0802f88c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802f88c, Ghidra name FUN_0802f88c, 84 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0802f88c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_r5;
  undefined4 *puVar9;
  int unaff_r6;
  undefined4 *puVar10;
  int iVar11;
  int unaff_r7;
  undefined4 uVar12;
  int iVar13;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr15;
  
  while( true ) {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r7;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x14) = param_1;
    iVar4 = *(int *)(param_3 + 4);
    uVar7 = *(undefined4 *)(param_3 + 8);
    puVar9 = *(undefined4 **)(param_3 + 0xc);
    puVar10 = *(undefined4 **)(param_3 + 0x10);
    uVar12 = *(undefined4 *)(param_3 + 0x14);
    *puVar9 = param_4;
    puVar9[1] = uVar7;
    puVar9[2] = puVar10;
    puVar9[3] = uVar12;
    piVar2 = (int *)*puVar10;
    param_4 = puVar10[2];
    uVar7 = puVar10[3];
    uVar12 = puVar10[4];
    iVar13 = puVar10[5];
    if (in_NG != '\0') {
      coprocessor_storelong(0xd,in_cr15,iVar13);
      *(int *)iVar4 = iVar4;
      *(undefined4 **)(iVar4 + 4) = &DAT_0802fbf8;
      *(undefined4 *)(iVar4 + 8) = uVar7;
      *(undefined4 *)(iVar4 + 0xc) = uVar12;
      *(int *)(iVar4 + 0x10) = iVar13 + 0x3c0;
      return CONCAT44(*(int *)((int)register0x00000054 + 0xa4),
                      *(int *)((int)register0x00000054 + 0x8c));
    }
    unaff_r5 = piVar2[2];
    unaff_r6 = piVar2[3];
    unaff_r7 = piVar2[4];
    if (in_CY && !in_ZR) break;
    param_1 = *piVar2 + 0x3b4;
    param_3 = *(int *)(*piVar2 + 4);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
  }
  if (!in_ZR && in_OV == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xbc,0x802f86c);
    (*pcVar1)();
  }
  iVar3 = *(int *)((int)register0x00000054 + -0xc);
  iVar5 = *(int *)((int)register0x00000054 + -8);
  iVar6 = *(int *)((int)register0x00000054 + -4);
  iVar8 = *(int *)register0x00000054;
  iVar4 = *(int *)((int)register0x00000054 + 0x28);
  iVar13 = *(int *)((int)register0x00000054 + 0x2c);
  piVar2 = *(int **)((int)register0x00000054 + 0x30);
  iVar11 = *(int *)((int)register0x00000054 + 0x34);
  *piVar2 = iVar4;
  piVar2[1] = iVar3;
  piVar2[2] = (int)piVar2;
  piVar2[3] = iVar11;
  *piVar2 = iVar13;
  piVar2[1] = iVar5;
  piVar2[2] = iVar6;
  piVar2[3] = (int)piVar2;
  piVar2[4] = iVar11;
  *piVar2 = iVar3;
  piVar2[1] = iVar8;
  piVar2[2] = (int)piVar2;
  piVar2[3] = iVar11;
  piVar2 = *(int **)((int)register0x00000054 + 0x44);
  iVar13 = *(int *)((int)register0x00000054 + 0x48);
  *piVar2 = iVar4;
  piVar2[1] = iVar5;
  piVar2[2] = (int)piVar2;
  piVar2[3] = iVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

