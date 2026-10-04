/**
 * @brief fun_080201e8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080201e8, Ghidra name FUN_080201e8, 46 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080201e8(void)

{
  if (*DAT_08020218 != '\x01') {
    return 0;
  }
  if (*(char *)(DAT_0802021c + 0x11) == '\x02') {
    *(undefined1 *)(DAT_08020220 + 4) = 5;
    FUN_0800d650(3);
  }
  else {
    FUN_08003aec(1);
  }
  return 1;
}

