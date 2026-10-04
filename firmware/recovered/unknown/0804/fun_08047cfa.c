/**
 * @brief fun_08047cfa
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08047cfa, Ghidra name FUN_08047cfa, 20 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08047cfa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 unaff_d8;
  
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
  func_0x07fe6d0c(param_1,param_2,param_1 >> 2,param_4,param_2,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

