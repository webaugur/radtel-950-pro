/**
 * @brief fun_080227d8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080227d8, Ghidra name FUN_080227d8, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080227d8(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0802280c + 1) == '\x15') {
    FUN_080212e4(0xff);
    iVar1 = DAT_08022814;
    FUN_08020d14(DAT_08022810 + -0x3c3,*(undefined1 *)(DAT_08022814 + 4),
                 *(undefined1 *)(DAT_08022810 + 10));
    *(byte *)(iVar1 + 4) = (byte)(*(char *)(iVar1 + 4) + 1U) % 5;
  }
  return;
}

