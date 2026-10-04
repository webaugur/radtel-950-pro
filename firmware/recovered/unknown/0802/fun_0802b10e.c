/**
 * @brief fun_0802b10e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802b10e, Ghidra name FUN_0802b10e, 238 bytes.
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

void FUN_0802b10e(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  code *pcVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int *extraout_r2;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r4;
  uint uVar8;
  int unaff_r5;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int unaff_r7;
  int unaff_r10;
  int *piVar12;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined1 in_q3 [16];
  undefined8 uVar13;
  uint in_stack_00000058;
  uint uStack00000088;
  undefined4 in_stack_00000174;
  int in_stack_000003b4;
  
  uVar3 = *(undefined4 *)(param_3 + 0x70);
  if (unaff_r4 < 0xa0) {
    *(char *)(in_stack_00000058 + unaff_r5) = (char)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = unaff_r7 * 0x800;
  software_bkpt(0x94);
  *(short *)(unaff_r5 + 0xe) = (short)uVar7;
  puVar10 = (undefined4 *)(in_stack_00000058 + uVar7);
  if (SCARRY4(in_stack_00000058,uVar7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar10 = uVar3;
  puVar10[1] = in_stack_00000058;
  puVar10[2] = uVar7;
  if (!CARRY4(in_stack_00000058,uVar7)) {
    uVar3 = *param_1;
    puVar10 = (undefined4 *)param_1[1];
    iVar6 = *(int *)param_1[2];
    piVar9 = (int *)((int *)param_1[2])[2];
    *puVar10 = 0xb0;
    puVar10[1] = uVar3;
    puVar10[2] = iVar6;
    if (iVar6 == -0xb0) {
      *piVar9 = unaff_r5;
      puVar10 = (undefined4 *)0x0;
      if ((undefined4 *)(uint)*(byte *)(unaff_r5 + 0xd) != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)(uint)*(byte *)(unaff_r5 + 0xd);
      }
      *puVar10 = 0xb0;
      puVar10[1] = 0;
      puVar10[2] = puVar10;
      coprocessor_load(0xe,in_cr5,CONCAT31(uRam000000a4,DAT_000000a3) + -0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = VectorShiftRightNarrow(in_q3,10,2,1);
    SatQ(uVar13,2,1);
    *(short *)(in_stack_000003b4 + 0x3e) = (short)piVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar9 = (int *)&stack0x00000278;
  uStack00000088 = *(int *)(_DAT_000000c8 + 4) - 0x16;
  software_interrupt(0x47);
  piVar12 = (int *)&stack0x0000000c;
  if ((uStack00000088 >> 0x16 & 1) == 0 || piVar9 == (int *)0x0) {
    uVar13 = func_0x08741c94();
    iVar4 = (int)((ulonglong)uVar13 >> 0x20);
    iVar6 = (int)uVar13;
    uVar7 = (uint)extraout_r2 >> 0x18;
    piVar5 = extraout_r2;
    while( true ) {
      uVar8 = piVar12[0x16];
      if (piVar9 == (int *)0x0) break;
      *(short *)((int)piVar9 + uVar8) = (short)uVar8;
      *piVar9 = iVar4;
      piVar9[1] = (int)piVar5;
      piVar9[2] = uVar8;
      piVar9 = (int *)((uint)((int)uVar8 >> 0x1d) >> 0xc);
      uVar7 = uVar7 * 0x800;
      *(int **)(iVar4 + uVar7) = piVar5;
      iVar11 = piVar5[8];
      *(char *)(iVar6 + uVar8) = (char)uVar13;
      piVar5 = piVar12 + 0x16;
      piVar12[-1] = uVar7;
      piVar12[-2] = iVar11;
      piVar12[-3] = (int)piVar9;
      piVar12[-4] = uVar8;
      piVar12[-5] = (int)(piVar12 + 0x5c);
      piVar12 = piVar12 + -6;
      *piVar12 = iVar4;
      *(short *)(piVar9 + 7) = (short)(iVar4 >> 0xe);
      param_6 = (int)piVar5 >> 0x18;
      if (param_6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (iVar6 + param_6 < 0 == SCARRY4(iVar6,param_6)) {
      uVar2 = *(ushort *)((int)piVar5 + uVar8);
      *(char *)(uVar7 + 2) = (char)uVar13;
      piVar5[0x12] = (uint)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar5[0xc] = param_6;
    piVar12[0xc4] = uVar8;
    piVar5[0x18] = param_6;
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
  (&stack0x000002e4)[(int)piVar9] = (char)param_6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

