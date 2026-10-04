/**
 * @brief fun_0801f150
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f150, Ghidra name FUN_0801f150, 46 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801f150(void)

{
  if (*(char *)(DAT_0801f180 + 6) == '\0') {
    if (((uint)*(ushort *)(DAT_0801f184 + 0x438) &
        1 << *(sbyte *)((uint)*(byte *)(DAT_0801f184 + 0xfa) + DAT_0801f180 + 0xd)) != 0) {
      return 1;
    }
  }
  else if (*(ushort *)(DAT_0801f184 + 0x438) != 0) {
    return 1;
  }
  return 0;
}

