/**
 * @brief fun_080487c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080487c8, Ghidra name FUN_080487c8, 26 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080487c8(void)

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

