/**
 * @brief fun_08023838
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023838, Ghidra name FUN_08023838, 64 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023838(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_0800b604(1);
  FUN_0800ca18();
  FUN_0800a1c4(4);
  FUN_080154a4(0x44,0xab,0x78,0xdc,0);
  uVar2 = DAT_08023878;
  FUN_08027b14(0x78,0x46,99,100);
  uVar1 = FUN_08015500();
  FUN_080237cc((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),uVar2,0);
  return;
}

