/**
 * @brief fun_08039f00
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08039f00, Ghidra name FUN_08039f00, 28 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039f00(undefined2 param_1,int param_2,int param_3)

{
  undefined8 in_d2;
  undefined8 unaff_d8;
  undefined8 in_d25;
  
  VectorShiftRightInsert(in_d25,in_d2,1);
  *(short *)(param_2 + param_3) = (short)param_3;
  *(short *)(param_2 + param_3) = (short)param_3;
  *(undefined2 *)(param_3 + 0x20) = param_1;
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

