/**
 * @brief fun_0801ef20
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ef20, Ghidra name FUN_0801ef20, 144 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801ef20(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = DAT_0801efb0;
  *(undefined1 *)(*(int *)(DAT_0801efb0 + 4) + DAT_0801efb0 + 0x12) = 0;
  iVar4 = FUN_08000d3a();
  iVar3 = DAT_0801efb8;
  iVar4 = *(int *)(DAT_0801efb4 + (*(int *)(iVar2 + 4) + -1) * 4) * iVar4;
  *(int *)(DAT_0801efb8 + (uint)*(byte *)(DAT_0801efb8 + 0xfa) * 0x58 + 0x13c) = iVar4;
  bVar1 = *(byte *)(iVar3 + 0xfa);
  uVar5 = ((iVar4 + 0x14U) / 0x32) * 0x32;
  *(uint *)(iVar3 + (uint)bVar1 * 0x58 + 0x13c) = uVar5;
  FUN_0801958c(uVar5 / 10,iVar3 + (uint)bVar1 * 0x24 + 0x2e4,7);
  if (*(char *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x58 + 0x130) == '\0') {
    FUN_0801b564();
    FUN_0801c9a0();
  }
  FUN_08018038();
  return 1;
}

