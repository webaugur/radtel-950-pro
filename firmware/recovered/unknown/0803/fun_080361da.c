/**
 * @brief fun_080361da
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080361da, Ghidra name FUN_080361da, 32 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080361da(int param_1)

{
  int unaff_r4;
  undefined2 unaff_r6;
  undefined1 in_q11 [16];
  undefined1 in_q13 [16];
  
  VectorShiftLeftInsert(in_q13,in_q11,0x1f);
  *(undefined2 *)(param_1 * 0x10 + unaff_r4) = unaff_r6;
  *(undefined2 *)(param_1 * 0x10 + unaff_r4) = unaff_r6;
  *(undefined2 *)(param_1 * 0x10 + unaff_r4) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

