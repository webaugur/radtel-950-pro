/**
 * @brief fun_08023510
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023510, Ghidra name FUN_08023510, 20 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023510(int param_1,undefined4 param_2)

{
  if ((*(char *)(DAT_08023524 + 7) != '\0') && (param_1 != 0)) {
    FUN_080234dc();
    return;
  }
  FUN_080073f8(param_2);
  return;
}

