/**
 * @brief fun_0800c980
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c980, Ghidra name FUN_0800c980, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c980(int param_1)

{
  if ((*(char *)(DAT_0800c9b8 + 1) != '\x0f') && (*(char *)(DAT_0800c9b8 + 1) != '\x14')) {
    if (param_1 != 1) {
      FUN_0800d2a8(1,0);
      return;
    }
    FUN_0800d2a8(2,0);
    FUN_0800cb78(*(undefined1 *)(DAT_0800c9bc + 0xfa),0);
    return;
  }
  return;
}

