/**
 * @brief fun_0802d70a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802d70a, Ghidra name FUN_0802d70a, 86 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802d70a(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  char in_CY;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_0000004c;
  
  if (in_CY != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0802dd76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(unaff_r5 << 0xf,param_2,param_3,param_4 + 0x29,param_3);
    return;
  }
  bVar1 = *(byte *)(unaff_r6 + 0xd);
  if (unaff_r6 == 0) {
    UNRECOVERED_JUMPTABLE[param_2] = SUB41(param_4,0);
    UNRECOVERED_JUMPTABLE_00 = (code *)&stack0x00000048;
    in_stack_0000004c = (byte)UNRECOVERED_JUMPTABLE[0xe] - 0xfe;
    *(uint *)(bVar1 + 0x70) = (uint)*(byte *)((byte)DWORD_0802d9d8 + 5);
                    /* WARNING: Could not recover jumptable at 0x0802d986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  software_interrupt(0x72);
  software_bkpt(0x44);
  *(char *)((*(int *)(*(int *)((uint)bVar1 + unaff_r4) + 0x50) >> 0x10) + 0x1c) = (char)DAT_0802d210
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

