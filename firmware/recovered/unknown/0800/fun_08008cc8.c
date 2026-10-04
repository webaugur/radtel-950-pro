/**
 * @brief fun_08008cc8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008cc8, Ghidra name FUN_08008cc8, 72 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08008cc8(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_1 & 0xff);
  if ((*(char *)(DAT_08008d10 + 0x4a) == -0x5b) && (param_2 == 2)) {
    if (*(char *)(DAT_08008d14 + 6) == '\0') {
      if ((*(ushort *)(DAT_08008d18 + 0x436) & uVar1) != 0) {
        return 1;
      }
    }
    else if (*(ushort *)(DAT_08008d18 + 0x436) != 0) {
      return 1;
    }
  }
  else if (*(char *)(DAT_08008d14 + 6) == '\0') {
    if ((*(ushort *)(DAT_08008d18 + 0xfe) & uVar1) != 0) {
      return 1;
    }
  }
  else if (*(ushort *)(DAT_08008d18 + 0xfe) != 0) {
    return 1;
  }
  return 0;
}

