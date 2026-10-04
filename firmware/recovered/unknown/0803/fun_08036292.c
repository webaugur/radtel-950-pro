/**
 * @brief fun_08036292
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08036292, Ghidra name FUN_08036292, 10 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036292(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  int unaff_r5;
  undefined2 unaff_r6;
  
  *(short *)(param_3 + 0x24) = (short)param_3;
  *(undefined2 *)(unaff_r5 + unaff_r4) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

