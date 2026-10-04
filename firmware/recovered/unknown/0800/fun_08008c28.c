/**
 * @brief fun_08008c28
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008c28, Ghidra name FUN_08008c28, 150 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008c28(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar1 = DAT_08008cc0;
  if (*(char *)(DAT_08008cc0 + 0xfa) == '\x01') {
    iVar3 = FUN_080090ec((ushort)*(byte *)(DAT_08008cc4 + 0xe) * 99 +
                         *(short *)(DAT_08008cc0 + 0x104),0);
    if (iVar3 == 0) {
      uVar2 = FUN_0801ffdc(*(undefined2 *)(iVar1 + 0x104),0);
      *(undefined2 *)(iVar1 + 0x104) = uVar2;
      return;
    }
  }
  else {
    if (*(char *)(DAT_08008cc0 + 0xfa) == '\x02') {
      iVar3 = FUN_080090ec((ushort)*(byte *)(DAT_08008cc4 + 0xf) * 99 +
                           *(short *)(DAT_08008cc0 + 0x106),0);
      if (iVar3 != 0) {
        return;
      }
      uVar2 = FUN_0801ffdc(*(undefined2 *)(iVar1 + 0x106),0);
      *(undefined2 *)(iVar1 + 0x106) = uVar2;
      return;
    }
    iVar3 = FUN_080090ec((ushort)*(byte *)(DAT_08008cc4 + 0xd) * 99 +
                         *(short *)(DAT_08008cc0 + 0x102),0);
    if (iVar3 == 0) {
      uVar2 = FUN_0801ffdc(*(undefined2 *)(iVar1 + 0x102),0);
      *(undefined2 *)(iVar1 + 0x102) = uVar2;
    }
  }
  return;
}

