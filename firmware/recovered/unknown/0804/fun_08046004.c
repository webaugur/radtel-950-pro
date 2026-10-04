/**
 * @brief fun_08046004
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08046004, Ghidra name FUN_08046004, 94 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08046004(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  undefined4 unaff_r4;
  undefined1 extraout_r12;
  char in_OV;
  undefined8 unaff_d8;
  undefined8 uVar1;
  
  VectorShiftLeft(unaff_d8,0x1f,0x20,1);
  uVar1 = func_0x07fe502a(param_1,4,param_3,param_4,param_2,param_3);
  if (in_OV == '\0') {
    *(undefined4 *)((int)((ulonglong)uVar1 >> 0x20) + 0x30) = unaff_r4;
    *(undefined1 *)((int)uVar1 * 2) = extraout_r12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x077e4c60((int)uVar1);
  *(undefined4 *)(extraout_r1 + 0x30) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

