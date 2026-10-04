/**
 * @brief fun_08016790
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016790, Ghidra name FUN_08016790, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016790(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  FUN_08001016(PTR_DAT_080167d8,0x17);
  puVar2 = PTR_DAT_080167d8;
  *(undefined2 *)(PTR_DAT_080167d8 + 1) = 3;
  *puVar2 = 1;
  *(ushort *)(puVar2 + 7) =
       (ushort)(byte)PTR_DAT_080167dc[0x12] + ((byte)PTR_DAT_080167dc[0x12] / 3) * -3;
  puVar4 = PTR_DAT_080167e4;
  if (PTR_DAT_080167e0[8] == '\x01') {
    puVar4 = PTR_DAT_080167e4 + -0xc;
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

