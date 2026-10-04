/**
 * @brief fun_08016438
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016438, Ghidra name FUN_08016438, 50 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016438(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  FUN_08001016(DAT_0801646c,0x17);
  puVar2 = DAT_0801646c;
  *(undefined2 *)(DAT_0801646c + 1) = 0xf;
  *puVar2 = 2;
  *(undefined4 *)(puVar2 + 0xf) = DAT_08016470;
  *(undefined2 *)(puVar2 + 7) = 0;
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

