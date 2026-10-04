/**
 * @brief fun_080231e8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080231e8, Ghidra name FUN_080231e8, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080231e8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0802322c;
  iVar2 = DAT_0802322c + (uint)*(byte *)(DAT_0802322c + 0xfa) * 0x58;
  if (*(char *)(iVar2 + 0x140) == '\0') {
    uVar3 = *(undefined4 *)(iVar2 + 0x110);
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0x11c);
  }
  FUN_08023444(uVar3,DAT_0802322c + (uint)*(byte *)(DAT_0802322c + 0xfa) * 0x24 + 0x2d0,8);
  FUN_080105cc(*(undefined1 *)(iVar1 + 0xfa));
  return;
}

