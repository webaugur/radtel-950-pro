/**
 * @brief fun_08009c20
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009c20, Ghidra name FUN_08009c20, 24 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009c20(void)

{
  if (*(char *)(DAT_08009c38 + 2) != '\0') {
    *(undefined1 *)(DAT_08009c38 + 2) = 0;
    return 1;
  }
  *(undefined1 *)(DAT_08009c38 + 2) = 1;
  return 0;
}

