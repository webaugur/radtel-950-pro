/**
 * @brief fun_0800ad06
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ad06, Ghidra name FUN_0800ad06, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ad06(uint param_1)

{
  uint uVar1;
  int extraout_r2;
  uint extraout_r3;
  
  uVar1 = 0;
  while (uVar1 < param_1) {
    FUN_0800ad22(1000);
    param_1 = extraout_r3;
    uVar1 = extraout_r2 + 1U & 0xffff;
  }
  return;
}

