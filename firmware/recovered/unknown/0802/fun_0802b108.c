/**
 * @brief fun_0802b108
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802b108, Ghidra name FUN_0802b108, 70 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802aee4) */
/* WARNING: Removing unreachable block (ram,0x0802af14) */
/* WARNING: Removing unreachable block (ram,0x0802b460) */
/* WARNING: Removing unreachable block (ram,0x0802aee6) */
/* WARNING: Removing unreachable block (ram,0x0802b09a) */
/* WARNING: Removing unreachable block (ram,0x0802b0a8) */
/* WARNING: Removing unreachable block (ram,0x080ba7c4) */
/* WARNING: Removing unreachable block (ram,0x0802b0ac) */
/* WARNING: Removing unreachable block (ram,0x0802b03c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000004 : 0x0802b342 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0802b108(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,uint *param_8)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_r2;
  int *extraout_r2_00;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint unaff_r4;
  uint uVar11;
  int unaff_r5;
  int *piVar12;
  undefined4 *puVar13;
  int unaff_r6;
  int iVar14;
  uint unaff_r7;
  int unaff_r10;
  int *piVar15;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined1 in_q3 [16];
  undefined8 uVar16;
  uint in_stack_00000058;
  uint in_stack_00000088;
  undefined4 in_stack_00000174;
  int in_stack_000003b4;
  
  uVar16 = CONCAT44(param_2,param_1);
  while( true ) {
    uVar7 = _DAT_00000086;
    puVar5 = (undefined4 *)uVar16;
    bVar3 = *(byte *)(param_4 + unaff_r6);
    if (unaff_r6 != 0) break;
    *(undefined1 *)((int)((ulonglong)uVar16 >> 0x20) + 0xd0) = 0;
    bVar2 = *(byte *)(unaff_r5 + 0x17);
    unaff_r4 = (uint)_DAT_000000e2;
    if (unaff_r5 == 0) {
      FUN_0802ad90();
      return;
    }
    unaff_r7 = ~(uint)bVar2 & 0x802b3b8;
    if (!SBORROW4(unaff_r5,0x4d)) {
      *(undefined4 *)(uint)bVar3 = ((undefined4 *)(uint)bVar3)[8];
      uVar10 = DAT_0802b7d4;
      coprocessor_movefromRt(10,0,1,in_cr6,in_cr5);
      *param_8 = (uint)bVar2;
      param_8[1] = param_6;
      param_8[2] = uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar16 = func_0x089cb108();
    unaff_r6 = extraout_r2 + -4;
    param_4 = unaff_r4 + 4;
    unaff_r5 = *(int *)((int)uVar16 + 0x18);
    if ((int)((ulonglong)uVar16 >> 0x20) == 0x16) {
      software_interrupt(0x6c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (unaff_r4 < 0xa0) {
    *(char *)(in_stack_00000058 + unaff_r5) = (char)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar10 = unaff_r7 * 0x800;
  software_bkpt(0x94);
  *(short *)(unaff_r5 + 0xe) = (short)uVar10;
  puVar13 = (undefined4 *)(in_stack_00000058 + uVar10);
  if (SCARRY4(in_stack_00000058,uVar10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar13 = uVar7;
  puVar13[1] = in_stack_00000058;
  puVar13[2] = uVar10;
  if (!CARRY4(in_stack_00000058,uVar10)) {
    uVar7 = *puVar5;
    puVar13 = (undefined4 *)puVar5[1];
    iVar9 = *(int *)puVar5[2];
    piVar12 = (int *)((int *)puVar5[2])[2];
    *puVar13 = 0xb0;
    puVar13[1] = uVar7;
    puVar13[2] = iVar9;
    if (iVar9 != -0xb0) {
      uVar16 = VectorShiftRightNarrow(in_q3,10,2,1);
      SatQ(uVar16,2,1);
      *(short *)(in_stack_000003b4 + 0x3e) = (short)piVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *piVar12 = unaff_r5;
    puVar5 = (undefined4 *)0x0;
    if ((undefined4 *)(uint)*(byte *)(unaff_r5 + 0xd) != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(uint)*(byte *)(unaff_r5 + 0xd);
    }
    *puVar5 = 0xb0;
    puVar5[1] = 0;
    puVar5[2] = puVar5;
    coprocessor_load(0xe,in_cr5,CONCAT31(uRam000000a4,DAT_000000a3) + -0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar12 = (int *)&stack0x00000278;
  in_stack_00000088 = *(int *)(_DAT_000000c8 + 4) - 0x16;
  software_interrupt(0x47);
  piVar15 = (int *)&param_8;
  if ((in_stack_00000088 >> 0x16 & 1) != 0 && piVar12 != (int *)0x0) {
    (&stack0x000002e4)[(int)piVar12] = (char)param_6;
    halt_baddata();
  }
  uVar16 = func_0x08741c94();
  iVar6 = (int)((ulonglong)uVar16 >> 0x20);
  iVar9 = (int)uVar16;
  uVar10 = (uint)extraout_r2_00 >> 0x18;
  piVar8 = extraout_r2_00;
  while( true ) {
    uVar11 = piVar15[0x16];
    if (piVar12 == (int *)0x0) break;
    *(short *)((int)piVar12 + uVar11) = (short)uVar11;
    *piVar12 = iVar6;
    piVar12[1] = (int)piVar8;
    piVar12[2] = uVar11;
    piVar12 = (int *)((uint)((int)uVar11 >> 0x1d) >> 0xc);
    uVar10 = uVar10 * 0x800;
    *(int **)(iVar6 + uVar10) = piVar8;
    iVar14 = piVar8[8];
    *(char *)(iVar9 + uVar11) = (char)uVar16;
    piVar8 = piVar15 + 0x16;
    piVar15[-1] = uVar10;
    piVar15[-2] = iVar14;
    piVar15[-3] = (int)piVar12;
    piVar15[-4] = uVar11;
    piVar15[-5] = (int)(piVar15 + 0x5c);
    piVar15 = piVar15 + -6;
    *piVar15 = iVar6;
    *(short *)(piVar12 + 7) = (short)(iVar6 >> 0xe);
    param_6 = (int)piVar8 >> 0x18;
    if (param_6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if ((int)(iVar9 + param_6) < 0 == SCARRY4(iVar9,param_6)) {
    uVar4 = *(ushort *)((int)piVar8 + uVar11);
    *(char *)(uVar10 + 2) = (char)uVar16;
    piVar8[0x12] = (uint)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar8[0xc] = param_6;
  piVar15[0xc4] = uVar11;
  piVar8[0x18] = param_6;
  *(int *)((uVar11 >> 0x14) + 0x4c) = iVar6;
  piVar12 = _MasterStackPointer;
  if (_NMI != 0) {
    uVar4 = *(ushort *)(unaff_r10 + 0x2ce);
    coprocessor_function2(5,0xf,5,in_cr10,in_cr7,in_cr11);
    *(uint *)(iVar6 + 0x1f) = (uint)uVar4;
    coprocessor_moveto(0,6,0,(uint)*(byte *)(uVar4 + 0x1a),in_cr3,in_cr6);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x17,0x802b3be);
    (*pcVar1)();
  }
  *_MasterStackPointer = iVar6;
  piVar12[1] = (int)piVar8;
  piVar12[2] = uVar11;
  iRam000000a0 = iVar6;
  *(short *)(piVar8 + 3) = (short)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

