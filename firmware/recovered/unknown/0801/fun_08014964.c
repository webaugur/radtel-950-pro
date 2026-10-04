/**
 * @brief fun_08014964
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014964, Ghidra name FUN_08014964, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014964(void)

{
  *(undefined2 *)(DAT_0801498c + 0x30) =
       *(undefined2 *)(DAT_08014988 + (uint)*(byte *)(DAT_08014984 + 3) * 2);
  FUN_080151cc(1);
  FUN_08021e54();
  return;
}

