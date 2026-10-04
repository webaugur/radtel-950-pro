/**
 * @brief fun_08016d6c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016d6c, Ghidra name FUN_08016d6c, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016d6c(void)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_0800e0dc();
  puVar3 = PTR_DAT_08016da0;
  *(undefined2 *)(PTR_DAT_08016da0 + 1) = 10;
  *puVar3 = 1;
  puVar4 = PTR_DAT_08016da4;
  *(ushort *)(puVar3 + 7) = (ushort)(byte)*PTR_DAT_08016da4;
  puVar5 = PTR_DAT_08016da8;
  if (puVar4[8] == '\x01') {
    puVar5 = PTR_DAT_08016da8 + -0x28;
  }
  *(undefined **)(puVar3 + 0x13) = puVar5;
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

