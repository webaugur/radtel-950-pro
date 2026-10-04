/**
 * @brief fun_08027144
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027144, Ghidra name FUN_08027144, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027144(void)

{
  ushort uVar1;
  int iVar2;
  dword dVar3;
  dword dVar4;
  dword dVar5;
  
  FUN_0800e0dc();
  dVar3 = DWORD_0802717c;
  *(undefined2 *)(DWORD_0802717c + 1) = 2;
  *(undefined1 *)dVar3 = 1;
  dVar4 = DWORD_08027180;
  *(ushort *)(dVar3 + 7) = *(byte *)(DWORD_08027180 + 0x1c) & 3;
  dVar5 = DWORD_08027184;
  if (*(char *)(dVar4 + 8) == '\x01') {
    dVar5 = DWORD_08027184 - 8;
  }
  *(dword *)(dVar3 + 0x13) = dVar5;
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

