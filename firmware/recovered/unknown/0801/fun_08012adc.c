/**
 * @brief fun_08012adc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012adc, Ghidra name FUN_08012adc, 6 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08012adc(int param_1)

{
  return *(uint *)(param_1 + 0xc) & 0xffff;
}

