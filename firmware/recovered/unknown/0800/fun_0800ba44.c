/**
 * @brief fun_0800ba44
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ba44, Ghidra name FUN_0800ba44, 106 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ba44(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_08012fe8();
    if (*(char *)(DAT_0800bab0 + 8) == '\x01') {
      iVar1 = *(int *)(iVar1 + 0x18);
      if (*(char *)(iVar1 + 2) == '.') {
        FUN_08022908(DAT_0800bab4,iVar1 + 3,0x10);
      }
      else {
        FUN_08022908(DAT_0800bab4,iVar1 + 2,0x10);
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x14);
      if (*(char *)(iVar1 + 2) == '.') {
        FUN_08022908(DAT_0800bab4,iVar1 + 3,0x10);
      }
      else {
        FUN_08022908(DAT_0800bab4,iVar1 + 2,0x10);
      }
    }
  }
  if (*(char *)(DAT_0800bab8 + 0x11) == -0x56) {
    *DAT_0800babc = 0xff;
    FUN_0800a1c4(4);
  }
  FUN_0801750c();
  return;
}

