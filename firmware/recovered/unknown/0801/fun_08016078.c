/**
 * @brief fun_08016078
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016078, Ghidra name FUN_08016078, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016078(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_080160b4;
  uVar3 = 0;
  iVar4 = DAT_080160b0 + (uint)*(byte *)(DAT_080160b0 + 0xfa) * 0x58;
  do {
    cVar1 = *(char *)(iVar4 + uVar3 + 0x149);
    if ((cVar1 == -1) || (cVar1 == '\0')) break;
    *(char *)(iVar2 + uVar3 + 0x12) = cVar1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xc);
  *(uint *)(iVar2 + 4) = uVar3;
  *(undefined1 *)(uVar3 + iVar2 + 0x12) = 0;
  return;
}

