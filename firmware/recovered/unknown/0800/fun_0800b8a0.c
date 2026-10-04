/**
 * @brief fun_0800b8a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800b8a0, Ghidra name FUN_0800b8a0, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800b8a0(void)

{
  if (*(char *)(DAT_0800b8bc + 1) != '\x0f') {
    if (*(char *)(DAT_0800b8c0 + 1) == '\0') {
      *(undefined1 *)(DAT_0800b8c0 + 3) = 2;
    }
    FUN_0800ced4(1);
    return;
  }
  return;
}

