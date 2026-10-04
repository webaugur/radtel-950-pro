/**
 * @brief fun_0800eab8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800eab8, Ghidra name FUN_0800eab8, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800eab8(int param_1)

{
  if (*(char *)(DAT_0800eaec + 1) == '\v') {
    *(undefined1 *)(DAT_0800eaec + 1) = 0;
    FUN_0801b334();
    FUN_0800da50();
    FUN_08018df4();
    if (param_1 != 0) {
      FUN_0800b980();
    }
    FUN_08023510(0x4a,5);
    FUN_0801c9a0();
    return;
  }
  return;
}

