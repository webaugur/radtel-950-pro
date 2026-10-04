/**
 * @brief fun_0801deec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801deec, Ghidra name FUN_0801deec, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801deec(void)

{
  if ((uint)*(byte *)(DAT_0801df0c + 7) != *(uint *)(DAT_0801df10 + 3)) {
    *(char *)(DAT_0801df0c + 7) = (char)*(uint *)(DAT_0801df10 + 3);
    FUN_0802029c(1);
  }
  FUN_08018038();
  return 1;
}

