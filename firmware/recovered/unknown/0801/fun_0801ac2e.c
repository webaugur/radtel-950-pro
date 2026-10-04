/**
 * @brief fun_0801ac2e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ac2e, Ghidra name thunk_FUN_0801c4d0, 4 bytes.
 *       Not linked into rt950-firmware.
 */

void thunk_FUN_0801c4d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0801c4ec;
  (**(code **)(DAT_0801c4ec + 8))(0x71,param_1);
                    /* WARNING: Could not recover jumptable at 0x0801c4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(0x72,param_2);
  return;
}

