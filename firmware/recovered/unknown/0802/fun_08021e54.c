/**
 * @brief fun_08021e54
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021e54, Ghidra name FUN_08021e54, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021e54(void)

{
  if (*(char *)(DAT_08021e6c + 0x4c) == '\x01') {
    *(undefined1 *)(DAT_08021e6c + 0x4c) = 0;
    FUN_08015824(0);
    return;
  }
  return;
}

