/**
 * @brief fun_0801df58
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801df58, Ghidra name FUN_0801df58, 156 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801df58(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  
  iVar1 = DAT_0801dff8;
  iVar2 = *(int *)(DAT_0801dff4 + 3);
  *(char *)(DAT_0801dff8 + (uint)*(byte *)(DAT_0801dff8 + 0xfa) * 0x58 + 0x133) = (char)iVar2;
  uVar3 = (uint)*(byte *)(iVar1 + 0xfa);
  if (*(char *)(iVar1 + uVar3 * 0x58 + 0x130) == '\x01') {
    iVar4 = iVar1 + uVar3 * 0x20;
    bVar5 = *(byte *)(iVar4 + 0x27f) & 0xcf;
    *(byte *)(iVar4 + 0x27f) = bVar5;
    if (iVar2 != 0) {
      *(byte *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x20 + 0x27f) = bVar5 | (byte)(iVar2 << 4);
    }
  }
  else {
    iVar4 = iVar1 + uVar3 * 0x24;
    bVar5 = *(byte *)(iVar4 + 0x2e1) & 0xcf;
    *(byte *)(iVar4 + 0x2e1) = bVar5;
    if (iVar2 != 0) {
      *(byte *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x24 + 0x2e1) = bVar5 | (byte)(iVar2 << 4);
    }
  }
  FUN_080083cc();
  FUN_08018038();
  FUN_0800cb78(*(undefined1 *)(iVar1 + 0xfa),1);
  return 1;
}

