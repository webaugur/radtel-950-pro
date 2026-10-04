/**
 * @brief fun_0800d544
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d544, Ghidra name FUN_0800d544, 46 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800d544(void)

{
  undefined4 in_r3;
  
  if (*DAT_0800d5a0 == '\x01') {
    FUN_0801cb74(9,0xb9,0xe6,0xf3,0xd086);
    FUN_0801537c(9,0xd7,0xe6,0xffff);
  }
  else if (*DAT_0800d5a0 == '\x02') {
    FUN_080152cc(0xb9,0x3b,0,in_r3,in_r3);
    FUN_08000fd2(DAT_0800d5a0 + 0xe,0x22);
  }
  FUN_08020324(0);
  if (*DAT_0800d5a4 != '\0') {
    return 3;
  }
  return 5;
}

