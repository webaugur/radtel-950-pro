/**
 * @brief fun_08016af0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016af0, Ghidra name FUN_08016af0, 66 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016af0(void)

{
  ushort uVar1;
  int iVar2;
  
  FUN_080160b8();
  if ((*(uint *)(PTR_DAT_08016b34 + (uint)(byte)PTR_DAT_08016b34[0xfa] * 0x58 + 0x118) < 0xd3) &&
     ((*PTR_DAT_08016b3c == '\0' ||
      ((uint)(byte)PTR_DAT_08016b34[0xfa] != (uint)(byte)PTR_DAT_08016b3c[0x1c])))) {
    *(short *)(PTR_DAT_08016b38 + 7) =
         (short)*(uint *)(PTR_DAT_08016b34 + (uint)(byte)PTR_DAT_08016b34[0xfa] * 0x58 + 0x118);
  }
  else {
    *(undefined2 *)(PTR_DAT_08016b38 + 7) = 0;
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

