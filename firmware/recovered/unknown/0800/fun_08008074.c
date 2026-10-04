/**
 * @brief fun_08008074
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008074, Ghidra name FUN_08008074, 20 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08008074(int param_1)

{
  if ((*(char *)(DAT_08008088 + 0x10) == '\0') && (param_1 - 0x41U < 0x1a)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}

