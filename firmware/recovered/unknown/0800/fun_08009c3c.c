/**
 * @brief fun_08009c3c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009c3c, Ghidra name FUN_08009c3c, 72 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08009c3c(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  pcVar1 = DAT_08009c84;
  cVar3 = *DAT_08009c84;
  *DAT_08009c84 = cVar3 + '\x01';
  if ((char)(cVar3 + '\x01') == '\n') {
    *pcVar1 = '\0';
    iVar2 = DAT_08009c88;
    cVar3 = *(char *)(DAT_08009c88 + 0x20) + '\x01';
    *(char *)(DAT_08009c88 + 0x20) = cVar3;
    if (cVar3 == '<') {
      *(undefined1 *)(iVar2 + 0x20) = 0;
      cVar3 = *(char *)(iVar2 + 0x1f) + '\x01';
      *(char *)(iVar2 + 0x1f) = cVar3;
      if (cVar3 == '<') {
        *(undefined1 *)(iVar2 + 0x1f) = 0;
        uVar4 = *(byte *)(iVar2 + 0x1e) + 1;
        *(char *)(iVar2 + 0x1e) = (char)uVar4 + (char)(uVar4 / 0x18) * -0x18;
      }
    }
  }
  return;
}

