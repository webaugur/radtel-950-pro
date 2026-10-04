/**
 * @brief fun_0800923c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800923c, Ghidra name FUN_0800923c, 38 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800923c(void)

{
  if ((*(char *)(DAT_08009264 + 0x4a) == -0x5b) && (*(char *)(DAT_08009268 + 0xfa) == '\x02')) {
    return 0;
  }
  if (*(char *)(DAT_0800926c + 4) != '\0') {
    return 1;
  }
  return 0;
}

