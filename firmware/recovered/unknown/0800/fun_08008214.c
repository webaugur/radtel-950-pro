/**
 * @brief fun_08008214
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008214, Ghidra name FUN_08008214, 22 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08008214(void)

{
  if (*(int *)(DAT_0800822c + 0x10) != 0) {
    FUN_080081c8();
    return 1;
  }
  return 0;
}

