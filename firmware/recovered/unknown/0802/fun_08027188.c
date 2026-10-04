/**
 * @brief fun_08027188
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027188, Ghidra name FUN_08027188, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027188(void)

{
  ushort uVar1;
  int iVar2;
  dword dVar3;
  
  FUN_0800e0dc();
  dVar3 = DWORD_080271b0;
  *(undefined2 *)(DWORD_080271b0 + 1) = 0xb;
  *(undefined1 *)dVar3 = 2;
  *(ushort *)(dVar3 + 7) = (ushort)*(byte *)(DWORD_080271b4 + 0x15);
  *(dword *)(dVar3 + 0xf) = DWORD_080271b8;
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

