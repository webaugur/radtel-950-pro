/**
 * @brief fun_0800aa94
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800aa94, Ghidra name FUN_0800aa94, 238 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800aa94(uint *param_1)

{
  uint *puVar1;
  
  *param_1 = *param_1 & 0xfffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1 == DAT_0800ab84) {
    DAT_0800ab84[-1] = DAT_0800ab84[-1] | 0xf;
    return;
  }
  if (param_1 == DAT_0800ab84 + 5) {
    DAT_0800ab84[-1] = DAT_0800ab84[-1] | 0xf0;
    return;
  }
  if (param_1 == DAT_0800ab84 + 10) {
    DAT_0800ab84[-1] = DAT_0800ab84[-1] | 0xf00;
    return;
  }
  if (param_1 == DAT_0800ab84 + 0xf) {
    DAT_0800ab84[-1] = DAT_0800ab84[-1] | 0xf000;
    return;
  }
  if (param_1 == DAT_0800ab84 + 0x14) {
    DAT_0800ab84[-1] = DAT_0800ab84[-1] | 0xf0000;
    return;
  }
  if (param_1 == DAT_0800ab84 + 0x19) {
    DAT_0800ab84[-1] = DAT_0800ab84[-1] | 0xf00000;
    return;
  }
  if (param_1 == DAT_0800ab84 + 0x1e) {
    DAT_0800ab84[-1] = DAT_0800ab84[-1] | 0xf000000;
    return;
  }
  puVar1 = DAT_0800ab88 + -1;
  if (param_1 == DAT_0800ab88) {
    *puVar1 = *puVar1 | 0xf;
    return;
  }
  if (param_1 == DAT_0800ab88 + 5) {
    *puVar1 = *puVar1 | 0xf0;
    return;
  }
  if (param_1 == DAT_0800ab88 + 10) {
    *puVar1 = *puVar1 | 0xf00;
    return;
  }
  if (param_1 == DAT_0800ab88 + 0xf) {
    *puVar1 = *puVar1 | 0xf000;
  }
  else if (param_1 == DAT_0800ab88 + 0x14) {
    *puVar1 = *puVar1 | 0xf0000;
    return;
  }
  return;
}

