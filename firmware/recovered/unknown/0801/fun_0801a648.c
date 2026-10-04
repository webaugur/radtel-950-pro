/**
 * @brief fun_0801a648
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a648, Ghidra name FUN_0801a648, 22 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a648(uint param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(DAT_0801a660 + 0x18) = *(uint *)(DAT_0801a660 + 0x18) | param_1;
    return;
  }
  *(uint *)(DAT_0801a660 + 0x18) = *(uint *)(DAT_0801a660 + 0x18) & ~param_1;
  return;
}

