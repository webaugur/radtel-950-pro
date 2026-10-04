/**
 * @brief fun_08016ff8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016ff8, Ghidra name FUN_08016ff8, 48 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016ff8(void)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  FUN_0800e0dc();
  puVar3 = DAT_08017028;
  *(undefined2 *)(DAT_08017028 + 1) = 0x5a;
  *puVar3 = 2;
  *(ushort *)(puVar3 + 7) =
       (ushort)*(byte *)(DAT_0801702c + 0x1b) + (*(byte *)(DAT_0801702c + 0x1b) / 0x5a) * -0x5a;
  *(undefined4 *)(puVar3 + 0xf) = DAT_08017030;
  iVar2 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (uVar1 < 3) {
    *(ushort *)(iVar2 + 9) = uVar1;
    *(undefined2 *)(iVar2 + -4) = 0;
    return;
  }
  *(undefined2 *)(iVar2 + 9) = 3;
  *(ushort *)(iVar2 + -4) = uVar1 - 3;
  return;
}

