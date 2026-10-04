/**
 * @brief fun_08021170
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021170, Ghidra name FUN_08021170, 16 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08021170(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(DAT_08021180 + 4))(0x67);
  return uVar1 & 0x1ff;
}

