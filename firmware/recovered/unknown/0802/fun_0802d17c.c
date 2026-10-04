/**
 * @brief fun_0802d17c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802d17c, Ghidra name FUN_0802d17c, 8 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802d17c(undefined4 param_1,int param_2)

{
  undefined4 in_cr4;
  
  coprocessor_loadlong(7,in_cr4,param_2 + 0x338);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

