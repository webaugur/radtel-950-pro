/**
 * @brief fun_08015c9c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015c9c, Ghidra name FUN_08015c9c, 72 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015c9c(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_08015ce4;
  *(undefined2 *)(PTR_DAT_08015ce4 + 1) = 2;
  *puVar2 = 1;
  *(ushort *)(puVar2 + 7) =
       (ushort)(byte)PTR_DAT_08015ce8[(uint)(byte)PTR_DAT_08015ce8[0xfa] * 0x58 + 0x131];
  puVar4 = PTR_DAT_08015cf0;
  if (PTR_DAT_08015cec[8] == '\x01') {
    puVar4 = PTR_DAT_08015cf0 + -8;
  }
  *(undefined **)(puVar2 + 0x13) = puVar4;
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

