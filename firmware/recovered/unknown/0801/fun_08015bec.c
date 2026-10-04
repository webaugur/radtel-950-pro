/**
 * @brief fun_08015bec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015bec, Ghidra name FUN_08015bec, 46 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015bec(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  iVar1 = DAT_08015c24;
  if (param_1 == 1) {
    uVar3 = *(ushort *)(DAT_08015c1c + 0xc) & 0xff;
  }
  else if (param_1 == 2) {
    uVar3 = (ushort)*(byte *)(DAT_08015c1c + 0xe);
  }
  else {
    uVar3 = *(ushort *)(DAT_08015c1c + 0xc) >> 8;
  }
  iVar2 = FUN_08000850(DAT_08015c24,&DAT_08015c20,uVar3);
  *(int *)(DAT_08015c24 + -0xe) = iVar2;
  *(undefined1 *)(iVar2 + iVar1) = 0;
  return;
}

