/**
 * @brief fun_08047e2a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08047e2a, Ghidra name FUN_08047e2a, 40 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08047e2a(undefined2 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  char in_OV;
  undefined8 unaff_d8;
  undefined8 unaff_d12;
  
  *(undefined2 *)(param_3 + 0x20) = param_1;
  if (in_OV == '\0') {
    VectorShiftLeft(unaff_d8,0x1f,0x20,1);
    VectorShiftLeft(unaff_d12,0x1f,0x20,1);
    *(undefined2 *)(param_3 + 0x20) = param_1;
    *(undefined2 *)(param_3 + 0x20) = param_1;
    *(undefined2 *)(param_3 + 0x20) = param_1;
    *unaff_r6 = param_4;
    unaff_r6[1] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_2 + param_3) = (short)param_3;
  *(short *)(param_2 + param_3) = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

