/**
 * @brief fun_0801be2c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801be2c, Ghidra name FUN_0801be2c, 46 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0801be2c(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(DAT_0801be5c + 4))(0xc);
  if ((*(byte *)(DAT_0801be5c + 0x14) < 2) && (*(char *)(DAT_0801be5c + 0x24) == '\0')) {
    if ((uVar1 & 0xfff) >> 10 != 3) {
      return 0;
    }
    return 1;
  }
  return uVar1 & 0x400;
}

