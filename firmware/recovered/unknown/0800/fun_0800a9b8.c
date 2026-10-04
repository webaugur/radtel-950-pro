/**
 * @brief fun_0800a9b8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a9b8, Ghidra name FUN_0800a9b8, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a9b8(uint *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = *param_1 | 1;
    return;
  }
  *param_1 = *param_1 & 0xfffe;
  return;
}

