/**
 * @brief fun_0801b880
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b880, Ghidra name FUN_0801b880, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b880(void)

{
  if (*DAT_0801b8a0 != '\x02') {
    return;
  }
  if (*(char *)(DAT_0801b8a4 + 0x10d) != '\0') {
    FUN_0800ad30(1);
    return;
  }
  FUN_0800ad30(0);
  return;
}

