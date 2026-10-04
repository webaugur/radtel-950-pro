/**
 * @brief fun_08039c7e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08039c7e, Ghidra name FUN_08039c7e, 36 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039c7e(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  
  *unaff_r6 = in_r3;
  unaff_r6[1] = unaff_r4;
  unaff_r6[2] = in_r3;
  unaff_r6[3] = unaff_r4;
  software_interrupt(0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

