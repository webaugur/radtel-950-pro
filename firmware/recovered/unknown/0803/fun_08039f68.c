/**
 * @brief fun_08039f68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08039f68, Ghidra name FUN_08039f68, 10 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039f68(undefined2 param_1,undefined4 param_2,int param_3)

{
  char in_OV;
  
  if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_3 + 0x20) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

