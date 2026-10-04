/**
 * @brief fun_080170b0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080170b0, Ghidra name FUN_080170b0, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080170b0(void)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  FUN_0800e0dc();
  puVar3 = DAT_080170d8;
  *(undefined2 *)(DAT_080170d8 + 1) = 0x10;
  *puVar3 = 2;
  *(ushort *)(puVar3 + 7) = (ushort)*DAT_080170dc;
  *(undefined4 *)(puVar3 + 0xf) = DAT_080170e0;
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

