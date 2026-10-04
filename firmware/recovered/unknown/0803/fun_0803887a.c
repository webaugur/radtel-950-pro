/**
 * @brief fun_0803887a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803887a, Ghidra name FUN_0803887a, 16 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803887a(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  
  *(short *)(unaff_r5 + param_3) = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

