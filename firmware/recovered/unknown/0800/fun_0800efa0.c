/**
 * @brief fun_0800efa0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800efa0, Ghidra name FUN_0800efa0, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800efa0(void)

{
  *DAT_0800efc8 = 0;
  if (*(char *)(DAT_0800efcc + 0x43) == '\0') {
    FUN_080124f0();
  }
  else {
    FUN_08003c60();
  }
  FUN_0800ed30(0);
  return;
}

