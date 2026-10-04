/**
 * @brief fun_080124f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080124f0, Ghidra name FUN_080124f0, 42 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080124f0(undefined4 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0801251c;
  *DAT_0801251c = 0x20;
  puVar1[1] = 3;
  puVar1[2] = (char)((uint)param_1 >> 8);
  puVar1[3] = (char)param_1;
  puVar1[4] = 0;
  FUN_080277c6(5,puVar1,0,puVar1 + 7);
  FUN_0800ad06(0x32);
  return;
}

