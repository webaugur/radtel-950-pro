/**
 * @brief fun_08022ca4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022ca4, Ghidra name FUN_08022ca4, 228 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022ca4(int param_1)

{
  if (param_1 == DAT_08022d88) {
    FUN_0801a664(0x4000);
    FUN_0801a664(0x4000,0);
    return;
  }
  if (param_1 == DAT_08022d8c) {
    FUN_0801a62c(0x20000);
    FUN_0801a62c(0x20000,0);
    return;
  }
  if (param_1 == DAT_08022d90) {
    FUN_0801a62c(0x40000);
    FUN_0801a62c(0x40000,0);
    return;
  }
  if (param_1 == DAT_08022d94) {
    FUN_0801a62c(0x80000);
    FUN_0801a62c(0x80000,0);
    return;
  }
  if (param_1 == DAT_08022d98) {
    FUN_0801a62c(0x100000);
    FUN_0801a62c(0x100000,0);
    return;
  }
  if (param_1 == DAT_08022d9c) {
    FUN_0801a62c(0x1000000);
    FUN_0801a62c(0x1000000,0);
    return;
  }
  if (param_1 == DAT_08022da0) {
    FUN_0801a62c(0x2000000);
    FUN_0801a62c(0x2000000,0);
    return;
  }
  if (param_1 == DAT_08022da4) {
    FUN_0801a62c(0x4000000);
    FUN_0801a62c(0x4000000,0);
    return;
  }
  return;
}

