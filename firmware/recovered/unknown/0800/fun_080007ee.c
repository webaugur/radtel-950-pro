/**
 * @brief fun_080007ee
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080007ee, Ghidra name FUN_080007ee, 20 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_080007ee(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char in_OV;
  
  if ((int)param_1 >> 3 < 0 != (bool)in_OV) {
    uVar1 = (undefined1)((int)param_1 >> 3);
    *(undefined1 *)(param_2 + 1) = uVar1;
    puVar2 = param_1;
    if (param_4 + -2 < 0) {
      puVar2 = param_1 + 1;
      *param_1 = uVar1;
    }
    return puVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

