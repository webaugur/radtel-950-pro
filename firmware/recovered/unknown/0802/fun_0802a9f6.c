/**
 * @brief fun_0802a9f6
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802a9f6, Ghidra name FUN_0802a9f6, 4 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802b460) */
/* WARNING: Removing unreachable block (ram,0x0802b156) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a9f6(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *extraout_r2;
  int *piVar6;
  int *unaff_r4;
  uint uVar7;
  undefined2 unaff_r6;
  int iVar8;
  int unaff_r7;
  uint uVar9;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 uVar10;
  undefined4 in_stack_00000044;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_load(0xe,in_cr5,CONCAT31(uRam000000a4,DAT_000000a3) + -0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != '\0') {
    software_bkpt(0xbc);
    _DAT_000000ba = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_2 + 0x32) = (short)param_2;
  *(undefined2 *)((int)&stack0x00000030 * 2 + param_2) = unaff_r6;
  software_interrupt(0x47);
  *(char *)(unaff_r4 + 1) = (char)unaff_r7;
  uVar10 = func_0x08741c94();
  iVar5 = (int)((ulonglong)uVar10 >> 0x20);
  iVar4 = (int)uVar10;
  uVar9 = (uint)extraout_r2 >> 0x18;
  piVar6 = extraout_r2;
  while( true ) {
    uVar7 = *(uint *)((int)register0x00000054 + 0x58);
    if (unaff_r4 == (int *)0x0) break;
    *(short *)((int)unaff_r4 + uVar7) = (short)uVar7;
    *unaff_r4 = iVar5;
    unaff_r4[1] = (int)piVar6;
    unaff_r4[2] = uVar7;
    unaff_r4 = (int *)((uint)((int)uVar7 >> 0x1d) >> 0xc);
    uVar9 = uVar9 * 0x800;
    *(int **)(iVar5 + uVar9) = piVar6;
    iVar8 = piVar6[8];
    *(char *)(iVar4 + uVar7) = (char)uVar10;
    piVar6 = (int *)((int)register0x00000054 + 0x58);
    *(uint *)((int)register0x00000054 + -4) = uVar9;
    *(int *)((int)register0x00000054 + -8) = iVar8;
    *(int **)((int)register0x00000054 + -0xc) = unaff_r4;
    *(uint *)((int)register0x00000054 + -0x10) = uVar7;
    *(int **)((int)register0x00000054 + -0x14) = (int *)((int)register0x00000054 + 0x170);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
    *(int *)register0x00000054 = iVar5;
    *(short *)(unaff_r4 + 7) = (short)(iVar5 >> 0xe);
    unaff_r7 = (int)piVar6 >> 0x18;
    if (unaff_r7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (iVar4 + unaff_r7 < 0 == SCARRY4(iVar4,unaff_r7)) {
    uVar2 = *(ushort *)((int)piVar6 + uVar7);
    *(char *)(uVar9 + 2) = (char)uVar10;
    piVar6[0x12] = (uint)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar6[0xc] = unaff_r7;
  *(uint *)((int)register0x00000054 + 0x310) = uVar7;
  piVar6[0x18] = unaff_r7;
  *(int *)((uVar7 >> 0x14) + 0x4c) = iVar5;
  piVar3 = _MasterStackPointer;
  if (_NMI != 0) {
    uVar2 = *(ushort *)(unaff_r10 + 0x2ce);
    coprocessor_function2(5,0xf,5,in_cr10,in_cr7,in_cr11);
    *(uint *)(iVar5 + 0x1f) = (uint)uVar2;
    coprocessor_moveto(0,6,0,(uint)*(byte *)(uVar2 + 0x1a),in_cr3,in_cr6);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x17,0x802b3be);
    (*pcVar1)();
  }
  *_MasterStackPointer = iVar5;
  piVar3[1] = (int)piVar6;
  piVar3[2] = uVar7;
  iRam000000a0 = iVar5;
  *(short *)(piVar6 + 3) = (short)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

