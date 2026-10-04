/**
 * @brief fun_08015b34
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015b34, Ghidra name FUN_08015b34, 48 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015b34(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_08015b64;
  *(undefined2 *)(PTR_DAT_08015b64 + 1) = 3;
  *puVar2 = 1;
  *(ushort *)(puVar2 + 7) =
       (ushort)(byte)PTR_DAT_08015b68[0x1c] + ((byte)PTR_DAT_08015b68[0x1c] / 3) * -3;
  *(undefined **)(puVar2 + 0x13) = PTR_DAT_08015b6c;
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

