/**
 * @brief fun_08016c18
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016c18, Ghidra name FUN_08016c18, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016c18(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_08016c4c;
  *(undefined2 *)(PTR_DAT_08016c4c + 1) = 3;
  *puVar2 = 1;
  puVar3 = PTR_DAT_08016c50;
  *(ushort *)(puVar2 + 7) = (ushort)(byte)PTR_DAT_08016c50[10];
  puVar5 = PTR_DAT_08016c54;
  if (puVar3[8] == '\x01') {
    puVar5 = PTR_DAT_08016c54 + -0xc;
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

