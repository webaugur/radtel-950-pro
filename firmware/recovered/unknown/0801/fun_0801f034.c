/**
 * @brief fun_0801f034
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f034, Ghidra name FUN_0801f034, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801f034(void)

{
  *(undefined1 *)(DAT_0801f058 + (uint)*(byte *)(DAT_0801f058 + 0xfa) * 0x24 + 0x2e3) =
       *(undefined1 *)(DAT_0801f054 + 3);
  FUN_08018038();
  return 1;
}

