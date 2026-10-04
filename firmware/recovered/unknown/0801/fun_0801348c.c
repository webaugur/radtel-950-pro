/**
 * @brief fun_0801348c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801348c, Ghidra name FUN_0801348c, 44 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801348c(int param_1)

{
  if (param_1 == 0) {
    FUN_08000850(DAT_080134c0,&DAT_080134c4);
  }
  else if (param_1 == 1) {
    FUN_08000850(DAT_080134c0,&DAT_080134c8);
  }
  else {
    FUN_08000850(DAT_080134c0,s___ddb_080134b8,param_1 + -1);
  }
  return DAT_080134c0;
}

