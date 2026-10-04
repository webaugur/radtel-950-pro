/**
 * @brief fun_080158d0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080158d0, Ghidra name FUN_080158d0, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080158d0(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_0800e0dc();
  puVar2 = DAT_08015904;
  *(undefined2 *)(DAT_08015904 + 1) = 3;
  *puVar2 = 1;
  iVar3 = DAT_08015908;
  *(ushort *)(puVar2 + 7) = (ushort)*(byte *)(DAT_08015908 + 0x11);
  iVar4 = DAT_0801590c;
  if (*(char *)(iVar3 + 8) == '\x01') {
    iVar4 = DAT_0801590c + -0xc;
  }
  *(int *)(puVar2 + 0x13) = iVar4;
  iVar3 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (2 < uVar1) {
    *(undefined2 *)(iVar3 + 9) = 3;
    *(ushort *)(iVar3 + -4) = uVar1 - 3;
    return;
  }
  *(ushort *)(iVar3 + 9) = uVar1;
  *(undefined2 *)(iVar3 + -4) = 0;
  return;
}

