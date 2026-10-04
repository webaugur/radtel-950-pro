/**
 * @brief fun_08013d30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013d30, Ghidra name FUN_08013d30, 56 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08013d30(int param_1)

{
  if (param_1 == 0) {
    if (*(char *)(DAT_08013d74 + 8) == '\x01') {
      FUN_08000850(DAT_08013d70,&DAT_08013d7c,&DAT_08013d80);
    }
    else {
      FUN_08000850(DAT_08013d70,&DAT_08013d7c,&DAT_08013d78);
    }
  }
  else {
    FUN_08000850(DAT_08013d70,s__dsec_08013d68,param_1 * 0x1e);
  }
  return DAT_08013d70;
}

