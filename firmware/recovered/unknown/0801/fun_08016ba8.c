/**
 * @brief fun_08016ba8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016ba8, Ghidra name FUN_08016ba8, 90 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016ba8(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_0800e0dc();
  puVar3 = PTR_DAT_08016c0c;
  puVar2 = PTR_DAT_08016c08;
  if (PTR_DAT_08016c04[6] == '\0') {
    *(undefined2 *)(PTR_DAT_08016c08 + 1) = 99;
    puVar3[1] = PTR_DAT_08016c04[*(byte *)(DAT_08016c14 + 0xfa) + 0xd];
  }
  else {
    *(undefined2 *)(PTR_DAT_08016c08 + 1) = 0x3de;
    puVar3[1] = 0;
  }
  *puVar2 = 2;
  *(undefined4 *)(puVar2 + 0xf) = DAT_08016c10;
  puVar2[0xd] = 1;
  if (*(ushort *)(puVar2 + 1) < *(ushort *)(puVar3 + 2)) {
    *(undefined2 *)(puVar3 + 2) = 0;
  }
  *(undefined2 *)(puVar2 + 7) = *(undefined2 *)(puVar3 + 2);
  iVar4 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (uVar1 < 3) {
    *(ushort *)(iVar4 + 9) = uVar1;
    *(undefined2 *)(iVar4 + -4) = 0;
    return;
  }
  *(undefined2 *)(iVar4 + 9) = 3;
  *(ushort *)(iVar4 + -4) = uVar1 - 3;
  return;
}

