/**
 * @brief fun_080006bc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080006bc, Ghidra name FUN_080006bc, 8 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080006bc(int param_1)

{
  undefined1 unaff_r7;
  
  *(undefined1 *)(param_1 + 0x13) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

