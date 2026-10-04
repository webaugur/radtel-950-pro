/**
 * @brief fun_08046a0c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08046a0c, Ghidra name FUN_08046a0c, 18 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08046a0c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_r6;
  int *piVar3;
  
  iVar1 = *unaff_r6;
  iVar2 = unaff_r6[2];
  piVar3 = (int *)unaff_r6[4];
  *piVar3 = unaff_r6[1];
  piVar3[1] = iVar2;
  *(undefined1 *)(iVar1 * 2) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

