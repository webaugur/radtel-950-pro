/**
 * @brief fun_08038d0e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08038d0e, Ghidra name FUN_08038d0e, 12 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038d0e(void)

{
  undefined8 in_d18;
  undefined8 in_d25;
  
  func_0x07fd7d12();
  VectorShiftRightInsert(in_d25,in_d18,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

