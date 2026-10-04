/**
 * @brief fun_0801c150
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c150, Ghidra name FUN_0801c150, 122 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c150(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0801c1cc;
  if ((*(char *)(DAT_0801c1cc + 0x15) == '\0') && ((param_1 == 1 || (param_1 == 2)))) {
    (**(code **)(DAT_0801c1cc + -4))(0x30,0x200);
  }
  else {
    (**(code **)(DAT_0801c1cc + -4))(0x30,0);
  }
  FUN_0800ad22(0x32);
  if (param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0801c1aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + -4))(0x30,0xbff1);
    return;
  }
  if (param_1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0801c1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + -4))(0x30,0xc1fe);
    return;
  }
  if (param_1 != 3) {
    if (param_1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x0801c192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + -4))(0x30,0xc3fa);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0801c1c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -4))(0x30,0x302);
  return;
}

