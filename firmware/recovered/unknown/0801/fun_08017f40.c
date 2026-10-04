/**
 * @brief fun_08017f40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017f40, Ghidra name FUN_08017f40, 130 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017f40(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xbe,0xf6,1,0);
  if (*(char *)(_DAT_08017fc4 + 8) == '\x01') {
    FUN_08014d88(0xbe,0x2d,&DAT_08018014,0x18,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xda,0x14,&DAT_08018024,0x18);
  }
  else {
    FUN_08014d88(0xbe,0x1c,s_The_device_will_restart_08017fc7 + 1,0x10,0,0xffff);
    FUN_08014d88(0xd1,0x1c,s_Please_confirm_that_the_08017fe0,0x10,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xe4,0x14,s_antenna_has_been_replaced__08017ff8,0x10);
  }
  FUN_08015500((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),uVar2,uVar3);
  return;
}

