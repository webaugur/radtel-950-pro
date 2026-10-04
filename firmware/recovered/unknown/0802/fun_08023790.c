/**
 * @brief fun_08023790
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023790, Ghidra name FUN_08023790, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023790(int param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(DAT_080237c4 + 5) + 1;
  *(char *)(DAT_080237c4 + 5) = (char)uVar1 + (char)(uVar1 / 10) * -10;
  *(undefined1 *)(DAT_080237c8 + 0x14) = 1;
  FUN_08010044();
  FUN_080237cc();
  if (param_1 == 0) {
    FUN_080073a4(1);
    return;
  }
  return;
}

