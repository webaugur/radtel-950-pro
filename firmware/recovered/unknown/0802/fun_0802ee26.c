/**
 * @brief fun_0802ee26
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802ee26, Ghidra name FUN_0802ee26, 32 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ee26(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *unaff_r6;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 in_d29;
  
  VectorShiftRight(in_d29,0x29);
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  uVar9 = param_1[3];
  uVar11 = param_1[4];
  *unaff_r6 = *param_1;
  unaff_r6[1] = uVar4;
  unaff_r6[2] = uVar7;
  unaff_r6[3] = uVar9;
  unaff_r6[4] = uVar11;
  uVar4 = param_4[1];
  uVar7 = param_4[2];
  uVar9 = param_4[3];
  puVar12 = (undefined4 *)param_4[4];
  *puVar12 = *param_4;
  puVar12[1] = uVar4;
  puVar12[2] = uVar7;
  puVar12[3] = uVar9;
  puVar12[4] = puVar12;
  iVar3 = unaff_r6[6];
  piVar5 = *(int **)(iVar3 + 4);
  piVar13 = (int *)(iVar3 + 0x14);
  iVar2 = *piVar5;
  iVar6 = piVar5[1];
  iVar8 = piVar5[2];
  piVar10 = (int *)piVar5[3];
  puVar12 = (undefined4 *)piVar5[4];
  *piVar10 = iVar2;
  piVar10[1] = iVar6;
  piVar10[2] = iVar8;
  piVar10[3] = (int)piVar10;
  piVar10[4] = (int)puVar12;
  uVar1 = (ushort)((uint)puVar12 >> 8);
  iVar8 = (int)(short)((ushort)(((uint)puVar12 & 0xff) << 8) | uVar1 & 0xff);
  iVar6 = (int)(short)((ushort)(((uint)puVar12 & 0xff) << 8) | uVar1 & 0xff);
  if (piVar13 != (int *)0x0) {
    *piVar13 = iVar2;
    *(int **)(iVar3 + 0x18) = piVar13;
    *(int *)(iVar3 + 0x1c) = iVar6;
    *(int *)(iVar3 + 0x20) = iVar8;
    *(int **)(iVar3 + 0x24) = piVar10;
    *(undefined4 **)(iVar3 + 0x28) = puVar12;
    *(int *)iVar2 = iVar2;
    *(int **)(iVar2 + 4) = piVar13;
    *(int *)(iVar2 + 8) = iVar6;
    *(int *)(iVar2 + 0xc) = iVar8;
    *(int **)(iVar2 + 0x10) = piVar10;
    *(undefined4 **)(iVar2 + 0x14) = puVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_hlt(0x26);
  software_hlt(0x37);
  if (puVar12[5] == 0) {
    func_0x088d29ca(*puVar12,0,puVar12[1],0,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

