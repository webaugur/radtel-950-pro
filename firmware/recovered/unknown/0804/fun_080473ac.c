/**
 * @brief fun_080473ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080473ac, Ghidra name FUN_080473ac, 32 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080473ac(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined4 unaff_pc;
  char in_OV;
  
  *unaff_r6 = in_r3;
  unaff_r6[1] = unaff_r4;
  if (in_OV == '\0') {
    VectorTableLookup(unaff_pc,unaff_pc,4);
    unaff_r6[2] = in_r3;
    unaff_r6[3] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

