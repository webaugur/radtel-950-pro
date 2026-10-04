/**
 * @brief fun_0801c674
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c674, Ghidra name FUN_0801c674, 46 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0801c674(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(DAT_0801c6a4 + 4))(0xc);
  if ((*(byte *)(DAT_0801c6a4 + 0x14) < 2) && (*(char *)(DAT_0801c6a4 + 0x24) == '\0')) {
    return uVar1 & 0x400;
  }
  if (*(byte *)(DAT_0801c6a4 + 0x14) != 3) {
    return uVar1 & 0x4000;
  }
  return uVar1 & 0x8000;
}

