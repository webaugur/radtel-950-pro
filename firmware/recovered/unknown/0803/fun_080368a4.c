/**
 * @brief fun_080368a4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080368a4, Ghidra name FUN_080368a4, 14 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080368a4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined8 in_d2;
  undefined8 in_d24;
  
  *(short *)(param_3 + 0x24) = (short)param_3;
  VectorShiftRightInsert(in_d24,in_d2,1);
  *unaff_r6 = param_1;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

