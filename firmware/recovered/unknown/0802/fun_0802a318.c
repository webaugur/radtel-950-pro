/**
 * @brief fun_0802a318
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802a318, Ghidra name FUN_0802a318, 84 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802aee4) */
/* WARNING: Removing unreachable block (ram,0x0802af14) */
/* WARNING: Removing unreachable block (ram,0x0802b09a) */
/* WARNING: Removing unreachable block (ram,0x0802b0a8) */
/* WARNING: Removing unreachable block (ram,0x0802b0ac) */
/* WARNING: Removing unreachable block (ram,0x080ba7c4) */
/* WARNING: Removing unreachable block (ram,0x0802b460) */
/* WARNING: Removing unreachable block (ram,0x0802aee6) */
/* WARNING: Removing unreachable block (ram,0x0802b03c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0802a318(int param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *extraout_r2;
  int *extraout_r2_00;
  int *piVar5;
  undefined4 extraout_r3;
  undefined4 *puVar6;
  uint unaff_r4;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint unaff_r6;
  undefined4 *puVar10;
  int iVar11;
  int unaff_r7;
  uint uVar12;
  int unaff_r10;
  int *piVar13;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined1 in_q3 [16];
  undefined8 uVar14;
  uint in_stack_00000024;
  int in_stack_00000118;
  int in_stack_00000380;
  
  *(short *)(unaff_r4 + 0xc) = (short)param_4;
  puVar10 = (undefined4 *)(unaff_r6 + 0x16);
  if (0xffffffe9 < unaff_r6 && puVar10 != (undefined4 *)0x0) {
    *(int *)param_2 = param_2;
    *(int *)(param_2 + 4) = param_3;
    *(uint *)(param_2 + 8) = unaff_r4;
    iVar7 = func_0x08f66038(param_1,param_4,unaff_r4,unaff_r7);
    uVar3 = *extraout_r2;
    puVar6 = (undefined4 *)extraout_r2[2];
    *(char *)(iVar7 + 0x12) = (char)unaff_r7;
    *puVar6 = extraout_r3;
    puVar6[1] = puVar10;
    *puVar10 = uVar3;
    *(undefined4 *)(unaff_r6 + 0x1a) = 0xbe;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_r7 + 0x14) = param_3;
  if (-0x17 < (int)unaff_r6) {
    *(int *)(param_2 + 0x6c) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((undefined4 *)(param_1 + -0xab) == (undefined4 *)0x0) {
    func_0x078fc68e(0,0x16);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = *(undefined4 *)(param_3 + 0x70);
  if (unaff_r4 < 0xa0) {
    *(char *)(in_stack_00000024 + in_stack_00000118) = (char)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_bkpt(0x94);
  *(undefined2 *)(in_stack_00000118 + 0xe) = 0xf000;
  if (SCARRY4(in_stack_00000024,0x1f000)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(in_stack_00000024 + 0x1f000) = uVar3;
  *(uint *)(in_stack_00000024 + 0x1f004) = in_stack_00000024;
  *(undefined4 *)(in_stack_00000024 + 0x1f008) = 0x1f000;
  if (in_stack_00000024 < 0xfffe1000) {
    uVar3 = *(undefined4 *)(param_1 + -0xab);
    puVar10 = *(undefined4 **)(param_1 + -0xa7);
    iVar7 = **(int **)(param_1 + -0xa3);
    piVar9 = (int *)(*(int **)(param_1 + -0xa3))[2];
    *puVar10 = 0xb0;
    puVar10[1] = uVar3;
    puVar10[2] = iVar7;
    if (iVar7 == -0xb0) {
      *piVar9 = in_stack_00000118;
      puVar10 = (undefined4 *)0x0;
      if ((undefined4 *)(uint)*(byte *)(in_stack_00000118 + 0xd) != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)(uint)*(byte *)(in_stack_00000118 + 0xd);
      }
      *puVar10 = 0xb0;
      puVar10[1] = 0;
      puVar10[2] = puVar10;
      coprocessor_load(0xe,in_cr5,CONCAT31(uRam000000a4,DAT_000000a3) + -0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar14 = VectorShiftRightNarrow(in_q3,10,2,1);
    SatQ(uVar14,2,1);
    *(short *)(in_stack_00000380 + 0x3e) = (short)piVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar9 = (int *)&stack0x00000244;
  software_interrupt(0x47);
  piVar13 = (int *)&stack0xffffffd8;
  if ((*(int *)(_DAT_000000c8 + 4) - 0x16U >> 0x16 & 1) != 0 && piVar9 != (int *)0x0) {
    (&stack0x000002b0)[(int)piVar9] = (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar14 = func_0x08741c94();
  iVar4 = (int)((ulonglong)uVar14 >> 0x20);
  iVar7 = (int)uVar14;
  uVar12 = (uint)extraout_r2_00 >> 0x18;
  piVar5 = extraout_r2_00;
  while( true ) {
    uVar8 = piVar13[0x16];
    if (piVar9 == (int *)0x0) break;
    *(short *)((int)piVar9 + uVar8) = (short)uVar8;
    *piVar9 = iVar4;
    piVar9[1] = (int)piVar5;
    piVar9[2] = uVar8;
    piVar9 = (int *)((uint)((int)uVar8 >> 0x1d) >> 0xc);
    uVar12 = uVar12 * 0x800;
    *(int **)(iVar4 + uVar12) = piVar5;
    iVar11 = piVar5[8];
    *(char *)(iVar7 + uVar8) = (char)uVar14;
    piVar5 = piVar13 + 0x16;
    piVar13[-1] = uVar12;
    piVar13[-2] = iVar11;
    piVar13[-3] = (int)piVar9;
    piVar13[-4] = uVar8;
    piVar13[-5] = (int)(piVar13 + 0x5c);
    piVar13 = piVar13 + -6;
    *piVar13 = iVar4;
    *(short *)(piVar9 + 7) = (short)(iVar4 >> 0xe);
    param_2 = (int)piVar5 >> 0x18;
    if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (iVar7 + param_2 < 0 == SCARRY4(iVar7,param_2)) {
    uVar2 = *(ushort *)((int)piVar5 + uVar8);
    *(char *)(uVar12 + 2) = (char)uVar14;
    piVar5[0x12] = (uint)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar5[0xc] = param_2;
  piVar13[0xc4] = uVar8;
  piVar5[0x18] = param_2;
  *(int *)((uVar8 >> 0x14) + 0x4c) = iVar4;
  piVar9 = _MasterStackPointer;
  if (_NMI == 0) {
    *_MasterStackPointer = iVar4;
    piVar9[1] = (int)piVar5;
    piVar9[2] = uVar8;
    iRam000000a0 = iVar4;
    *(short *)(piVar5 + 3) = (short)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(ushort *)(unaff_r10 + 0x2ce);
  coprocessor_function2(5,0xf,5,in_cr10,in_cr7,in_cr11);
  *(uint *)(iVar4 + 0x1f) = (uint)uVar2;
  coprocessor_moveto(0,6,0,(uint)*(byte *)(uVar2 + 0x1a),in_cr3,in_cr6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x17,0x802b3be);
  (*pcVar1)();
}

