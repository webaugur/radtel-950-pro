/**
 * @brief fun_08021104
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021104, Ghidra name FUN_08021104, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021104(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0802113c;
  if (*(char *)(DAT_0802113c + 1) == '\x15') {
    FUN_0800da50();
    *(undefined1 *)(iVar1 + 1) = 0;
    FUN_0801b490();
    FUN_0801c9a0();
    *(undefined1 *)(iVar1 + 0x14) = 0;
    if (param_1 != 0) {
      FUN_0800b980();
    }
    FUN_0801046c();
    FUN_0801b70c(1,*(undefined1 *)(iVar1 + 0x62));
    return;
  }
  return;
}

