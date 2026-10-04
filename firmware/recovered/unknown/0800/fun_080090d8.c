/**
 * @brief fun_080090d8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080090d8, Ghidra name FUN_080090d8, 16 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080090d8(void)

{
  if (*(short *)(DAT_080090e8 + 2) != 0) {
    *(short *)(DAT_080090e8 + 2) = *(short *)(DAT_080090e8 + 2) + -1;
  }
  return;
}

