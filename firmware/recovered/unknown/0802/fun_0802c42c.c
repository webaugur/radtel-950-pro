/**
 * @brief fun_0802c42c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802c42c, Ghidra name FUN_0802c42c, 16 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802c42c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  
  *unaff_r6 = param_1;
  unaff_r6[1] = param_3;
  unaff_r6[2] = param_4;
  unaff_r6[3] = unaff_r4;
  unaff_r6[4] = unaff_r5;
  unaff_r6[5] = unaff_r6;
  *(short *)(unaff_r5 + 0x18) = (short)param_3;
  *(short *)(param_3 * 0x100) = (short)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

