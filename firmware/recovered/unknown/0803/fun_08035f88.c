/**
 * @brief fun_08035f88
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08035f88, Ghidra name FUN_08035f88, 32 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08035f88(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined8 in_d4;
  undefined8 in_d26;
  
  VectorShiftLeftInsert(in_d26,in_d4,0x1f);
  uVar1 = (undefined2)param_3;
  *(undefined2 *)(param_2 + param_3) = uVar1;
  *(undefined2 *)(param_2 + param_3) = uVar1;
  *(undefined2 *)(param_2 + param_3) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

