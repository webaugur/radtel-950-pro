/**
 * @brief fun_08012d50
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012d50, Ghidra name FUN_08012d50, 12 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 FUN_08012d50(uint param_1)

{
  if (0x59 < param_1) {
    param_1 = 0;
  }
  return *(undefined1 *)(DAT_08012d5c + param_1);
}

