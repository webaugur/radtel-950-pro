/**
 * @brief fun_0801ea4c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ea4c, Ghidra name FUN_0801ea4c, 130 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801ea4c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar1 = DAT_0801ead0;
  uVar2 = (uint)*(byte *)(DAT_0801ead0 + 0xfa);
  iVar4 = *(int *)(DAT_0801ead4 + 3);
  if (*(char *)(DAT_0801ead0 + uVar2 * 0x58 + 0x130) == '\0') {
    iVar3 = DAT_0801ead0 + uVar2 * 0x24;
    bVar5 = *(byte *)(iVar3 + 0x2e0) & 0xf;
    *(byte *)(iVar3 + 0x2e0) = bVar5;
    *(byte *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x24 + 0x2e0) = bVar5 | (byte)(iVar4 << 4);
  }
  else {
    iVar3 = DAT_0801ead0 + uVar2 * 0x20;
    bVar5 = *(byte *)(iVar3 + 0x27e) & 0xf;
    *(byte *)(iVar3 + 0x27e) = bVar5;
    *(byte *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x20 + 0x27e) = bVar5 | (byte)(iVar4 << 4);
  }
  FUN_080083cc();
  FUN_08018038();
  FUN_0800cb78(*(undefined1 *)(iVar1 + 0xfa),1);
  return 1;
}

