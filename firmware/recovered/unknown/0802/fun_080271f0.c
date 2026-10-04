/**
 * @brief fun_080271f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080271f0, Ghidra name FUN_080271f0, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080271f0(void)

{
  ushort uVar1;
  int iVar2;
  dword dVar3;
  
  FUN_0800e0dc();
  dVar3 = DWORD_08027218;
  *(undefined2 *)(DWORD_08027218 + 1) = 4;
  *(undefined1 *)dVar3 = 1;
  *(ushort *)(dVar3 + 7) = (ushort)*(byte *)(DWORD_0802721c + 0x1e);
  *(dword *)(dVar3 + 0x13) = DWORD_08027220;
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

