/**
 * @brief fun_08014534
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014534, Ghidra name FUN_08014534, 42 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014534(void)

{
  if (*(char *)(DAT_08014560 + 1) == '\x01') {
    FUN_08014088();
    FUN_08012ae2(DAT_08014564,0x100);
    FUN_08014074();
    FUN_0800a144();
    FUN_0800a5a0();
    return;
  }
  return;
}

