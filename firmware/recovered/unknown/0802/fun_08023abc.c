/**
 * @brief fun_08023abc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023abc, Ghidra name FUN_08023abc, 48 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08023abc(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    uVar1 = 4;
  }
  if ((param_2 & 0x7fffffff) >> 0x14 != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_2 & 0x7fffffff) >> 0x14 == 0x7ff) {
    uVar1 = uVar1 | 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}

