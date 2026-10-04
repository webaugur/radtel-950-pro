/**
 * @brief fun_0801a5dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a5dc, Ghidra name FUN_0801a5dc, 14 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a5dc(uint param_1)

{
  *(uint *)(DAT_0801a5ec + 4) = *(uint *)(DAT_0801a5ec + 4) & DAT_0801a5f0 | param_1;
  return;
}

