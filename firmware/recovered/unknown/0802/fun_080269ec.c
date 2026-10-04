/**
 * @brief fun_080269ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080269ec, Ghidra name FUN_080269ec, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080269ec(byte *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0x15c000;
  if (*param_1 - 0x20 < 0x5f) {
    iVar1 = (*param_1 - 0x20) * 0x27 + 0x15c000;
  }
  FUN_08021824(iVar1,param_2,0x27);
  return;
}

