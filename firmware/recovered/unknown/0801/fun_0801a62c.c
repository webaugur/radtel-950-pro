/**
 * @brief fun_0801a62c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a62c, Ghidra name FUN_0801a62c, 22 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a62c(uint param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(DAT_0801a644 + 0x10) = *(uint *)(DAT_0801a644 + 0x10) | param_1;
    return;
  }
  *(uint *)(DAT_0801a644 + 0x10) = *(uint *)(DAT_0801a644 + 0x10) & ~param_1;
  return;
}

