/**
 * @brief fun_0801ca8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ca8c, Ghidra name FUN_0801ca8c, 82 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ca8c(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  FUN_0800e0dc();
  FUN_08001016(DAT_0801cae0,0x17);
  puVar3 = DAT_0801cae0;
  *(undefined2 *)(DAT_0801cae0 + 1) = 0x10;
  *puVar3 = 2;
  if (param_1 == 0) {
    *(ushort *)(puVar3 + 7) = (ushort)*(byte *)(DAT_0801cae4 + 0x17);
  }
  else if (param_1 == 1) {
    *(ushort *)(puVar3 + 7) = (ushort)*(byte *)(DAT_0801cae4 + 0x31);
  }
  else if (param_1 == 2) {
    *(ushort *)(puVar3 + 7) = (ushort)*(byte *)(DAT_0801cae4 + 0x38);
  }
  *(undefined4 *)(puVar3 + 0xf) = DAT_0801cae8;
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

