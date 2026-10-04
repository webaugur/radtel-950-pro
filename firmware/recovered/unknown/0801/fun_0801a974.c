/**
 * @brief fun_0801a974
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a974, Ghidra name FUN_0801a974, 38 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801a974(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0801a99c + 1) == '\v') {
    return 0;
  }
  if (*(char *)(DAT_0801a9a0 + 0x14) != '\0') {
    iVar1 = FUN_0801be2c();
    if (iVar1 != 0) {
      return 1;
    }
    return 0;
  }
  return 0;
}

