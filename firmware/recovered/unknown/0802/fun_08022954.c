/**
 * @brief fun_08022954
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022954, Ghidra name FUN_08022954, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022954(void)

{
  int iVar1;
  
  FUN_08015868(0);
  iVar1 = DAT_08022994;
  *(undefined1 *)(DAT_08022994 + 4) = 4;
  *(undefined2 *)(iVar1 + 5) = 0;
  *(undefined2 *)(iVar1 + 9) = 10;
  *(undefined2 *)(iVar1 + 0xb) = 0;
  *(undefined1 *)(iVar1 + 0x14) = 1;
  *(undefined1 *)(iVar1 + 0x15) = 0;
  if (*(byte *)(DAT_08022998 + 0x16) != 0) {
    *(ushort *)(iVar1 + 0xd) = *(byte *)(DAT_08022998 + 0x16) + 2;
  }
  FUN_08012ae6(DAT_0802299c,0x100);
  return;
}

