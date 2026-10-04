/**
 * @brief fun_0800317c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800317c, Ghidra name FUN_0800317c, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800317c(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  return;
}

