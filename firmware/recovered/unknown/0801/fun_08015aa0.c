/**
 * @brief fun_08015aa0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015aa0, Ghidra name FUN_08015aa0, 50 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015aa0(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  puVar2 = DAT_08015ad4;
  *(undefined2 *)(DAT_08015ad4 + 1) = 6;
  *puVar2 = 2;
  *(ushort *)(puVar2 + 7) =
       (ushort)*(byte *)(DAT_08015ad8 + 0x78) + (*(byte *)(DAT_08015ad8 + 0x78) / 6) * -6;
  *(undefined4 *)(puVar2 + 0xf) = DAT_08015adc;
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

