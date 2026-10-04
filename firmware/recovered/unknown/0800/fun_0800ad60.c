/**
 * @brief fun_0800ad60
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ad60, Ghidra name FUN_0800ad60, 96 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ad60(void)

{
  undefined4 uVar1;
  undefined1 auStack_20 [20];
  
  FUN_0800a1c4(0);
  if (*(char *)(_DAT_0800adc0 + 8) == '\x01') {
    FUN_08000850(auStack_20,&DAT_0800add8);
    uVar1 = 0x20;
  }
  else {
    FUN_08000850(auStack_20,s_All_Band_Test_Mode_0800adc3 + 1);
    uVar1 = 3;
  }
  FUN_080154a4(0,0xf0,0x89,0xa2,1,0);
  FUN_08014d88(0x89,uVar1,auStack_20,0x18,0,0xffff);
  FUN_08015500();
  FUN_0800ad06(1000);
  return;
}

