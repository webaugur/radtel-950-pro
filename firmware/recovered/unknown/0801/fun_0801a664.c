/**
 * @brief fun_0801a664
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a664, Ghidra name FUN_0801a664, 22 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a664(uint param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(DAT_0801a67c + 0xc) = *(uint *)(DAT_0801a67c + 0xc) | param_1;
    return;
  }
  *(uint *)(DAT_0801a67c + 0xc) = *(uint *)(DAT_0801a67c + 0xc) & ~param_1;
  return;
}

