/**
 * @brief fun_0800cfc0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800cfc0, Ghidra name FUN_0800cfc0, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800cfc0(void)

{
  if ((*(char *)(DAT_0800cfdc + 1) != '\x0f') && (*(char *)(DAT_0800cfdc + 1) != '\x14')) {
    FUN_0800cfe0();
    FUN_0800ca18();
    return;
  }
  return;
}

