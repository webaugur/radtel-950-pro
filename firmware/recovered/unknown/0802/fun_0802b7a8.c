/**
 * @brief fun_0802b7a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802b7a8, Ghidra name FUN_0802b7a8, 94 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b7a8(int param_1,int param_2,uint param_3,int *param_4)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  int unaff_r4;
  uint unaff_r6;
  int unaff_r7;
  uint uVar4;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  int unaff_lr;
  undefined1 unaff_pc;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined8 in_d6;
  undefined8 unaff_d10;
  int in_stack_000000ec;
  int *in_stack_00000264;
  
  do {
    uVar4 = -unaff_r4 + 0x1ac000;
    if (unaff_r7 < 0x17) {
      param_1 = param_1 + param_3;
      bVar1 = *(byte *)(param_2 + 2);
      sVar2 = *(short *)(param_1 + unaff_r6);
      *(short *)(uVar4 + param_3) = (short)param_1;
      uVar3 = (undefined1)sVar2;
      *(undefined1 *)(param_3 + 0x14) = uVar3;
      coprocessor_loadlong(1,in_cr9,unaff_r11);
      *(undefined1 *)(*(char *)(param_3 + param_2) + 4) = uVar3;
      *(undefined1 *)(unaff_lr + 0x516) = unaff_pc;
      *(short *)(sVar2 + 0x14) = (short)param_4;
      DAT_0802bfa4 = *(undefined4 *)(in_stack_000000ec + uVar4);
      *(int *)(bVar1 + 0x1c) = param_1;
      coprocessor_load(3,in_cr2,param_1);
      FloatCompareGE(unaff_d10,in_d6,4);
      _BYTE_ARRAY_0802bf98 = in_stack_000000ec;
      DAT_0802bf9c = param_4;
      DAT_0802bfa0 = *(undefined4 *)(in_stack_000000ec + 0x50);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r6 = param_3 >> 0x1c;
    unaff_r7 = -unaff_r4 + 0x1abf82;
    coprocessor_moveto(2,2,2,unaff_r9,in_cr4,in_cr12);
    *param_4 = param_2;
    param_4[1] = param_3;
    param_4[2] = unaff_r4;
    param_4 = in_stack_00000264;
  } while (0x7d < uVar4 && unaff_r7 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

