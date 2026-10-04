/**
 * @brief fun_08022194
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022194, Ghidra name FUN_08022194, 300 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022194(int param_1)

{
  if (param_1 == DAT_080222c0) {
    FUN_0801a664(param_1 >> 0x13,1);
    FUN_0801a664(param_1 >> 0x13,0);
    return;
  }
  if (param_1 == 0x40000000) {
    FUN_0801a62c(1);
    FUN_0801a62c(1,0);
    return;
  }
  if (param_1 == DAT_080222c4) {
    FUN_0801a62c(2,1);
    FUN_0801a62c(2,0);
    return;
  }
  if (param_1 == DAT_080222c8) {
    FUN_0801a62c(4,1);
    FUN_0801a62c(4,0);
    return;
  }
  if (param_1 == DAT_080222cc) {
    FUN_0801a62c(8,1);
    FUN_0801a62c(8,0);
    return;
  }
  if (param_1 == DAT_080222d0) {
    FUN_0801a62c(0x10,1);
    FUN_0801a62c(0x10,0);
    return;
  }
  if (param_1 == DAT_080222d4) {
    FUN_0801a62c(0x20,1);
    FUN_0801a62c(0x20,0);
    return;
  }
  if (param_1 == DAT_080222d8) {
    FUN_0801a664(param_1 >> 0x11,1);
    FUN_0801a664(param_1 >> 0x11,0);
    return;
  }
  if (param_1 == DAT_080222dc) {
    FUN_0801a664(0x80000);
    FUN_0801a664(0x80000,0);
    return;
  }
  if (param_1 == DAT_080222e0) {
    FUN_0801a664(0x100000);
    FUN_0801a664(0x100000,0);
    return;
  }
  if (param_1 == DAT_080222e4) {
    FUN_0801a664(0x200000);
    FUN_0801a664(0x200000,0);
    return;
  }
  return;
}

