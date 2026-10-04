/**
 * @brief fun_08016f6c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016f6c, Ghidra name FUN_08016f6c, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016f6c(void)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  FUN_0800e0dc();
  puVar3 = DAT_08016f94;
  *(undefined2 *)(DAT_08016f94 + 1) = 9;
  *puVar3 = 2;
  *(ushort *)(puVar3 + 7) = (ushort)*(byte *)(DAT_08016f98 + 5);
  *(undefined4 *)(puVar3 + 0xf) = DAT_08016f9c;
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

