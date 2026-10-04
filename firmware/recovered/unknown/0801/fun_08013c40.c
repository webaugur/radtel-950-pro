/**
 * @brief fun_08013c40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013c40, Ghidra name FUN_08013c40, 12 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08013c40(void)

{
  return 0xf << *(sbyte *)(DAT_08013c4c + 4) & 0xffff;
}

