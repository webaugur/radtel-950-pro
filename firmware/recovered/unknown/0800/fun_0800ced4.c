/**
 * @brief fun_0800ced4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ced4, Ghidra name FUN_0800ced4, 114 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ced4(int param_1)

{
  if (*(char *)(DAT_0800cf48 + 1) == '\0') {
    if (param_1 != 0) {
      FUN_08015284(6,5,0x10,0x11,0x2965);
      return;
    }
  }
  else {
    if (*(char *)(DAT_0800cf4c + 2) != '\x01') {
      if (param_1 != 0) {
        FUN_08015324(6,5,0x10,0x11,DAT_0800cf50);
        return;
      }
      FUN_08027b14(6,5,0x10,0x11,DAT_0800cf50);
      return;
    }
    if (param_1 != 0) {
      FUN_08015324(6,5,0x10,0x11,DAT_0800cf54);
      return;
    }
    FUN_08027b14(6,5,0x10,0x11,DAT_0800cf54);
  }
  return;
}

