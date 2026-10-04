/**
 * @brief fun_08026f20
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026f20, Ghidra name FUN_08026f20, 60 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08026f20(void)

{
  ushort uVar1;
  int iVar2;
  dword dVar3;
  dword dVar4;
  dword dVar5;
  
  FUN_0800e0dc();
  FUN_08001016(DWORD_08026f5c,0x17);
  dVar3 = DWORD_08026f5c;
  *(undefined2 *)(DWORD_08026f5c + 1) = 3;
  *(undefined1 *)dVar3 = 1;
  dVar4 = DWORD_08026f60;
  *(ushort *)(dVar3 + 7) = (ushort)*(byte *)(DWORD_08026f60 + 0xd);
  dVar5 = DWORD_08026f64;
  if (*(char *)(dVar4 + 8) == '\x01') {
    dVar5 = DWORD_08026f64 - 0xc;
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

