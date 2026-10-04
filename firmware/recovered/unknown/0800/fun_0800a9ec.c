/**
 * @brief fun_0800a9ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a9ec, Ghidra name FUN_0800a9ec, 16 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a9ec(int param_1)

{
  if (param_1 << 3 < 0) {
    *DAT_0800a9fc = param_1;
    return;
  }
  *(int *)(DAT_0800aa00 + 4) = param_1;
  return;
}

