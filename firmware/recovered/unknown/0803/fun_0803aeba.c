/**
 * @brief fun_0803aeba
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803aeba, Ghidra name FUN_0803aeba, 8 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803aeba(void)

{
  int unaff_r5;
  undefined1 unaff_r6;
  
  *(undefined1 *)(unaff_r5 + 0xe) = unaff_r6;
  *(undefined1 *)(unaff_r5 + 0xe) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

