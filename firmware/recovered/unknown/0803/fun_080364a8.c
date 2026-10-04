/**
 * @brief fun_080364a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080364a8, Ghidra name FUN_080364a8, 12 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080364a8(int param_1)

{
  undefined8 in_d27;
  
  VectorShiftLeft(in_d27,0x3f,0x40,1);
  *(int *)(param_1 * 0x10 + 0x38) = param_1 >> 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

