/**
 * @brief fun_08027064
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027064, Ghidra name FUN_08027064, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027064(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  dword dVar4;
  int extraout_r3;
  
  FUN_0800e0dc();
  dVar4 = DWORD_080270a0;
  *(undefined2 *)(DWORD_080270a0 + 1) = 0x18;
  *(undefined1 *)dVar4 = 1;
  uVar3 = FUN_08013548(param_1);
  *(undefined2 *)(extraout_r3 + 7) = uVar3;
  dVar4 = DWORD_080270a8;
  if (*(char *)(DWORD_080270a4 + 8) == '\x01') {
    dVar4 = DWORD_080270a8 - 0x60;
  }
  *(dword *)(extraout_r3 + 0x13) = dVar4;
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

