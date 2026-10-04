/**
 * @brief fun_08021b60
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021b60, Ghidra name FUN_08021b60, 22 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08021b60(uint param_1)

{
  return param_1 & 7 | (param_1 & 0x1c0) << 2 | (param_1 & 0x38) << 1;
}

