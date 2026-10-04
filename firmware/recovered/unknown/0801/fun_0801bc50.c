/**
 * @brief fun_0801bc50
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801bc50, Ghidra name FUN_0801bc50, 106 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801bc50(void)

{
  int iVar1;
  
  iVar1 = DAT_0801bcbc;
  (**(code **)(DAT_0801bcbc + 8))(0x58,0x3fc3);
  (**(code **)(iVar1 + 8))(0x72,0x3065);
  (**(code **)(iVar1 + 8))(0x70,0xd0);
  (**(code **)(iVar1 + 8))(0x5d,0x1b00);
  (**(code **)(iVar1 + 8))(0x59,0x6028);
  (**(code **)(iVar1 + 8))(0x59,0x3028);
  (**(code **)(iVar1 + 8))(0x5a,0xfb72);
  (**(code **)(iVar1 + 8))(0x5b,0x4099);
  (**(code **)(iVar1 + 8))(0x5c,0xa730);
                    /* WARNING: Could not recover jumptable at 0x0801bcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(0x3f,0x3000);
  return;
}

