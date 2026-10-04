/**
 * @brief fun_0801bd0c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801bd0c, Ghidra name FUN_0801bd0c, 42 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801bd0c(void)

{
  int iVar1;
  
  iVar1 = DAT_0801bd38;
  (**(code **)(DAT_0801bd38 + 8))(0x3f,0);
  (**(code **)(iVar1 + 8))(0x59,0x2028);
  (**(code **)(iVar1 + 8))(0x70,0);
                    /* WARNING: Could not recover jumptable at 0x0801bd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(0x58,0);
  return;
}

