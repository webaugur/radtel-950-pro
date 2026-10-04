/**
 * @brief fun_0802115c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802115c, Ghidra name FUN_0802115c, 16 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0802115c(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(DAT_0802116c + 4))(0x65);
  return uVar1 & 0x7f;
}

