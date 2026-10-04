/**
 * @brief fun_08032224
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08032224, Ghidra name FUN_08032224, 24 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032224(int *param_1)

{
  int *piVar1;
  int *unaff_r8;
  int *piVar2;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  undefined4 in_cr12;
  
  piVar1 = param_1;
  if (!in_CY) {
    piVar1 = param_1 + -0x92;
    *param_1 = (int)piVar1;
  }
  if (in_NG) {
    piVar1 = (int *)0x85dd;
  }
  piVar2 = unaff_r8;
  if (in_OV) {
    piVar2 = unaff_r8 + -0xc6;
    *unaff_r8 = (int)piVar1;
  }
  if (!in_NG) {
    coprocessor_moveto(5,0,6,piVar1,in_cr8,in_cr12);
  }
  if (in_CY && !in_ZR) {
    *piVar2 = (int)piVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

