/**
 * @brief fun_080165ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080165ac, Ghidra name FUN_080165ac, 50 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080165ac(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  FUN_08001016(PTR_DAT_080165e0,0x17);
  puVar2 = PTR_DAT_080165e0;
  *(undefined2 *)(PTR_DAT_080165e0 + 1) = 5;
  *puVar2 = 1;
  *(undefined **)(puVar2 + 0x13) = PTR_DAT_080165e4;
  *(ushort *)(puVar2 + 7) = (ushort)(byte)PTR_DAT_080165e8[0x43];
  iVar3 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (uVar1 < 3) {
    *(ushort *)(iVar3 + 9) = uVar1;
    *(undefined2 *)(iVar3 + -4) = 0;
    return;
  }
  *(undefined2 *)(iVar3 + 9) = 3;
  *(ushort *)(iVar3 + -4) = uVar1 - 3;
  return;
}

