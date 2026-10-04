/**
 * @brief fun_08026eb4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026eb4, Ghidra name FUN_08026eb4, 54 bytes.
 *       Not linked into rt950-firmware.
 */

dword FUN_08026eb4(int param_1)

{
  if (param_1 == 0) {
    if (*(char *)(DWORD_08026ef8 + 8) == '\x01') {
      FUN_08000850(DWORD_08026ef4,&DAT_08026f00,&DAT_08026f04);
    }
    else {
      FUN_08000850(DWORD_08026ef4,&DAT_08026f00,&DAT_08026efc);
    }
  }
  else {
    FUN_08000850(DWORD_08026ef4,s__dsec_08026eec,param_1 * 5);
  }
  return DWORD_08026ef4;
}

