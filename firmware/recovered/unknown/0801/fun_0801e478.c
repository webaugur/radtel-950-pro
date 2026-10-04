/**
 * @brief fun_0801e478
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e478, Ghidra name FUN_0801e478, 24 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e478(void)

{
  *(byte *)(DAT_0801e494 + 0x1c) =
       *(byte *)(DAT_0801e494 + 0x1c) & 0xfc | *(byte *)(DAT_0801e490 + 3) & 3;
  FUN_08018038();
  return 1;
}

