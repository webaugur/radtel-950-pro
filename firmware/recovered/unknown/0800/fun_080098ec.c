/**
 * @brief fun_080098ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080098ec, Ghidra name FUN_080098ec, 132 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080098ec(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar2 = DAT_08009970;
  *(undefined2 *)(DAT_08009970 + 6) = 2000;
  pcVar3 = DAT_08009978;
  cVar1 = (char)param_1;
  if (*(char *)(DAT_08009974 + 1) == '\r') {
    *(char *)(*(int *)(iVar2 + 0xc) + (uint)*(ushort *)(iVar2 + 4)) = cVar1;
    uVar4 = *(ushort *)(iVar2 + 4) + 1;
    *(short *)(iVar2 + 4) = (short)uVar4 + (short)(uVar4 / 0x410) * -0x410;
    *(undefined1 *)(iVar2 + 8) = 5;
    *(undefined1 *)(iVar2 + 1) = 0;
  }
  else if (*(char *)(iVar2 + 2) == '\0') {
    if (((param_1 == 0x52) && (*DAT_08009978 == 'P')) ||
       ((param_1 == 0x4f && (*DAT_08009978 == 'R')))) {
      *(undefined1 *)(iVar2 + 2) = 1;
      FUN_08012ae6(DAT_0800997c,0x100);
    }
    *pcVar3 = cVar1;
    *(undefined2 *)(iVar2 + 4) = 0;
  }
  else {
    *(char *)((uint)*(ushort *)(iVar2 + 4) + iVar2 + 0x10) = cVar1;
    uVar4 = *(ushort *)(iVar2 + 4) + 1;
    *(short *)(iVar2 + 4) = (short)uVar4 + (short)(uVar4 / 0x90) * -0x90;
    *(undefined1 *)(iVar2 + 3) = 1;
    *(undefined1 *)(iVar2 + 1) = 0;
  }
  return;
}

