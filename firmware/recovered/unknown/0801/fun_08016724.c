/**
 * @brief fun_08016724
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016724, Ghidra name FUN_08016724, 44 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016724(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = DAT_08016754;
  iVar2 = DAT_08016750;
  uVar4 = 0;
  do {
    uVar5 = uVar4;
    cVar1 = *(char *)(iVar2 + uVar5 + 0x4f);
    if ((cVar1 == '\0') || (cVar1 == -1)) break;
    *(char *)(iVar3 + uVar5 + 0x12) = cVar1;
    uVar4 = uVar5 + 1;
  } while (uVar5 + 1 < 0x28);
  *(uint *)(iVar3 + 4) = uVar5 + 1;
  *(undefined1 *)(uVar5 + 1 + iVar3 + 0x12) = 0;
  return;
}

