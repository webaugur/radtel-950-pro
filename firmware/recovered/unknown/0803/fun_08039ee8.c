/**
 * @brief fun_08039ee8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08039ee8, Ghidra name FUN_08039ee8, 20 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039ee8(undefined2 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  char in_OV;
  undefined8 in_d0;
  undefined8 unaff_d8;
  undefined8 in_d24;
  
  if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_2 + param_3) = (short)param_3;
  *(undefined2 *)(param_3 + 0x20) = param_1;
  *(short *)(param_2 + param_3) = (short)param_3;
  *(undefined2 *)(param_3 + 0x20) = param_1;
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
  *unaff_r6 = param_4;
  unaff_r6[1] = unaff_r4;
  VectorShiftRightInsert(in_d24,in_d0,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

