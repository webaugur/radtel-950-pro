/**
 * @brief fun_0801b218
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b218, Ghidra name FUN_0801b218, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b218(void)

{
  if (*(short *)(DAT_0801b240 + 0xd) != 0) {
    FUN_0801ac32(1);
    return;
  }
  FUN_0801ac32(0);
  FUN_080207ec(6);
  return;
}

