/**
 * @brief fun_08046906
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08046906, Ghidra name FUN_08046906, 22 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08046906(undefined4 param_1,int param_2)

{
  undefined1 unaff_r6;
  undefined8 in_d0;
  undefined8 in_d24;
  
  *(undefined1 *)(param_2 + 0xe) = unaff_r6;
  VectorShiftRightInsert(in_d24,in_d0,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

