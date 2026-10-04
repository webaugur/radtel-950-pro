/**
 * @brief fun_08012dbc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012dbc, Ghidra name FUN_08012dbc, 16 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08012dbc(void)

{
  int iVar1;
  int extraout_r2;
  undefined8 uVar2;
  
  uVar2 = FUN_08013c40();
  iVar1 = FUN_08013b98((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar2);
  return extraout_r2 * iVar1;
}

