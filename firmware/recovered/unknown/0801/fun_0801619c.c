/**
 * @brief fun_0801619c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801619c, Ghidra name FUN_0801619c, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801619c(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_080161d4;
  *(undefined2 *)(PTR_DAT_080161d4 + 1) = 5;
  *puVar2 = 1;
  *(ushort *)(puVar2 + 7) = (ushort)(byte)PTR_DAT_080161d8[0x29];
  puVar4 = PTR_DAT_080161e0;
  if (PTR_DAT_080161dc[8] == '\x01') {
    puVar4 = PTR_DAT_080161e0 + -0x14;
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

