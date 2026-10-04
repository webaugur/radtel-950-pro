/**
 * @brief fun_08048b70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08048b70, Ghidra name FUN_08048b70, 72 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08048b70(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 unaff_r4;
  char in_OV;
  undefined8 in_d4;
  undefined8 unaff_d8;
  undefined8 in_d26;
  
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
  if (in_OV == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfb,0x8048b90);
    (*pcVar1)();
  }
  *(undefined4 *)(param_2 + 0x30) = unaff_r4;
  VectorShiftLeftInsert(in_d26,in_d4,0x1f);
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

