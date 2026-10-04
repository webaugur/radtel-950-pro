/**
 * @brief fun_080424f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080424f8, Ghidra name FUN_080424f8, 30 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080424f8(undefined4 param_1,int param_2)

{
  undefined1 unaff_r6;
  undefined8 in_d6;
  undefined8 unaff_d12;
  undefined8 in_d27;
  
  VectorShiftLeftInsert(in_d27,in_d6,0x3f);
  *(undefined1 *)(param_2 + 0xe) = unaff_r6;
  VectorShiftLeft(unaff_d12,0x1f,0x20,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

