/**
 * @brief fun_080068c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080068c8, Ghidra name FUN_080068c8, 20 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080068c8(uint param_1,ushort *param_2)

{
  *param_2 = *(ushort *)(DAT_080068dc + ((param_1 ^ *param_2) & 0xff) * 2) ^ *param_2 >> 8;
  return;
}

