/**
 * @brief fun_080170e4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080170e4, Ghidra name FUN_080170e4, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080170e4(void)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_0800e0dc();
  puVar3 = PTR_DAT_08017118;
  *(undefined2 *)(PTR_DAT_08017118 + 1) = 9;
  *puVar3 = 1;
  puVar4 = PTR_DAT_0801711c;
  *(ushort *)(puVar3 + 7) = (ushort)(byte)PTR_DAT_0801711c[2];
  puVar5 = PTR_DAT_08017120;
  if (puVar4[8] == '\x01') {
    puVar5 = PTR_DAT_08017120 + -0x24;
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

