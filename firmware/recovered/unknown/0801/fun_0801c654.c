/**
 * @brief fun_0801c654
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c654, Ghidra name FUN_0801c654, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c654(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0801c66e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0801c670 + 8))(0x71,(uint)(param_1 * 0xfc0fc) / 10000 & 0xffff);
  return;
}

