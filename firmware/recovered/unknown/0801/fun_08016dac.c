/**
 * @brief fun_08016dac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016dac, Ghidra name FUN_08016dac, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016dac(void)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  puVar3 = PTR_DAT_08016dec;
  *(undefined2 *)(PTR_DAT_08016dec + 1) = 5;
  *puVar3 = 1;
  *(ushort *)(puVar3 + 7) =
       (ushort)(byte)PTR_DAT_08016df0[0x1a] + ((byte)PTR_DAT_08016df0[0x1a] / 5) * -5;
  puVar4 = PTR_DAT_08016df8;
  if (PTR_DAT_08016df4[8] == '\x01') {
    puVar4 = PTR_DAT_08016df8 + -0x14;
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

