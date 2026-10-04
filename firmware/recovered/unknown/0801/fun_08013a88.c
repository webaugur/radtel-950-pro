/**
 * @brief fun_08013a88
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013a88, Ghidra name FUN_08013a88, 56 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08013a88(int param_1)

{
  if (param_1 == 0) {
    if (*(char *)(DAT_08013acc + 8) == '\x01') {
      FUN_08000850(DAT_08013ac8,&DAT_08013ad4,&DAT_08013ad8);
    }
    else {
      FUN_08000850(DAT_08013ac8,&DAT_08013ad4,&DAT_08013ad0);
    }
  }
  else {
    FUN_08000850(DAT_08013ac8,s__d_ms_08013ac0,param_1 * 100);
  }
  return DAT_08013ac8;
}

