/**
 * @brief fun_08016f2c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016f2c, Ghidra name FUN_08016f2c, 54 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016f2c(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_080160b8();
  uVar3 = *(uint *)(DAT_08016f64 + (uint)*(byte *)(DAT_08016f64 + 0xfa) * 0x58 + 0x124);
  if (uVar3 < 0xd3) {
    *(short *)(DAT_08016f68 + 7) = (short)uVar3;
  }
  else {
    *(undefined2 *)(DAT_08016f68 + 7) = 0;
  }
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

