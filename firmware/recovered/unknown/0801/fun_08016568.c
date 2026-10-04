/**
 * @brief fun_08016568
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016568, Ghidra name FUN_08016568, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016568(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  FUN_08001016(DAT_080165a0,0x17);
  puVar2 = DAT_080165a0;
  *(undefined2 *)(DAT_080165a0 + 1) = 0x25;
  *puVar2 = 2;
  *(ushort *)(puVar2 + 7) =
       (ushort)*(byte *)(DAT_080165a4 + 0x17) + (*(byte *)(DAT_080165a4 + 0x17) / 0x25) * -0x25;
  *(undefined4 *)(puVar2 + 0xf) = DAT_080165a8;
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

