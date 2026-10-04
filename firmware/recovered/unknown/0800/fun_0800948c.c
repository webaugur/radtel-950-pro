/**
 * @brief fun_0800948c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800948c, Ghidra name FUN_0800948c, 210 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800948c(uint param_1,int param_2)

{
  param_1 = param_1 / 10000;
  FUN_08013cc8(param_1 & 0xffff);
  if (param_1 - 0x438 < 0x118) {
    return 0;
  }
  if (param_2 == 1) {
    return 0;
  }
  if ((*(char *)(DAT_08009560 + 0x4a) == -0x5b) && (*(char *)(DAT_08009564 + 0xfa) == '\x02')) {
    if (0x1cb < param_1 - 0xb4) {
      return 0;
    }
    return 1;
  }
  if (*(char *)(DAT_08009560 + 0x49) == 'V') {
    if (*(char *)(DAT_08009560 + 0x62) == '\0') {
      if (0x1cb < param_1 - 0xb4) {
        return 0;
      }
      return 1;
    }
    if ((0x1427 < param_1 - 0x280) && (0x95f < param_1 - 0x1db0)) {
      return 0;
    }
    return 1;
  }
  if ((DAT_08009568[2] <= param_1) && (param_1 < DAT_08009568[3])) {
    return 1;
  }
  if ((DAT_08009568[6] <= param_1) && (param_1 < DAT_08009568[7])) {
    return 1;
  }
  if ((DAT_08009568[4] <= param_1) && (param_1 < DAT_08009568[5])) {
    return 1;
  }
  if ((*DAT_08009568 <= param_1) && (param_1 < DAT_08009568[1])) {
    return 1;
  }
  return 0;
}

