/**
 * @brief fun_08030052
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08030052, Ghidra name FUN_08030052, 6 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030052(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_cr14;
  
  coprocessor_loadlong(5,in_cr14,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

