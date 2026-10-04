/**
 * @brief fun_0801a908
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a908, Ghidra name FUN_0801a908, 16 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0801a908(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(DAT_0801a918 + 4))(0x67);
  return uVar1 & 0x1ff;
}

