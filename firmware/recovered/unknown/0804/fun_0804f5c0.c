/**
 * @brief fun_0804f5c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0804f5c0, Ghidra name FUN_0804f5c0, 22 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0804f5c0(undefined4 param_1,int param_2,int param_3)

{
  *(short *)(param_2 + param_3) = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

