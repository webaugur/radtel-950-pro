/**
 * @brief fun_08025e58
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025e58, Ghidra name FUN_08025e58, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08025e58(int param_1,uint param_2)

{
  uint uVar1;
  int extraout_r2;
  int extraout_r3;
  
  uVar1 = 0;
  while (uVar1 < param_2) {
    FUN_08025e70(*(undefined1 *)(param_1 + uVar1));
    param_1 = extraout_r3;
    uVar1 = extraout_r2 + 1;
  }
  return;
}

