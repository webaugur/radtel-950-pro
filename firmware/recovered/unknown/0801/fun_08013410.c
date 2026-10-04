/**
 * @brief fun_08013410
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013410, Ghidra name FUN_08013410, 72 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013410(int param_1)

{
  if (param_1 == 0) {
    if (*(char *)(_DAT_08013458 + 8) == '\x01') {
      FUN_08000850(DAT_08013470,&DAT_08013478,&DAT_0801347c);
    }
    else {
      FUN_08000850(DAT_08013470,&DAT_08013478,&DAT_08013474);
    }
  }
  else if (*(char *)(_DAT_08013458 + 8) == '\x01') {
    FUN_08000850(DAT_08013470,s__s__d_08013468,&DAT_08013484,param_1);
  }
  else {
    FUN_08000850(DAT_08013470,s__s__d_08013468,s_Encryption_0801345b + 1,param_1);
  }
  return DAT_08013470;
}

