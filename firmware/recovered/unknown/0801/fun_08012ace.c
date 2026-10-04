/**
 * @brief fun_08012ace
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012ace, Ghidra name FUN_08012ace, 14 bytes.
 *       Not linked into rt950-firmware.
 */

bool FUN_08012ace(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}

