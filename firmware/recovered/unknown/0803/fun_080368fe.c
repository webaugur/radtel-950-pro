/**
 * @brief fun_080368fe
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080368fe, Ghidra name FUN_080368fe, 24 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080368fe(int param_1,undefined1 param_2,int param_3,int param_4)

{
  int unaff_r4;
  int *unaff_r6;
  undefined8 in_d2;
  undefined1 in_q11 [16];
  undefined8 in_d24;
  undefined1 in_q13 [16];
  
  *(undefined1 *)(param_3 + 0x10) = param_2;
  *unaff_r6 = param_1;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = (int)unaff_r6;
  VectorShiftRightInsert(in_d24,in_d2,1);
  VectorShiftLeftInsert(in_q13,in_q11,0x1f);
  *(short *)(param_1 * 0x10 + unaff_r4) = (short)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

