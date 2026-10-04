/**
 * @brief fun_08012f04
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012f04, Ghidra name FUN_08012f04, 26 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08012f04(uint param_1)

{
  if (0xfa < param_1) {
    return 1;
  }
  if (param_1 != 0) {
    if (param_1 < 0x6a) {
      return 2;
    }
    return 3;
  }
  return 0;
}

