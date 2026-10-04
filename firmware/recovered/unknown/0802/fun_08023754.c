/**
 * @brief fun_08023754
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023754, Ghidra name FUN_08023754, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023754(int param_1)

{
  if (*(char *)(DAT_08023788 + 5) == '\0') {
    *(undefined1 *)(DAT_08023788 + 5) = 9;
  }
  else {
    *(char *)(DAT_08023788 + 5) = *(char *)(DAT_08023788 + 5) + -1;
  }
  *(undefined1 *)(DAT_0802378c + 0x14) = 1;
  FUN_08010044();
  FUN_080237cc();
  if (param_1 == 0) {
    FUN_080073a4(1);
    return;
  }
  return;
}

