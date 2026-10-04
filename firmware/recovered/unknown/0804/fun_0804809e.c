/**
 * @brief fun_0804809e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0804809e, Ghidra name FUN_0804809e, 66 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0804809e(undefined4 param_1)

{
  undefined1 unaff_lr;
  
  *(undefined4 *)param_1 = param_1;
  MasterStackPointer = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

