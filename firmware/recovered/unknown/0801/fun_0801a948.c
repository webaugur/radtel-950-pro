/**
 * @brief fun_0801a948
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a948, Ghidra name FUN_0801a948, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801a948(void)

{
  int iVar1;
  
  if (*DAT_0801a96c == '\0') {
    return 0;
  }
  iVar1 = (**(code **)(DAT_0801a970 + 4))(0xc);
  if (-1 < iVar1 << 0x1e) {
    return 1;
  }
  return 0;
}

