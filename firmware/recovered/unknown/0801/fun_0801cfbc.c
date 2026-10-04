/**
 * @brief fun_0801cfbc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cfbc, Ghidra name FUN_0801cfbc, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801cfbc(void)

{
  if (*(int *)(DAT_0801cfdc + 3) == 1) {
    *(undefined1 *)(DAT_0801cfe0 + 0xb) = 0x45;
  }
  else {
    *(undefined1 *)(DAT_0801cfe0 + 0xb) = 0x57;
  }
  FUN_08018038();
  return 1;
}

