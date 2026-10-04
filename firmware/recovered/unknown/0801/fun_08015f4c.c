/**
 * @brief fun_08015f4c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015f4c, Ghidra name FUN_08015f4c, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015f4c(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_08015f8c;
  if (PTR_DAT_08015f88[6] == '\0') {
    *(undefined2 *)(PTR_DAT_08015f8c + 1) = 99;
  }
  else {
    *(undefined2 *)(PTR_DAT_08015f8c + 1) = 0x3de;
    PTR_DAT_08015f90[1] = 0;
  }
  *puVar2 = 2;
  *(undefined4 *)(puVar2 + 0xf) = DAT_08015f94;
  puVar2[0xd] = 1;
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

