/**
 * @brief fun_08008a94
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008a94, Ghidra name FUN_08008a94, 16 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08008a94(void)

{
  if (*(char *)(DAT_08008aa4 + 1) != '\x01') {
    return 0;
  }
  return 1;
}

