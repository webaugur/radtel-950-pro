/**
 * @brief fun_08016e30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016e30, Ghidra name FUN_08016e30, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016e30(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FUN_0800e0dc();
  puVar4 = DAT_08016e6c;
  *(undefined2 *)(DAT_08016e6c + 1) = 10;
  *puVar4 = 2;
  *(undefined4 *)(puVar4 + 0xf) = DAT_08016e70;
  bVar1 = *(byte *)((uint)*(byte *)(DAT_08016e74 + 0xfa) + DAT_08016e78);
  *(ushort *)(puVar4 + 7) = (ushort)bVar1 + (bVar1 / 10) * -10;
  puVar4[0xd] = 1;
  iVar3 = DAT_08016d14;
  uVar2 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar2;
  if (uVar2 < 3) {
    *(ushort *)(iVar3 + 9) = uVar2;
    *(undefined2 *)(iVar3 + -4) = 0;
    return;
  }
  *(undefined2 *)(iVar3 + 9) = 3;
  *(ushort *)(iVar3 + -4) = uVar2 - 3;
  return;
}

