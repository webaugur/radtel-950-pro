/**
 * @brief fun_08016dfc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016dfc, Ghidra name FUN_08016dfc, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016dfc(void)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  
  FUN_0800e0dc();
  puVar3 = PTR_DAT_08016e24;
  *(undefined2 *)(PTR_DAT_08016e24 + 1) = 0x1b;
  *puVar3 = 1;
  *(ushort *)(puVar3 + 7) = (ushort)(byte)PTR_DAT_08016e28[6];
  *(undefined **)(puVar3 + 0x13) = PTR_DAT_08016e2c;
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

