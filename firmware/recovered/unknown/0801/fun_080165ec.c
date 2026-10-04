/**
 * @brief fun_080165ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080165ec, Ghidra name FUN_080165ec, 50 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080165ec(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  FUN_08001016(PTR_DAT_08016620,0x17);
  puVar2 = PTR_DAT_08016620;
  *(undefined2 *)(PTR_DAT_08016620 + 1) = 6;
  *puVar2 = 1;
  *(undefined **)(puVar2 + 0x13) = PTR_DAT_08016624;
  *(ushort *)(puVar2 + 7) = (ushort)(byte)PTR_DAT_08016628[0x96];
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

