/**
 * @brief fun_0801ca20
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ca20, Ghidra name FUN_0801ca20, 14 bytes.
 *       Not linked into rt950-firmware.
 */

bool FUN_0801ca20(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}

