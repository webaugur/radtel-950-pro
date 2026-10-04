/**
 * @brief fun_0801697c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801697c, Ghidra name FUN_0801697c, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801697c(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  FUN_08001016(DAT_080169b4,0x17);
  puVar2 = DAT_080169b4;
  *(undefined2 *)(DAT_080169b4 + 1) = 0xf;
  *puVar2 = 2;
  *(ushort *)(puVar2 + 7) =
       (ushort)*(byte *)(DAT_080169b8 + 4) + (*(byte *)(DAT_080169b8 + 4) / 0xf) * -0xf;
  *(undefined4 *)(puVar2 + 0xf) = DAT_080169bc;
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

