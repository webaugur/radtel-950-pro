/**
 * @brief fun_08023650
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023650, Ghidra name FUN_08023650, 34 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023650(void)

{
  if (*(char *)(DAT_08023674 + 8) == '\0') {
    *(undefined1 *)(DAT_08023674 + 8) = 1;
  }
  else {
    *(undefined1 *)(DAT_08023674 + 8) = 0;
  }
  FUN_0800cfc0();
  FUN_080073a4(3);
  return;
}

