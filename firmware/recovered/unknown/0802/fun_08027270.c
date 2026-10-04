/**
 * @brief fun_08027270
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027270, Ghidra name FUN_08027270, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027270(void)

{
  ushort uVar1;
  int iVar2;
  dword dVar3;
  dword dVar4;
  
  FUN_0800e0dc();
  dVar3 = DWORD_080272ac;
  *(undefined2 *)(DWORD_080272ac + 1) = 8;
  *(undefined1 *)dVar3 = 1;
  *(ushort *)(dVar3 + 7) = *(byte *)(DWORD_080272b0 + 9) & 7;
  dVar4 = DWORD_080272b8;
  if (*(char *)(DWORD_080272b4 + 8) == '\x01') {
    dVar4 = DWORD_080272b8 - 0x20;
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

