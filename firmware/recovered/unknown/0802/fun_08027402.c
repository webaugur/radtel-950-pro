/**
 * @brief fun_08027402
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027402, Ghidra name FUN_08027402, 20 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08027402(byte *param_1)

{
  undefined4 uVar1;
  
  if ((int)((uint)*param_1 << 0x19) < 0) {
    return 0;
  }
  if (*(code **)(param_1 + 4) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08027410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 4))();
    return uVar1;
  }
  return 1;
}

