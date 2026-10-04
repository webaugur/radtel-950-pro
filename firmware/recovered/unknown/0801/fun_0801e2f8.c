/**
 * @brief fun_0801e2f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e2f8, Ghidra name FUN_0801e2f8, 116 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e2f8(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_0801e36c;
  uVar4 = (uint)*(byte *)(DAT_0801e36c + 0xfa);
  bVar1 = (byte)*(undefined4 *)(DAT_0801e370 + 3);
  if (*(char *)(DAT_0801e36c + uVar4 * 0x58 + 0x130) == '\0') {
    iVar5 = DAT_0801e36c + uVar4 * 0x24;
    bVar3 = *(byte *)(iVar5 + 0x2e1) & 0xfc;
    *(byte *)(iVar5 + 0x2e1) = bVar3;
    *(byte *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x24 + 0x2e1) = bVar3 | bVar1 & 3;
  }
  else {
    iVar5 = DAT_0801e36c + uVar4 * 0x20;
    *(byte *)(iVar5 + 0x27f) = *(byte *)(iVar5 + 0x27f) & 0xfc | bVar1 & 3;
  }
  FUN_080083cc();
  FUN_08018038();
  FUN_0800cb78(*(undefined1 *)(iVar2 + 0xfa),1);
  return 1;
}

