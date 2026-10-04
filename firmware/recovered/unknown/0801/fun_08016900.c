/**
 * @brief fun_08016900
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016900, Ghidra name FUN_08016900, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016900(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  puVar2 = DAT_08016928;
  *(undefined2 *)(DAT_08016928 + 1) = 7;
  *puVar2 = 2;
  *(undefined4 *)(puVar2 + 0xf) = DAT_0801692c;
  *(ushort *)(puVar2 + 7) = (ushort)*(byte *)(DAT_08016930 + 0xc);
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

