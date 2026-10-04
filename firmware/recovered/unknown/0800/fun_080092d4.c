/**
 * @brief fun_080092d4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080092d4, Ghidra name FUN_080092d4, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080092d4(void)

{
  if ((*(char *)(DAT_080092fc + 1) == '\x01') && (*(short *)((int)DAT_08009300 + 0x4e) == 0)) {
    if (*DAT_08009300 == DAT_08009304) {
      FUN_0801b4c0();
      return;
    }
    FUN_0800e95c(1);
    return;
  }
  return;
}

