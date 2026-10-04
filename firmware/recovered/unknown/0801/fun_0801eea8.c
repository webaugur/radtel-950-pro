/**
 * @brief fun_0801eea8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801eea8, Ghidra name FUN_0801eea8, 112 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801eea8(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar1 = DAT_0801ef18;
  iVar3 = DAT_0801ef18 + (uint)*(byte *)(DAT_0801ef18 + 0xfa) * 0x24;
  bVar2 = *(byte *)(iVar3 + 0x2de) & 0xf;
  *(byte *)(iVar3 + 0x2de) = bVar2;
  if (*(int *)(DAT_0801ef1c + 3) == 1) {
    *(byte *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x24 + 0x2de) = bVar2 | 0x10;
  }
  else if (*(int *)(DAT_0801ef1c + 3) == 2) {
    *(byte *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x24 + 0x2de) = bVar2 | 0x20;
  }
  FUN_0801b564();
  FUN_080083cc();
  FUN_08018038();
  FUN_0800cb78(*(undefined1 *)(iVar1 + 0xfa),1);
  return 1;
}

