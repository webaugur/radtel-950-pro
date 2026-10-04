/**
 * @brief fun_080270ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080270ec, Ghidra name FUN_080270ec, 72 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080270ec(void)

{
  ushort uVar1;
  int iVar2;
  dword dVar3;
  dword dVar4;
  
  FUN_0800e0dc();
  dVar3 = DWORD_08027134;
  *(undefined2 *)(DWORD_08027134 + 1) = 4;
  *(undefined1 *)dVar3 = 1;
  *(ushort *)(dVar3 + 7) =
       (ushort)*(byte *)(DWORD_08027138 + (uint)*(byte *)(DWORD_08027138 + 0xfa) * 0x58 + 0x141);
  dVar4 = DWORD_08027140;
  if (*(char *)(DWORD_0802713c + 8) == '\x01') {
    dVar4 = DWORD_08027140 - 0x10;
  }
  *(dword *)(dVar3 + 0x13) = dVar4;
  iVar2 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (2 < uVar1) {
    *(undefined2 *)(iVar2 + 9) = 3;
    *(ushort *)(iVar2 + -4) = uVar1 - 3;
    return;
  }
  *(ushort *)(iVar2 + 9) = uVar1;
  *(undefined2 *)(iVar2 + -4) = 0;
  return;
}

