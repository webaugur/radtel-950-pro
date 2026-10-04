/**
 * @brief fun_08015e70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015e70, Ghidra name FUN_08015e70, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015e70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_08015e9c;
  iVar2 = DAT_08015e98;
  uVar4 = 0;
  do {
    cVar1 = *(char *)(iVar2 + uVar4 + 0x11);
    if ((cVar1 == '\0') || (cVar1 == -1)) break;
    *(char *)(iVar3 + uVar4 + 0x12) = cVar1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  *(uint *)(iVar3 + 4) = uVar4;
  *(undefined1 *)(uVar4 + iVar3 + 0x12) = 0;
  return;
}

