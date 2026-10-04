/**
 * @brief fun_08016d24
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016d24, Ghidra name FUN_08016d24, 54 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016d24(void)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  puVar3 = PTR_DAT_08016d5c;
  *(undefined2 *)(PTR_DAT_08016d5c + 1) = 3;
  *puVar3 = 1;
  *(ushort *)(puVar3 + 7) = (ushort)(byte)PTR_DAT_08016d60[3];
  puVar4 = PTR_DAT_08016d68;
  if (PTR_DAT_08016d64[8] == '\x01') {
    puVar4 = PTR_DAT_08016d68 + -0xc;
  }
  *(undefined **)(puVar3 + 0x13) = puVar4;
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

