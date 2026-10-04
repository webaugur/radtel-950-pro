/**
 * @brief fun_0800da50
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800da50, Ghidra name FUN_0800da50, 36 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800da50(void)

{
  int iVar1;
  
  iVar1 = DAT_0800da74;
  if (*(char *)(DAT_0800da74 + 0x28) == '\x01') {
    *(undefined1 *)(DAT_0800da74 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x2b) = 0;
    FUN_0800d944();
  }
  *(undefined1 *)(iVar1 + 0x29) = 0;
  *(undefined1 *)(iVar1 + 0x14) = 1;
  return;
}

