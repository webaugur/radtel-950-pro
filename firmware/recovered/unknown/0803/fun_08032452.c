/**
 * @brief fun_08032452
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08032452, Ghidra name FUN_08032452, 8 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032452(undefined2 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x20) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

