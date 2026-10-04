/**
 * @brief fun_080222e8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080222e8, Ghidra name FUN_080222e8, 16 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080222e8(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xff8f;
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) | param_2;
  return;
}

