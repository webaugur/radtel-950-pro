/**
 * @brief fun_0804844c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0804844c, Ghidra name FUN_0804844c, 24 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0804844c(undefined2 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined8 in_d0;
  undefined8 unaff_d8;
  undefined8 in_d24;
  undefined8 uVar1;
  
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
  *(undefined2 *)(param_3 + 0x20) = param_1;
  uVar1 = VectorShiftRightInsert(in_d24,in_d0,1);
  VectorShiftRightInsert(uVar1,in_d0,1);
  *unaff_r6 = param_4;
  unaff_r6[1] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

