/**
 * @brief fun_08030de8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08030de8, Ghidra name FUN_08030de8, 18 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030de8(void)

{
  int unaff_r10;
  undefined4 in_cr11;
  
  coprocessor_storelong(6,in_cr11,unaff_r10 + 0x32c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

