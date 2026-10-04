/**
 * @brief fun_080031ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080031ac, Ghidra name FUN_080031ac, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080031ac(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100000;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffefffff;
  return;
}

