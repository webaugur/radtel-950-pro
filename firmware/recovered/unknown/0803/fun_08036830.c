/**
 * @brief fun_08036830
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08036830, Ghidra name FUN_08036830, 10 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036830(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(short *)(param_3 + 0x24) = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

