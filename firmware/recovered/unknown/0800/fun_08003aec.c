/**
 * @brief fun_08003aec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003aec, Ghidra name FUN_08003aec, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08003aec(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_08003b40;
  *(undefined1 *)(DAT_08003b40 + 0xb) = 0;
  if (param_1 != 1) {
    FUN_080207ec(8);
    FUN_0800ad06(0x14);
    *(undefined2 *)(iVar1 + 2) = 0;
    thunk_FUN_0801c654(0);
    FUN_0801acc0(0);
    return;
  }
  *(undefined2 *)(iVar1 + 2) = 100;
  thunk_FUN_0801c654();
  if ((*(char *)(DAT_08003b44 + 0x11) == '\x01') && (*DAT_08003b48 == '\x01')) {
    FUN_0801ad5a();
    return;
  }
  FUN_0801acc0(1);
  return;
}

