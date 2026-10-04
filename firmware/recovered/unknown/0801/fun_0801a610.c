/**
 * @brief fun_0801a610
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a610, Ghidra name FUN_0801a610, 22 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a610(uint param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(DAT_0801a628 + 0x1c) = *(uint *)(DAT_0801a628 + 0x1c) | param_1;
    return;
  }
  *(uint *)(DAT_0801a628 + 0x1c) = *(uint *)(DAT_0801a628 + 0x1c) & ~param_1;
  return;
}

