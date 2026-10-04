/**
 * @brief fun_080099e8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080099e8, Ghidra name FUN_080099e8, 430 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080099e8(void)

{
  ushort *puVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_08009b9c;
  iVar4 = DAT_08009b98;
  bVar3 = *(byte *)(DAT_08009b98 + 0xfa);
  uVar2 = *(ushort *)(DAT_08009b98 + 0x106);
  puVar1 = (ushort *)(DAT_08009b98 + 0x104);
  if (*(char *)(DAT_08009b9c + 6) == '\0') {
    if (0x62 < *(ushort *)(DAT_08009b98 + 0x102)) {
      *(undefined2 *)(DAT_08009b98 + 0x102) = 0;
    }
    if (0x62 < *puVar1) {
      *(undefined2 *)(iVar4 + 0x104) = 0;
    }
    if (0x62 < uVar2) {
      *(undefined2 *)(iVar4 + 0x106) = 0;
    }
    iVar7 = FUN_08008cc8(*(undefined1 *)(iVar6 + 0xd),0);
    if (iVar7 != 0) {
      *(undefined1 *)(iVar4 + 0xfa) = 0;
      iVar7 = FUN_080090ec((ushort)*(byte *)(iVar6 + 0xd) * 99 + *(short *)(iVar4 + 0x102),0);
      if (iVar7 == 0) {
        uVar5 = FUN_0801ffdc(*(undefined2 *)(iVar4 + 0x102),0);
        *(undefined2 *)(iVar4 + 0x102) = uVar5;
      }
    }
    iVar7 = FUN_08008cc8(*(undefined1 *)(iVar6 + 0xe),1);
    if (iVar7 != 0) {
      *(undefined1 *)(iVar4 + 0xfa) = 1;
      iVar7 = FUN_080090ec((ushort)*(byte *)(iVar6 + 0xe) * 99 + *(short *)(iVar4 + 0x104),0);
      if (iVar7 == 0) {
        uVar5 = FUN_0801ffdc(*(undefined2 *)(iVar4 + 0x104),0);
        *(undefined2 *)(iVar4 + 0x104) = uVar5;
      }
    }
    iVar7 = FUN_08008cc8(*(undefined1 *)(iVar6 + 0xf),2);
    if (iVar7 != 0) {
      *(undefined1 *)(iVar4 + 0xfa) = 2;
      iVar6 = FUN_080090ec((ushort)*(byte *)(iVar6 + 0xf) * 99 + *(short *)(iVar4 + 0x106),0);
      if (iVar6 == 0) {
        uVar5 = FUN_0801ffdc(*(undefined2 *)(iVar4 + 0x106),0);
        *(undefined2 *)(iVar4 + 0x106) = uVar5;
      }
    }
  }
  else {
    if (0x3dd < *(ushort *)(DAT_08009b98 + 0x102)) {
      *(undefined2 *)(DAT_08009b98 + 0x102) = 0;
    }
    if (0x3dd < *puVar1) {
      *(undefined2 *)(iVar4 + 0x104) = 0;
    }
    if (0x3dd < uVar2) {
      *(undefined2 *)(iVar4 + 0x106) = 0;
    }
    if (*(short *)(iVar4 + 0xfe) != 0) {
      *(undefined1 *)(iVar4 + 0xfa) = 0;
      iVar6 = FUN_080090ec(*(undefined2 *)(iVar4 + 0x102),0);
      if (iVar6 == 0) {
        uVar5 = FUN_0801ffdc(*(undefined2 *)(iVar4 + 0x102),0);
        *(undefined2 *)(iVar4 + 0x102) = uVar5;
      }
      *(undefined1 *)(iVar4 + 0xfa) = 1;
      iVar6 = FUN_080090ec(*(undefined2 *)(iVar4 + 0x104),0);
      if (iVar6 == 0) {
        uVar5 = FUN_0801ffdc(*(undefined2 *)(iVar4 + 0x104),0);
        *(undefined2 *)(iVar4 + 0x104) = uVar5;
      }
      iVar6 = DAT_08009ba0;
      if (*(char *)(DAT_08009ba0 + 0x4a) != -0x5b) {
        *(undefined1 *)(iVar4 + 0xfa) = 2;
        iVar7 = FUN_080090ec(*(undefined2 *)(iVar4 + 0x106),0);
        if (iVar7 == 0) {
          uVar5 = FUN_0801ffdc(*(undefined2 *)(iVar4 + 0x106),0);
          *(undefined2 *)(iVar4 + 0x106) = uVar5;
        }
      }
      if ((*(char *)(iVar6 + 0x4a) == -0x5b) && (*(short *)(iVar4 + 0x436) != 0)) {
        *(undefined1 *)(iVar4 + 0xfa) = 2;
        iVar6 = FUN_080090ec(*(undefined2 *)(iVar4 + 0x106),0);
        if (iVar6 == 0) {
          uVar5 = FUN_0801ffdc(*(undefined2 *)(iVar4 + 0x106),0);
          *(undefined2 *)(iVar4 + 0x106) = uVar5;
        }
      }
    }
  }
  *(byte *)(iVar4 + 0xfa) = bVar3;
  *(undefined2 *)(iVar4 + 0x108) = *(undefined2 *)(iVar4 + (uint)bVar3 * 2 + 0x102);
  return;
}

