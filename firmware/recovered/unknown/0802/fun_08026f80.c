/**
 * @brief fun_08026f80
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026f80, Ghidra name FUN_08026f80, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08026f80(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  dword dVar3;
  
  dVar3 = DWORD_08026fa4;
  if (DAT_0000000f == '\x01') {
    dVar3 = DWORD_08026fa4 - 0xc;
  }
  *(dword *)(param_2 + 0x13) = dVar3;
  iVar2 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (2 < uVar1) {
    *(undefined2 *)(iVar2 + 9) = 3;
    *(ushort *)(iVar2 + -4) = uVar1 - 3;
    return;
  }
  *(ushort *)(iVar2 + 9) = uVar1;
  *(undefined2 *)(iVar2 + -4) = 0;
  return;
}

