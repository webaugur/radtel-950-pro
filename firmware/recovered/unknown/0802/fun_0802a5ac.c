/**
 * @brief fun_0802a5ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802a5ac, Ghidra name FUN_0802a5ac, 10 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802a5ac(int param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  
  *(undefined4 *)(param_3 + 0x20) = param_2;
  *(char *)(param_1 + 4) = (char)param_3;
  *(undefined4 *)(param_3 + 0x70) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

