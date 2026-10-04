/**
 * @brief fun_08009598
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009598, Ghidra name FUN_08009598, 158 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009598(uint param_1,uint param_2)

{
  char cVar1;
  
  if (param_2 <= param_1) {
    return 1;
  }
  cVar1 = *(char *)(DAT_08009638 + 0x49);
  if (param_1 - 0x438 < 0x118) {
    if ((cVar1 == -0x5b) || (cVar1 == 'U')) {
      return 1;
    }
    if (param_2 < 0x551) {
      return 0;
    }
  }
  if ((DAT_0800963c[4] <= param_1) && (param_1 < DAT_0800963c[5])) {
    if ((cVar1 == -0x5b) || (cVar1 == 'U')) {
      return 1;
    }
    if (param_2 <= DAT_0800963c[5]) {
      return 0;
    }
  }
  if ((DAT_0800963c[6] <= param_1) && (param_1 < DAT_0800963c[7])) {
    if ((cVar1 == -0x5b) || (cVar1 == 'U')) {
      return 1;
    }
    if (param_2 <= DAT_0800963c[7]) {
      return 0;
    }
  }
  if (((*DAT_0800963c <= param_1) && (param_1 < DAT_0800963c[1])) && (param_2 <= DAT_0800963c[1])) {
    return 0;
  }
  if (((DAT_0800963c[2] <= param_1) && (param_1 < DAT_0800963c[3])) && (param_2 <= DAT_0800963c[3]))
  {
    return 0;
  }
  return 1;
}

