/**
 * @brief fun_08009214
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009214, Ghidra name FUN_08009214, 28 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009214(void)

{
  if (*DAT_08009230 == DAT_08009234) {
    return 1;
  }
  if (*DAT_08009230 == DAT_08009238) {
    return 2;
  }
  return 0;
}

