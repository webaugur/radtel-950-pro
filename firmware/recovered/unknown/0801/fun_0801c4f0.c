/**
 * @brief fun_0801c4f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c4f0, Ghidra name FUN_0801c4f0, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c4f0(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_0801c510;
  (**(code **)(DAT_0801c510 + 8))(0x38,param_1 & 0xffff);
  (**(code **)(iVar1 + 8))(0x39,param_1 >> 0x10);
  FUN_0801c150(1);
  return;
}

