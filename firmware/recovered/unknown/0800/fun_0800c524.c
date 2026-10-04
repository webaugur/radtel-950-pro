/**
 * @brief fun_0800c524
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c524, Ghidra name FUN_0800c524, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c524(void)

{
  if ((*(char *)(DAT_0800c568 + 0x15) == '\x01') || (*(char *)(DAT_0800c568 + 0x1e) != '\0')) {
    FUN_0800b604(0);
  }
  else if (*(char *)(DAT_0800c56c + (uint)*(byte *)(DAT_0800c56c + 0xfa) * 0x58 + 0x130) == '\x01')
  {
    FUN_0800af94(1);
  }
  else {
    FUN_0800d1f4();
  }
  FUN_0800aeb4();
  return;
}

