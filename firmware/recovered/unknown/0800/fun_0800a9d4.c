/**
 * @brief fun_0800a9d4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a9d4, Ghidra name FUN_0800a9d4, 16 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a9d4(int param_1)

{
  if (param_1 << 3 < 0) {
    *DAT_0800a9e4 = param_1;
    return;
  }
  *(int *)(DAT_0800a9e8 + 4) = param_1;
  return;
}

