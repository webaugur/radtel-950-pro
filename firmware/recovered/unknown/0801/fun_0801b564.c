/**
 * @brief fun_0801b564
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b564, Ghidra name FUN_0801b564, 74 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b564(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0801b5b0;
  *(undefined1 *)(DAT_0801b5b0 + (uint)*(byte *)(DAT_0801b5b0 + 0xfa) * 0x58 + 0x140) = 0;
  iVar1 = iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58;
  *(int *)(iVar1 + 0x128) = iVar1 + 0x110;
  iVar2 = iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58;
  *(int *)(iVar2 + 300) = iVar2 + 0x11c;
  return;
}

