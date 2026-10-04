/**
 * @brief fun_08022758
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022758, Ghidra name FUN_08022758, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022758(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0802277c;
  if ((*(char *)(DAT_08022778 + 1) == '\x01') && (DAT_0802277c[2] != '\0')) {
    if (DAT_0802277c[1] == '\0') {
      DAT_0802277c[2] = 0;
      *puVar1 = 0;
      FUN_0800b8a0();
      return;
    }
  }
  return;
}

