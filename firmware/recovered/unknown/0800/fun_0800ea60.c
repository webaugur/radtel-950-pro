/**
 * @brief fun_0800ea60
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ea60, Ghidra name FUN_0800ea60, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ea60(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0800ea88;
  if (*(char *)(DAT_0800ea88 + 1) == '\x11') {
    *(undefined1 *)(DAT_0800ea88 + 1) = 0;
    FUN_0801b334();
    FUN_0800da50();
    *(undefined1 *)(iVar1 + 0x14) = 0;
    if (param_1 != 0) {
      FUN_0800b980();
      return;
    }
  }
  return;
}

