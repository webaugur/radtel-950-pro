/**
 * @brief fun_080213b4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080213b4, Ghidra name FUN_080213b4, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080213b4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0x4808;
  }
  else if (param_1 == 2) {
    uVar1 = 0x3658;
  }
  else {
    uVar1 = 0x49a8;
  }
                    /* WARNING: Could not recover jumptable at 0x080213d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_080213d4 + 8))(0x43,uVar1);
  return;
}

