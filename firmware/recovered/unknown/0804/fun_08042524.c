/**
 * @brief fun_08042524
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08042524, Ghidra name FUN_08042524, 16 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08042524(void)

{
  undefined8 in_d0;
  undefined8 unaff_d8;
  undefined8 in_d24;
  
  VectorShiftRightInsert(in_d24,in_d0,1);
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

