/**
 * @brief fun_0801cdd0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cdd0, Ghidra name FUN_0801cdd0, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801cdd0(void)

{
  if (*(int *)(DAT_0801cdf0 + 3) == 1) {
    *(undefined1 *)(DAT_0801cdf4 + 7) = 0x53;
  }
  else {
    *(undefined1 *)(DAT_0801cdf4 + 7) = 0x4e;
  }
  FUN_08018038();
  return 1;
}

