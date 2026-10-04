/**
 * @brief fun_08015f98
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015f98, Ghidra name FUN_08015f98, 94 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015f98(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  FUN_08001016(PTR_DAT_08015ff8,0x17);
  puVar2 = PTR_DAT_08015ff8;
  *(undefined2 *)(PTR_DAT_08015ff8 + 1) = 2;
  *puVar2 = 1;
  iVar3 = FUN_080090ec((ushort)(byte)PTR_DAT_08015ffc[1] * 99 + *(short *)(PTR_DAT_08015ffc + 2),1);
  if (iVar3 == 0) {
    *(undefined2 *)(puVar2 + 7) = 0;
  }
  else {
    *(undefined2 *)(puVar2 + 7) = 1;
  }
  if (PTR_DAT_08016000[8] == '\x01') {
    puVar4 = PTR_DAT_08015ffc + 0x58;
  }
  else {
    puVar4 = PTR_DAT_08015ffc + 0x60;
  }
  *(undefined **)(puVar2 + 0x13) = puVar4;
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

