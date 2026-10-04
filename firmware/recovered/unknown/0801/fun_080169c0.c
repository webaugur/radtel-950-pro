/**
 * @brief fun_080169c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080169c0, Ghidra name FUN_080169c0, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080169c0(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_080169f4;
  *(undefined2 *)(PTR_DAT_080169f4 + 1) = 4;
  *puVar2 = 1;
  puVar3 = PTR_DAT_080169f8;
  *(ushort *)(puVar2 + 7) = (ushort)(byte)PTR_DAT_080169f8[1];
  puVar5 = PTR_DAT_080169fc;
  if (puVar3[8] == '\x01') {
    puVar5 = PTR_DAT_080169fc + -0x10;
  }
  *(undefined **)(puVar2 + 0x13) = puVar5;
  iVar4 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (2 < uVar1) {
    *(undefined2 *)(iVar4 + 9) = 3;
    *(ushort *)(iVar4 + -4) = uVar1 - 3;
    return;
  }
  *(ushort *)(iVar4 + 9) = uVar1;
  *(undefined2 *)(iVar4 + -4) = 0;
  return;
}

