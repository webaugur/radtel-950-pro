/**
 * @brief fun_08003194
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003194, Ghidra name FUN_08003194, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08003194(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  return;
}

