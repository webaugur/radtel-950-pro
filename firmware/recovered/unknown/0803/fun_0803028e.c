/**
 * @brief fun_0803028e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803028e, Ghidra name FUN_0803028e, 6 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803028e(void)

{
  undefined4 unaff_r11;
  undefined4 in_cr11;
  
  coprocessor_storelong(0xb,in_cr11,unaff_r11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

