/**
 * @brief fun_0800d550
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d550, Ghidra name FUN_0800d550, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800d550(void)

{
  char in_ZR;
  
  if (in_ZR != '\0') {
    FUN_080152cc(0xb9,0x3b,0);
    FUN_08000fd2(DAT_0800d5a0 + 0xe,0x22);
  }
  FUN_08020324(0);
  if (*DAT_0800d5a4 != '\0') {
    return 3;
  }
  return 5;
}

