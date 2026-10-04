/**
 * @brief fun_08045776
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08045776, Ghidra name FUN_08045776, 38 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08045776(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined8 unaff_d8;
  
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
  *unaff_r6 = in_r3;
  unaff_r6[1] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

