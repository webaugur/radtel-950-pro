/**
 * @brief fun_080062a4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080062a4, Ghidra name FUN_080062a4, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080062a4(void)

{
  if ((*(char *)(DAT_080062bc + 1) == '\0') && (*(char *)(DAT_080062c0 + 1) == '\x14')) {
    FUN_080046c0(0,*(undefined1 *)(DAT_080062bc + 2));
    return;
  }
  return;
}

