/**
 * @brief fun_080097ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080097ac, Ghidra name FUN_080097ac, 54 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080097ac(void)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0;
      (uVar1 < *(ushort *)(DAT_080097e4 + 4) && (*(char *)(DAT_080097e4 + uVar1 + 0x10) != 'G'));
      uVar1 = uVar1 + 1) {
  }
  if ((7 < *(ushort *)(DAT_080097e4 + 4) - uVar1) &&
     (iVar2 = FUN_08000e06(DAT_080097e8,DAT_080097e4 + uVar1 + 0x11,7), iVar2 == 0)) {
    return 1;
  }
  return 0;
}

