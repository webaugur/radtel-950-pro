/**
 * @brief fun_080031d2
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080031d2, Ghidra name FUN_080031d2, 6 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_080031d2(int param_1)

{
  return *(uint *)(param_1 + 0x4c) & 0xffff;
}

