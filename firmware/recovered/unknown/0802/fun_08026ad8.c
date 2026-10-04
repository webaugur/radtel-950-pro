/**
 * @brief fun_08026ad8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026ad8, Ghidra name FUN_08026ad8, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08026ad8(byte *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_08026af4;
  if (*param_1 - 0x20 < 0x5f) {
    iVar1 = DAT_08026af4 + (*param_1 - 0x20) * 0xc;
  }
  FUN_08021824(iVar1,param_2,0xc);
  return;
}

