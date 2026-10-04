/**
 * @brief fun_08015824
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015824, Ghidra name FUN_08015824, 60 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015824(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_08015864;
  if (param_1 == 0) {
    FUN_08012ae2(DAT_08015860,0x4000);
    *(undefined1 *)(iVar1 + 3) = 0;
    return;
  }
  if (param_1 != 1) {
    if (*(char *)(DAT_08015864 + 3) != '\0') {
      FUN_08012ae2(DAT_08015860,0x4000);
      *(undefined1 *)(iVar1 + 3) = 0;
      return;
    }
    FUN_08012ae6();
    *(undefined1 *)(iVar1 + 3) = 1;
    return;
  }
  FUN_08012ae6();
  *(undefined1 *)(iVar1 + 3) = 1;
  return;
}

