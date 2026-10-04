/**
 * @brief fun_08036702
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08036702, Ghidra name FUN_08036702, 14 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036702(undefined2 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined8 in_d0;
  undefined8 in_d24;
  
  *(undefined2 *)(param_3 + 0x20) = param_1;
  VectorShiftRightInsert(in_d24,in_d0,1);
  *unaff_r6 = param_4;
  unaff_r6[1] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

