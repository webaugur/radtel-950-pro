/**
 * @brief fun_0800ea8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ea8c, Ghidra name FUN_0800ea8c, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ea8c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0800eab4;
  if (*(char *)(DAT_0800eab4 + 1) == '\x04') {
    FUN_0801b334();
    *(undefined1 *)(iVar1 + 1) = 0;
    *(undefined1 *)(iVar1 + 0x14) = 0;
    FUN_0801bd3c();
    if (param_1 != 0) {
      FUN_0800b980();
      return;
    }
  }
  return;
}

