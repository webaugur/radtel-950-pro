/**
 * @brief fun_08015d2c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015d2c, Ghidra name FUN_08015d2c, 66 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015d2c(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  FUN_08001016(PTR_DAT_08015d70,0x17);
  puVar2 = PTR_DAT_08015d70;
  *(undefined2 *)(PTR_DAT_08015d70 + 1) = 2;
  *puVar2 = 1;
  *(ushort *)(puVar2 + 7) = (byte)PTR_DAT_08015d74[6] & 1;
  puVar4 = PTR_DAT_08015d7c;
  if (PTR_DAT_08015d78[8] == '\x01') {
    puVar4 = PTR_DAT_08015d7c + -8;
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

