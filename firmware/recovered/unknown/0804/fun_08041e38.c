/**
 * @brief fun_08041e38
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08041e38, Ghidra name FUN_08041e38, 20 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08041e38(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined8 unaff_d14;
  
  VectorShiftLeft(unaff_d14,0x1f,0x40,1);
  *unaff_r6 = in_r3;
  unaff_r6[1] = unaff_r4;
  unaff_r6[2] = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

