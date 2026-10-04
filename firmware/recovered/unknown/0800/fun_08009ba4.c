/**
 * @brief fun_08009ba4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009ba4, Ghidra name FUN_08009ba4, 110 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009ba4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_08009c1c;
  if ((*(char *)(DAT_08009c14 + 0x4a) == -0x5b) && (*(byte *)(DAT_08009c1c + 0xfa) == 2)) {
    iVar2 = FUN_0800948c(**(undefined4 **)(DAT_08009c18 + 0x1c),
                         *(undefined1 *)(DAT_08009c1c + 0x1f8));
    if ((iVar2 == 1) && (iVar2 = FUN_08008d1c(), iVar2 == 1)) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0800948c(**(undefined4 **)(DAT_08009c18 + 0x1c),
                         *(undefined1 *)
                          (DAT_08009c1c + (uint)*(byte *)(DAT_08009c1c + 0xfa) * 0x58 + 0x148));
    if ((iVar1 == 1) &&
       ((iVar1 = FUN_08008d1c(), iVar1 == 1 &&
        (*(char *)((uint)*(byte *)(iVar2 + 0x10b) + DAT_08009c14 + 0xf) == '\x01')))) {
      return 0;
    }
  }
  return 1;
}

