/**
 * @brief fun_0801b8a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b8a8, Ghidra name FUN_0801b8a8, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b8a8(void)

{
  if (*DAT_0801b8c8 != '\x02') {
    return;
  }
  if (*(char *)(DAT_0801b8cc + 0x10c) != '\0') {
    FUN_0800ad30(1);
    return;
  }
  FUN_0800ad30(0);
  return;
}

