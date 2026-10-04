/**
 * @brief fun_0802bc22
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802bc22, Ghidra name FUN_0802bc22, 28 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802bc22(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined2 unaff_r6;
  undefined4 in_cr5;
  
  func_0x07ad8bec(param_1,param_2 + 0x16,param_3,param_4,param_3);
  *(undefined2 *)(unaff_r4 + 0x38) = unaff_r6;
  software_bkpt(0xd3);
  coprocessor_load(0xe,in_cr5,_DAT_000000a3 + -0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

