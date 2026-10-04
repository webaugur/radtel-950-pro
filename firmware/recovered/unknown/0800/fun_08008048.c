/**
 * @brief fun_08008048
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008048, Ghidra name FUN_08008048, 44 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08008048(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return param_1 - 0x30U & 0xff;
  }
  if (param_1 - 0x61U < 6) {
    return param_1 - 0x8dU & 0xff;
  }
  if (param_1 - 0x41U < 6) {
    return param_1 - 0x37U & 0xff;
  }
  return 0;
}

