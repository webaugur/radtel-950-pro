/**
 * @brief fun_08047222
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08047222, Ghidra name FUN_08047222, 16 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08047222(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  
  *unaff_r6 = in_r3;
  unaff_r6[1] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

