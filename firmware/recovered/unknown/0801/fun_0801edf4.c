/**
 * @brief fun_0801edf4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801edf4, Ghidra name FUN_0801edf4, 114 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801edf4(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_0801ee68;
  uVar3 = (uint)*(byte *)(DAT_0801ee68 + 0xfa);
  bVar1 = (byte)*(undefined4 *)(DAT_0801ee6c + 3);
  if (*(char *)(DAT_0801ee68 + uVar3 * 0x58 + 0x130) == '\x01') {
    iVar4 = DAT_0801ee68 + uVar3 * 0x20;
    *(byte *)(iVar4 + 0x27e) = *(byte *)(iVar4 + 0x27e) & 0xf0 | bVar1;
  }
  else {
    iVar4 = DAT_0801ee68 + uVar3 * 0x24;
    *(byte *)(iVar4 + 0x2e0) = *(byte *)(iVar4 + 0x2e0) & 0xf0 | bVar1;
  }
  *(byte *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58 + 0x132) = bVar1;
  FUN_08018038();
  FUN_0800cb78(*(undefined1 *)(iVar2 + 0xfa),1);
  return 1;
}

