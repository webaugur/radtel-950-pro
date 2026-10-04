/**
 * @brief fun_0801cf10
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cf10, Ghidra name FUN_0801cf10, 54 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801cf10(void)

{
  if (PTR_DAT_0801cf48[0x19] != '\0') {
    FUN_08017694();
    return 1;
  }
  *PTR_DAT_0801cf50 = PTR_DAT_0801cf4c[3];
  FUN_080007dc();
  FUN_08018038();
  FUN_0800cfc0();
  FUN_0800cb78(PTR_DAT_0801cf54[0xfa],1);
  return 1;
}

