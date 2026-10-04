/**
 * @brief fun_0801ab2c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ab2c, Ghidra name FUN_0801ab2c, 122 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ab2c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0801bd08;
  iVar1 = DAT_0801bc4c;
  if (param_1 != 1) {
    (**(code **)(DAT_0801bd08 + 8))(0x70,0);
                    /* WARNING: Could not recover jumptable at 0x0801bd06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 8))(0x58,0);
    return;
  }
  (**(code **)(DAT_0801bc4c + 8))(0x58,0xc9);
  (**(code **)(iVar1 + 8))(0x70,0xac);
  (**(code **)(iVar1 + 8))(0x72,0x60ca);
  (**(code **)(iVar1 + 8))(0x5c,0x5665);
  (**(code **)(iVar1 + 8))(0x5d,0xf00);
  (**(code **)(iVar1 + 8))(0x59,0x6028);
  (**(code **)(iVar1 + 8))(0x59,0x3028);
                    /* WARNING: Could not recover jumptable at 0x0801bc4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(0x3f,0x2000);
  return;
}

