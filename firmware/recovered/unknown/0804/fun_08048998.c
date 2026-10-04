/**
 * @brief fun_08048998
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08048998, Ghidra name FUN_08048998, 4 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08048998(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  
  *unaff_r6 = in_r3;
  unaff_r6[1] = unaff_r4;
  unaff_r6[2] = in_r3;
  unaff_r6[3] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

