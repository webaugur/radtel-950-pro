/**
 * @brief fun_080089e8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080089e8, Ghidra name FUN_080089e8, 80 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080089e8(void)

{
  int iVar1;
  
  FUN_08000f6e(DAT_08008a3c,DAT_08008a38 + (uint)*(byte *)(DAT_08008a38 + 0xfa) * 0x58 + 0x110,0x58)
  ;
  iVar1 = DAT_08008a40;
  if (*(char *)(DAT_08008a40 + 0x66) == '\x01') {
    FUN_08000f6e(DAT_08008a3c,DAT_08008a44,0x58);
    *(undefined1 *)(iVar1 + 0x66) = 0;
    *(undefined1 *)(iVar1 + 0x65) = 1;
    *(undefined1 *)(iVar1 + 0x68) = 0x19;
  }
  else {
    *(undefined1 *)(DAT_08008a40 + 0x65) = 0;
  }
  FUN_08008a48();
  return;
}

