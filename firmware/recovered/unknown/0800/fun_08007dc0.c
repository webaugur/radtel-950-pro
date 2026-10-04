/**
 * @brief fun_08007dc0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007dc0, Ghidra name FUN_08007dc0, 64 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08007dc0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_08007e00 + (uint)*(byte *)(DAT_08007e00 + 0xfa) * 0x58;
  iVar2 = *(int *)(iVar1 + 0x110);
  if (*(char *)(iVar1 + 0x138) == '\x01') {
    *(int *)(iVar1 + 0x11c) = iVar2 + *(int *)(iVar1 + 0x13c);
    return;
  }
  if (*(char *)(iVar1 + 0x138) != '\x02') {
    *(int *)(iVar1 + 0x11c) = iVar2;
    return;
  }
  *(int *)(iVar1 + 0x11c) = iVar2 - *(int *)(iVar1 + 0x13c);
  return;
}

