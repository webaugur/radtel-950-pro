/**
 * @brief fun_080162d0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080162d0, Ghidra name FUN_080162d0, 50 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080162d0(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  puVar2 = DAT_08016304;
  *(undefined2 *)(DAT_08016304 + 1) = 5;
  *puVar2 = 2;
  *(undefined4 *)(puVar2 + 0xf) = DAT_08016308;
  iVar3 = DAT_0801630c;
  if (4 < *(byte *)(DAT_0801630c + 8)) {
    *(undefined1 *)(DAT_0801630c + 8) = 4;
  }
  *(ushort *)(puVar2 + 7) = (ushort)*(byte *)(iVar3 + 8);
  iVar3 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (uVar1 < 3) {
    *(ushort *)(iVar3 + 9) = uVar1;
    *(undefined2 *)(iVar3 + -4) = 0;
    return;
  }
  *(undefined2 *)(iVar3 + 9) = 3;
  *(ushort *)(iVar3 + -4) = uVar1 - 3;
  return;
}

