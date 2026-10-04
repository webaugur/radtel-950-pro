/**
 * @brief fun_0801a7a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a7a0, Ghidra name FUN_0801a7a0, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a7a0(int param_1)

{
  if (param_1 != 1) {
    *(uint *)(DAT_0801a7bc + 0x54) = *(uint *)(DAT_0801a7bc + 0x54) & 0xffffffcf;
    return;
  }
  *(uint *)(DAT_0801a7bc + 0x54) = *(uint *)(DAT_0801a7bc + 0x54) | 0x30;
  return;
}

