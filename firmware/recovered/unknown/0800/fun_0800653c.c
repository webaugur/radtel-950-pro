/**
 * @brief fun_0800653c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800653c, Ghidra name FUN_0800653c, 370 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800653c(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_08006644;
  pcVar2 = DAT_08006538;
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 == 0x12) {
    cVar1 = DAT_08006538[1];
    if (((cVar1 != '\0') && (cVar1 != '\x03')) && (*DAT_08006538 != '\x01')) {
      DAT_08006538[2] = '\0';
      pcVar2[3] = '\x01';
      pcVar2[1] = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\x01') {
        pcVar2[2] = pcVar2[4];
      }
      FUN_080046c0(cVar1 + -1,pcVar2[2]);
      return;
    }
    FUN_0800e88c(1);
    return;
  }
  if ((int)uVar3 < 0x13) {
    if (uVar3 == 5) {
      FUN_0800e174();
      return;
    }
    if ((int)uVar3 < 6) {
      if (uVar3 == 2) {
        if (*(char *)(DAT_08014714 + 99) == '\0') {
          *(undefined1 *)(DAT_08014714 + 99) = 1;
          FUN_080234ac(0x25);
        }
        else {
          *(undefined1 *)(DAT_08014714 + 99) = 0;
          FUN_080234ac(0x26);
        }
        FUN_0800cf58(1);
        return;
      }
      if (uVar3 == 3) {
        FUN_080039f8(1);
        return;
      }
    }
    else {
      if (uVar3 == 0xd) {
        FUN_0800da50();
        iVar4 = FUN_08008f30();
        if (iVar4 != 0) {
          return;
        }
        FUN_080073a4(7);
        return;
      }
      if (uVar3 == 0x11) goto switchD_08006574_caseD_18;
    }
  }
  else {
    param_2 = (uint)*(byte *)(DAT_08006644 + 1);
    switch(uVar3) {
    case 0x13:
      FUN_0800664c(0);
      FUN_080046c0(*(undefined1 *)(iVar4 + 1),*(undefined1 *)(iVar4 + 2));
      FUN_080073a4(1);
      return;
    case 0x14:
      if (*DAT_08006648 == '\0') {
        *DAT_08006648 = '\x01';
        FUN_080073a4(1,param_2);
      }
      FUN_0800664c(0,*(undefined1 *)(iVar4 + 1));
      FUN_080046c0(*(undefined1 *)(iVar4 + 1),*(undefined1 *)(iVar4 + 2));
      return;
    case 0x15:
      FUN_0800664c(1);
      FUN_080046c0(*(undefined1 *)(iVar4 + 1),*(undefined1 *)(iVar4 + 2));
      FUN_080073a4(2);
      return;
    case 0x16:
      if (*DAT_08006648 == '\0') {
        *DAT_08006648 = '\x01';
        FUN_080073a4(2,param_2);
      }
      FUN_0800664c(1,*(undefined1 *)(iVar4 + 1));
      FUN_080046c0(*(undefined1 *)(iVar4 + 1),*(undefined1 *)(iVar4 + 2));
      return;
    case 0x18:
switchD_08006574_caseD_18:
      FUN_080064c8();
      FUN_080073f8(6);
      return;
    }
  }
  if (0x9f < uVar3) {
    return;
  }
  FUN_080073a4(0,param_2);
  return;
}

