/**
 * @brief fun_080203e4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080203e4, Ghidra name FUN_080203e4, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080203e4(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_08020400;
  *(uint *)(DAT_08020400 + 8) = param_1 & 0xf;
  *(undefined4 *)(iVar1 + 4) = param_2;
  if ((int)(param_1 << 0x1a) < 0) {
    FUN_08015530(param_1 & 0xff);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return;
}

