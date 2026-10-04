/**
 * @brief fun_08015a38
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015a38, Ghidra name FUN_08015a38, 46 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015a38(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  if (param_1 == 1) {
    uVar2 = *(ushort *)(DAT_08015a68 + 8) & 0xff;
  }
  else if (param_1 == 2) {
    uVar2 = (ushort)*(byte *)(DAT_08015a68 + 10);
  }
  else {
    uVar2 = *(ushort *)(DAT_08015a68 + 8) >> 8;
  }
  FUN_08000850(DAT_08015a70,&DAT_08015a6c,uVar2);
  iVar1 = DAT_08015a70;
  *(undefined4 *)(DAT_08015a70 + -0xe) = 4;
  *(undefined1 *)(iVar1 + 4) = 0;
  return;
}

