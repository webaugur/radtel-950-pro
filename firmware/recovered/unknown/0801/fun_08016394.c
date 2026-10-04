/**
 * @brief fun_08016394
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016394, Ghidra name FUN_08016394, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016394(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  FUN_08001016(DAT_080163dc,0x17);
  puVar2 = DAT_080163dc;
  *(undefined2 *)(DAT_080163dc + 1) = 4;
  *puVar2 = 2;
  *(ushort *)(puVar2 + 7) =
       *(byte *)(DAT_080163e0 + (uint)*(byte *)(DAT_080163e0 + 0xfa) * 0x58 + 0x133) & 3;
  *(undefined4 *)(puVar2 + 0xf) = DAT_080163e4;
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

