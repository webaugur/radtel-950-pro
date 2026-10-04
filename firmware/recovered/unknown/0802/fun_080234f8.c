/**
 * @brief fun_080234f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080234f8, Ghidra name FUN_080234f8, 20 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080234f8(int param_1,undefined4 param_2)

{
  if ((*(char *)(DAT_0802350c + 7) != '\0') && (param_1 != 0)) {
    FUN_080234ac();
    return;
  }
  FUN_080073a4(param_2);
  return;
}

