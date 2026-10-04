/**
 * @brief fun_08020418
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020418, Ghidra name FUN_08020418, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020418(void)

{
  if (*DAT_08020438 != '\x04') {
    return;
  }
  if (DAT_08020438[4] != '\0') {
    thunk_FUN_0801c60c(*(uint *)(DAT_08020438 + 8) & 0xffff);
    return;
  }
  thunk_FUN_0801c60c(*(undefined2 *)(DAT_0802043c + *(uint *)(DAT_08020438 + 8) * 2));
  return;
}

