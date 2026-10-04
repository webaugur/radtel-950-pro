/**
 * @brief fun_08013548
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013548, Ghidra name FUN_08013548, 18 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08013548(int param_1)

{
  return (uint)*(byte *)(param_1 + DAT_0801355c + 0x1b) % 0x18;
}

