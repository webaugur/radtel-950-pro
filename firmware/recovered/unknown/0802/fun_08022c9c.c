/**
 * @brief fun_08022c9c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022c9c, Ghidra name FUN_08022c9c, 8 bytes.
 *       Not linked into rt950-firmware.
 */

ushort FUN_08022c9c(int param_1)

{
  return *(ushort *)(param_1 + 4) & 0x1ff;
}

