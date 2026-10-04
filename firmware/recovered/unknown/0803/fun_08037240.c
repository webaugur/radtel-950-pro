/**
 * @brief fun_08037240
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08037240, Ghidra name FUN_08037240, 18 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08037240(void)

{
  undefined8 unaff_d14;
  
  VectorShiftLeft(unaff_d14,0x3f,0x40,1);
  VectorShiftLeft(unaff_d14,0x3f,0x40,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

