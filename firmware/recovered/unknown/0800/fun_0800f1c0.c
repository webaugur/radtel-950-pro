/**
 * @brief fun_0800f1c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f1c0, Ghidra name FUN_0800f1c0, 50 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0800f1c0(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    param_1 = (param_1 & 0x3fffff) << 1 | (uint)((int)(param_1 << 9) < 0);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 3);
  param_1 = ~param_1;
  return ((param_1 & 0xff) << 8 | (param_1 & 0xffff) >> 8) << 8 | (param_1 & 0xffffff) >> 0x10;
}

