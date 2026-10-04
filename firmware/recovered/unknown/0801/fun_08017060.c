/**
 * @brief fun_08017060
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017060, Ghidra name FUN_08017060, 54 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08017060(void)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  
  FUN_0800e0dc();
  puVar3 = PTR_DAT_08017098;
  *(undefined2 *)(PTR_DAT_08017098 + 1) = 0xe;
  *puVar3 = 1;
  *(ushort *)(puVar3 + 7) =
       (ushort)(byte)PTR_DAT_0801709c[(uint)(byte)PTR_DAT_0801709c[0xfa] * 0x24 + 0x2e3];
  *(undefined **)(puVar3 + 0x13) = PTR_DAT_080170a0;
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

