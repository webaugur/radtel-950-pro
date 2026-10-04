/**
 * @brief fun_08007414
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007414, Ghidra name FUN_08007414, 18 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08007414(int param_1,uint param_2)

{
  return (uint)*(byte *)(param_1 + (param_2 >> 3)) & 1 << (param_2 & 7);
}

