/**
 * @brief fun_08015cf4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015cf4, Ghidra name FUN_08015cf4, 46 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015cf4(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  FUN_0800e0dc();
  uVar4 = FUN_08012b74();
  puVar2 = DAT_08015d24;
  *(undefined2 *)(DAT_08015d24 + 1) = uVar4;
  *puVar2 = 2;
  uVar4 = FUN_08012dcc();
  *(undefined2 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)(puVar2 + 0xf) = DAT_08015d28;
  puVar2[0xd] = 1;
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

