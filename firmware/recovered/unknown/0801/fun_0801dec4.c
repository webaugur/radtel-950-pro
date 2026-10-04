/**
 * @brief fun_0801dec4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801dec4, Ghidra name FUN_0801dec4, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801dec4(void)

{
  if ((uint)*(byte *)(DAT_0801dee4 + 8) != *(uint *)(DAT_0801dee8 + 3)) {
    *(char *)(DAT_0801dee4 + 8) = (char)*(uint *)(DAT_0801dee8 + 3);
    FUN_0802029c(1);
  }
  FUN_08018038();
  return 1;
}

