/**
 * @brief fun_0802a5f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802a5f8, Ghidra name FUN_0802a5f8, 38 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802a5f8(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r5;
  undefined1 unaff_r6;
  undefined4 *unaff_r7;
  bool in_ZR;
  bool in_CY;
  undefined1 in_q1 [16];
  undefined1 in_q2 [16];
  
  if (!in_CY || in_ZR) {
    *(undefined1 *)(param_3 + param_1) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY == false) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = param_3;
  param_4[1] = (int)param_4;
  uVar1 = *unaff_r7;
  UNRECOVERED_JUMPTABLE = (code *)unaff_r7[1];
  *(short *)(unaff_r5 + 0x18) = (short)unaff_r7[3];
  VectorUnsignedSignedDotProduct(in_q1,in_q2);
                    /* WARNING: Could not recover jumptable at 0x0802a63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,UNRECOVERED_JUMPTABLE,DAT_0802a99c,param_1,param_3);
  return;
}

