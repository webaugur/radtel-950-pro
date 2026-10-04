/**
 * @brief fun_08014074
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014074, Ghidra name FUN_08014074, 14 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014074(void)

{
  if (*(char *)(DAT_08014084 + 1) != '\0') {
    FUN_08022ee0();
    return;
  }
  return;
}

