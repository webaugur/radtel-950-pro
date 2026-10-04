/**
 * @brief fun_08038050
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08038050, Ghidra name FUN_08038050, 16 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038050(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  
  *(short *)(unaff_r5 + param_3) = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

