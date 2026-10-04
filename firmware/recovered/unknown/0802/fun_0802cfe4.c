/**
 * @brief fun_0802cfe4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802cfe4, Ghidra name FUN_0802cfe4, 32 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802cfe4(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,undefined1 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int extraout_r2;
  undefined2 extraout_r3;
  int unaff_r5;
  int unaff_r7;
  int unaff_r11;
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 extraout_d6;
  undefined8 uVar3;
  undefined1 auStack_27a [634];
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_movefromRt(6,1,0,in_cr5,in_cr6);
  }
  if (in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)auStack_27a;
    param_5 = in_r12;
  }
  if (in_ZR) {
    unaff_r5 = unaff_r11 + -0x580000;
  }
  if (!in_ZR && in_NG == in_OV) {
    unaff_r5 = *(int *)(param_2 + 0xc);
    register0x00000054 = *(BADSPACEBASE **)(param_2 + 0x1c);
  }
  if (in_CY && !in_ZR) {
    unaff_r7 = coprocessor_movefromRt(10,0,0,in_cr13,in_cr6);
  }
  coprocessor_function(0xd,5,5,in_cr12,in_cr2,in_cr3);
  *(int *)(unaff_r7 + 0x60) = unaff_r5;
  _MasterStackPointer = param_4 >> 0x1b;
  bVar1 = (bool)hasExclusiveAccess((uint *)((int)register0x00000054 + 0x2b8));
  if (bVar1) {
    *(uint *)((int)register0x00000054 + 0x2b8) = _MasterStackPointer;
  }
  _Reset = param_4;
  *(undefined4 *)(!bVar1 + 0x28) = 0x16;
  uVar3 = func_0x08f23d3e(8,&DAT_0802cb6c);
  uVar2 = uRam0802ca4c;
  *(undefined2 *)((int)((ulonglong)uVar3 >> 0x20) + 0x1a) = extraout_r3;
  *(short *)(*(int *)(extraout_r2 + 8) + 10) = (short)uVar2;
  VectorShiftRight(extraout_d6,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

