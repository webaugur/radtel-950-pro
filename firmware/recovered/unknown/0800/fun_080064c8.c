/**
 * @brief fun_080064c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080064c8, Ghidra name FUN_080064c8, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080064c8(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_080064fc;
  cVar1 = *(char *)(DAT_080064fc + 1);
  if (cVar1 == '\x03') {
    FUN_0800e88c(1);
    return;
  }
  *(undefined1 *)(DAT_080064fc + 2) = 0;
  *(undefined1 *)(iVar2 + 3) = 1;
  *(char *)(iVar2 + 1) = cVar1 + '\x01';
  if (2 < (byte)(cVar1 + 1U)) {
    *(undefined1 *)(iVar2 + 1) = 0;
  }
  if (*(char *)(iVar2 + 1) == '\x01') {
    *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(iVar2 + 4);
  }
  FUN_080046c0(*(char *)(iVar2 + 1),*(undefined1 *)(iVar2 + 2));
  return;
}

