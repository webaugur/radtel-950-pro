/**
 * @brief fun_0801b70c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b70c, Ghidra name FUN_0801b70c, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b70c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      FUN_08012ae2(DAT_0801b748,0x10);
      return;
    }
    FUN_08012ae6(DAT_0801b748,0x10);
    return;
  }
  if ((*(char *)(DAT_0801b74c + 0x62) != '\0') &&
     ((*(char *)(DAT_0801b74c + 0x4a) != -0x5b || (*(char *)(DAT_0801b750 + 0xfa) != '\x02')))) {
    FUN_08012ae2(DAT_0801b748,0x10);
    return;
  }
  FUN_08012ae6(DAT_0801b748,0x10);
  return;
}

