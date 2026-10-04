/**
 * @brief fun_08027224
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027224, Ghidra name FUN_08027224, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027224(void)

{
  ushort uVar1;
  int iVar2;
  dword dVar3;
  
  FUN_0800e0dc();
  dVar3 = DWORD_08027264;
  *(undefined2 *)(DWORD_08027264 + 1) = 0xf;
  *(undefined1 *)dVar3 = 2;
  *(ushort *)(dVar3 + 7) =
       *(byte *)(DWORD_08027268 + (uint)*(byte *)(DWORD_08027268 + 0xfa) * 0x58 + 0x137) & 0xf;
  *(dword *)(dVar3 + 0xf) = DWORD_0802726c;
  iVar2 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (uVar1 < 3) {
    *(ushort *)(iVar2 + 9) = uVar1;
    *(undefined2 *)(iVar2 + -4) = 0;
    return;
  }
  *(undefined2 *)(iVar2 + 9) = 3;
  *(ushort *)(iVar2 + -4) = uVar1 - 3;
  return;
}

