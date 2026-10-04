/**
 * @brief fun_08023548
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023548, Ghidra name FUN_08023548, 120 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023548(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  
  pcVar2 = DAT_080235c0;
  if (*DAT_080235c0 == '\x01') {
    if (DAT_080235c0[1] == '\0') {
      if (DAT_080235c0[2] == '\0') {
        *DAT_080235c0 = '\0';
        *(undefined2 *)(DAT_080235c8 + 9) = 8;
        FUN_080207ec(4);
        FUN_0800ad06(0x28);
        FUN_0800a8c8(0);
        thunk_FUN_0801c150(1);
        return;
      }
      bVar4 = DAT_080235c0[2] - 1;
      DAT_080235c0[2] = bVar4;
      iVar3 = DAT_080235c4;
      cVar1 = pcVar2[bVar4 + 3];
      *(char *)(DAT_080235c4 + 1) = cVar1;
      if (cVar1 == -1) {
        FUN_0800ad06(0x1e);
        cVar1 = pcVar2[2];
        pcVar2[2] = cVar1 - 1U;
        *(char *)(iVar3 + 1) = pcVar2[(byte)(cVar1 - 1U) + 3];
      }
      FUN_08019710(*(undefined1 *)(iVar3 + 1));
    }
    else {
      FUN_0801967c();
    }
  }
  FUN_08022a9c();
  return;
}

