/**
 * @brief fun_0800e88c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e88c, Ghidra name FUN_0800e88c, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800e88c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0800e8c8;
  if (*(char *)(DAT_0800e8c8 + 1) == '\x14') {
    FUN_0801b334();
    *(undefined1 *)(iVar1 + 1) = 0;
    iVar1 = DAT_0800e8cc;
    *(undefined1 *)(DAT_0800e8cc + 1) = 0;
    *(undefined1 *)(iVar1 + 2) = 0;
    *(undefined1 *)(iVar1 + 4) = 0;
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined2 *)(iVar1 + 6) = 0;
    if (param_1 != 0) {
      FUN_0800a1c4(2);
      FUN_0800b980();
      FUN_0800ced4(1);
      return;
    }
  }
  return;
}

