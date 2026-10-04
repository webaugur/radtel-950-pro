/**
 * @brief fun_0801e9a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e9a0, Ghidra name FUN_0801e9a0, 162 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e9a0(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_0801ea44;
  uVar4 = (uint)*(byte *)(DAT_0801ea44 + 0xfa);
  bVar1 = (byte)*(undefined4 *)(DAT_0801ea48 + 3);
  if (*(char *)(DAT_0801ea44 + uVar4 * 0x58 + 0x130) == '\0') {
    iVar5 = DAT_0801ea44 + uVar4 * 0x24;
    bVar3 = *(byte *)(iVar5 + 0x2de) & 0xf0;
    *(byte *)(iVar5 + 0x2de) = bVar3;
    *(byte *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x24 + 0x2de) = bVar3 | bVar1;
  }
  else {
    iVar5 = DAT_0801ea44 + uVar4 * 0x20;
    bVar3 = *(byte *)(iVar5 + 0x27c) & 0xf0;
    *(byte *)(iVar5 + 0x27c) = bVar3;
    *(byte *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x20 + 0x27c) = bVar3 | bVar1;
  }
  iVar5 = iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58;
  bVar3 = *(byte *)(iVar5 + 0x137) & 0xf0;
  *(byte *)(iVar5 + 0x137) = bVar3;
  *(byte *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58 + 0x137) = bVar3 | bVar1;
  FUN_08018038();
  return 1;
}

