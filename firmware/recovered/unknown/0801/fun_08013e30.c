/**
 * @brief fun_08013e30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013e30, Ghidra name FUN_08013e30, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08013e30(uint param_1)

{
  if (*(char *)(DAT_08013e54 + 0x51) == '\x01') {
    return 0;
  }
  if (*(byte *)(DAT_08013e58 + 0xfa) == param_1) {
    return 0x105;
  }
  return 0;
}

