/**
 * @brief fun_0803675c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803675c, Ghidra name FUN_0803675c, 24 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803675c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined8 in_d0;
  undefined8 in_d4;
  undefined8 in_d24;
  undefined8 in_d26;
  
  *(char *)(param_2 + 0xe) = (char)unaff_r6;
  *unaff_r6 = param_4;
  unaff_r6[1] = unaff_r4;
  VectorShiftRightInsert(in_d24,in_d0,1);
  VectorShiftLeftInsert(in_d26,in_d4,0x1f);
  *(short *)(param_2 + param_3) = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

