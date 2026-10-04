/**
 * @brief fun_08023aec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023aec, Ghidra name FUN_08023aec, 38 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08023aec(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x7fffff) != 0) {
    uVar1 = 4;
  }
  if ((param_1 & 0x7fffffff) >> 0x17 != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((~(param_1 << 1) & 0xff000000) == 0) {
    uVar1 = uVar1 | 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}

