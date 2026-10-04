/**
 * @brief fun_08001728
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001728, Ghidra name FUN_08001728, 28 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08001728(uint param_1,uint param_2)

{
  if (param_1 < 0x3a) {
    param_1 = param_1 - 0x30;
  }
  if (0x40 < (param_1 & 0xffffffdf)) {
    param_1 = (param_1 & 0xffffffdf) - 0x37;
  }
  if (param_2 <= param_1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}

