/**
 * @brief fun_080273a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080273a8, Ghidra name FUN_080273a8, 90 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_080273a8(int param_1,byte param_2,byte *param_3,byte *param_4)

{
  if (param_1 - 0x30U < 10) {
    return param_1 - 0x30U & 0xff;
  }
  if (param_1 - 0x41U < 10) {
    *param_4 = *param_4 | param_2;
    return param_1 - 0x41U & 0xff;
  }
  if (param_1 - 0x50U < 10) {
    *param_3 = *param_3 | param_2;
    return param_1 - 0x50U & 0xff;
  }
  if (param_1 != 0x4b) {
    if (param_1 == 0x4c) {
      return 0;
    }
    if (param_1 != 0x5a) {
      return 0;
    }
    *param_3 = *param_3 | param_2;
    return 0;
  }
  *param_4 = *param_4 | param_2;
  return 0;
}

