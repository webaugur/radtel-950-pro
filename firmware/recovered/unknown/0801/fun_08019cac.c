/**
 * @brief fun_08019cac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019cac, Ghidra name FUN_08019cac, 74 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08019cac(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_24 [24];
  
  FUN_08021824(62000,auStack_24,0x15);
  iVar1 = DAT_08019cf8;
  iVar3 = 0;
  uVar2 = 1;
  do {
    if ((((uVar2 == 5) || (uVar2 == 10)) || (uVar2 == 0xf)) || (uVar2 == 0x10)) {
      uVar2 = uVar2 + 1;
    }
    iVar4 = iVar3 + iVar1;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar4 + 0x10) = auStack_24[uVar2];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x15);
  *(undefined2 *)(iVar1 + 4) = 0x10;
  FUN_08022dd6(DAT_08019cf8 + 0x10);
  return;
}

