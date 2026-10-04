/**
 * @brief fun_080138c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080138c8, Ghidra name FUN_080138c8, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080138c8(int param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 + 1U & 0x7f) * 2;
  FUN_08000850(DAT_080138f4,s__d__d_s_080138ec,uVar1 / 10,uVar1 % 10);
  return DAT_080138f4;
}

