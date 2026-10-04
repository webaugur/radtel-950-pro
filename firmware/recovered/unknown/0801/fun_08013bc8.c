/**
 * @brief fun_08013bc8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013bc8, Ghidra name FUN_08013bc8, 60 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08013bc8(int param_1)

{
  if (*(char *)(DAT_08013c04 + 8) == '\x01') {
    if (param_1 == 0) {
      FUN_08000850(DAT_08013c10,&DAT_08013c1c);
    }
    else {
      FUN_08000850(DAT_08013c10,&DAT_08013c14,param_1);
    }
  }
  else if (param_1 == 0) {
    FUN_08000850(DAT_08013c10,&DAT_08013c20);
  }
  else {
    FUN_08000850(DAT_08013c10,s_Scram_d_08013c08,param_1);
  }
  return DAT_08013c10;
}

