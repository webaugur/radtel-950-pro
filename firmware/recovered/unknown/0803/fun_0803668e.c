/**
 * @brief fun_0803668e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803668e, Ghidra name FUN_0803668e, 10 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803668e(undefined2 param_1,undefined4 param_2,int param_3)

{
  *(undefined2 *)(param_3 + 0x20) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

