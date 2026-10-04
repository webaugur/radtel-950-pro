/**
 * @brief fun_080132a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080132a0, Ghidra name FUN_080132a0, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080132a0(int param_1)

{
  if (param_1 == 10) {
    FUN_08000850(DAT_080132cc,s_60sec_080132d0);
  }
  else {
    FUN_08000850(DAT_080132cc,s__dsec_080132c4,(param_1 + 1) * 5);
  }
  return DAT_080132cc;
}

