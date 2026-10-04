/**
 * @brief fun_08016b54
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016b54, Ghidra name FUN_08016b54, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016b54(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_08016b98;
  *(undefined2 *)(PTR_DAT_08016b98 + 1) = 2;
  *puVar2 = 1;
  *(ushort *)(puVar2 + 7) =
       (ushort)(((uint)(byte)PTR_DAT_08016b9c[(uint)(byte)PTR_DAT_08016b9c[0xfa] * 0x20 + 0x27f] <<
                0x1d) >> 0x1f);
  puVar4 = PTR_DAT_08016ba4;
  if (PTR_DAT_08016ba0[8] == '\x01') {
    puVar4 = PTR_DAT_08016ba4 + -8;
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

