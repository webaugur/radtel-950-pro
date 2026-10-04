/**
 * @brief fun_08019b8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019b8c, Ghidra name FUN_08019b8c, 242 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08019b8c(int param_1)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  
  if ((param_1 == 0) && (pbVar3 = (byte *)FUN_08012fe8(), (int)((uint)*pbVar3 << 0x1a) < 0)) {
    return 1;
  }
  uVar4 = FUN_08012f6c();
  piVar1 = DAT_08019c80;
  *(short *)((int)DAT_08019c80 + 0x4a) = (short)uVar4;
  piVar2 = DAT_08019c80;
  if (uVar4 < 4) {
    iVar7 = uVar4 - 1;
  }
  else {
    iVar7 = 3;
  }
  if ((uVar4 & 0xffff) < 0xc) {
    cVar6 = (char)(uVar4 & 0xffff) + -1;
  }
  else {
    cVar6 = '\v';
  }
  if (piVar1[piVar1[2] + 3] == 0) {
    iVar5 = FUN_08013020();
    piVar1[piVar1[2] + 3] = iVar5 + -1;
    FUN_08022df0(0);
    piVar1[piVar1[2] + 8] = iVar7;
    if (*(ushort *)((int)piVar1 + 0x4a) < 5) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(ushort *)((int)piVar1 + 0x4a) - 4;
    }
    piVar1[piVar1[2] + 0xd] = iVar7;
    *(char *)((int)piVar2 + piVar1[2] + -0xa3) = cVar6;
  }
  else {
    piVar1[piVar1[2] + 3] = piVar1[piVar1[2] + 3] + -1;
    iVar5 = FUN_08022df0(0);
    if (iVar5 == 0) {
      iVar7 = piVar1[2];
      if (piVar1[iVar7 + 8] == 0) {
        if (piVar1[iVar7 + 0xd] != 0) {
          piVar1[iVar7 + 0xd] = piVar1[iVar7 + 0xd] + -1;
        }
      }
      else {
        piVar1[iVar7 + 8] = piVar1[iVar7 + 8] + -1;
      }
      cVar6 = *(char *)((int)piVar2 + piVar1[2] + -0xa3);
      if (cVar6 != '\0') {
        *(char *)((int)piVar2 + piVar1[2] + -0xa3) = cVar6 + -1;
      }
    }
    else {
      piVar1[piVar1[2] + 8] = iVar7;
      if (*(ushort *)((int)piVar1 + 0x4a) < 5) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(ushort *)((int)piVar1 + 0x4a) - 4;
      }
      piVar1[piVar1[2] + 0xd] = iVar7;
      *(char *)((int)piVar2 + piVar1[2] + -0xa3) = cVar6;
    }
  }
  iVar7 = DAT_08019c84;
  *(undefined1 *)(DAT_08019c84 + 2) = 0;
  if ((piVar1[2] == 0) && (*piVar1 == DAT_08019c88)) {
    *(undefined1 *)(iVar7 + 3) = 8;
  }
  else {
    *(undefined1 *)(iVar7 + 3) = 0;
  }
  FUN_08019a50();
  return 0;
}

