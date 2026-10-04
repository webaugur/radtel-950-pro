/**
 * @brief fun_0801663c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801663c, Ghidra name FUN_0801663c, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801663c(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_08016664;
  *(undefined2 *)(PTR_DAT_08016664 + 1) = 2;
  *puVar2 = 1;
  *(ushort *)(puVar2 + 7) = (ushort)(byte)PTR_DAT_08016668[8];
  *(undefined **)(puVar2 + 0x13) = PTR_DAT_0801666c;
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

