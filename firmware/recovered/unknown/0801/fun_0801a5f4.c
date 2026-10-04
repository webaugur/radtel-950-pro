/**
 * @brief fun_0801a5f4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a5f4, Ghidra name FUN_0801a5f4, 22 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a5f4(uint param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(DAT_0801a60c + 0x14) = *(uint *)(DAT_0801a60c + 0x14) | param_1;
    return;
  }
  *(uint *)(DAT_0801a60c + 0x14) = *(uint *)(DAT_0801a60c + 0x14) & ~param_1;
  return;
}

