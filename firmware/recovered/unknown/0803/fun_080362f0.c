/**
 * @brief fun_080362f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080362f0, Ghidra name FUN_080362f0, 12 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080362f0(undefined4 param_1,int param_2)

{
  undefined4 unaff_r4;
  undefined8 unaff_d10;
  
  VectorShiftLeft(unaff_d10,0x3f,0x40,1);
  *(undefined4 *)(param_2 + 0x30) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

