/**
 * @brief fun_08016ca0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016ca0, Ghidra name FUN_08016ca0, 102 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016ca0(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  puVar2 = DAT_08016cdc;
  *(undefined2 *)(DAT_08016cdc + 1) = 9;
  *puVar2 = 2;
  *(ushort *)(puVar2 + 7) =
       (ushort)*(byte *)(DAT_08016ce0 + (uint)*(byte *)(DAT_08016ce0 + 0xfa) * 0x58 + 0x134);
  *(undefined4 *)(puVar2 + 0xf) = DAT_08016ce4;
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

