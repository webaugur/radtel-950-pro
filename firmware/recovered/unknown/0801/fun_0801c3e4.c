/**
 * @brief fun_0801c3e4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c3e4, Ghidra name FUN_0801c3e4, 20 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c3e4(short param_1)

{
  int unaff_r5;
  
                    /* WARNING: Could not recover jumptable at 0x0801c3f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r5 + 8))(0x48,param_1 << 4 | 0xb00f);
  return;
}

