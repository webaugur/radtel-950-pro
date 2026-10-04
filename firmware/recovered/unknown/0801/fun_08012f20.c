/**
 * @brief fun_08012f20
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012f20, Ghidra name FUN_08012f20, 52 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08012f20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08009138((uint)*(byte *)(DAT_08012f54 + 1) * 99 + param_1 & 0xffff);
  if (iVar1 == 0) {
    FUN_08000850(DAT_08012f60,&DAT_08012f64,param_1 + 1);
  }
  else {
    FUN_08000850(DAT_08012f60,s_CH__03d_08012f58,param_1 + 1);
  }
  return DAT_08012f60;
}

