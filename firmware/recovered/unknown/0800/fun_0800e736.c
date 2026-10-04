/**
 * @brief fun_0800e736
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e736, Ghidra name FUN_0800e736, 8 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0800e736(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  char in_CY;
  char in_OV;
  
  if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r7 = param_1;
  unaff_r7[1] = unaff_r4;
  unaff_r7[2] = unaff_r6;
  unaff_r7[3] = unaff_r7;
  if (in_CY != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

