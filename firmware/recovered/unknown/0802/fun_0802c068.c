/**
 * @brief fun_0802c068
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802c068, Ghidra name FUN_0802c068, 62 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802c068(undefined2 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int unaff_r7;
  undefined4 unaff_r10;
  undefined4 in_cr10;
  
  iVar1 = _DAT_000000d9;
  if (param_4 == 0) {
    _DAT_000000ed = param_1;
    if (unaff_r7 + -0xed != 0) {
      uRam00000032 = 0;
      *(int *)(DAT_0802c27c + 0x38) = unaff_r7 + -0xed;
      *(short *)(iVar1 + 0x2a) = (short)iVar1;
      coprocessor_loadlong(9,in_cr10,unaff_r10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

