/**
 * @brief fun_0802029c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802029c, Ghidra name FUN_0802029c, 16 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 FUN_0802029c(int param_1)

{
  if (param_1 != 0xff) {
    *DAT_080202ac = (char)param_1;
    return 0;
  }
  return *DAT_080202ac;
}

