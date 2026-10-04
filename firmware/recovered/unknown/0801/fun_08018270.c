/**
 * @brief fun_08018270
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018270, Ghidra name FUN_08018270, 114 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018270(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xbe,0xf6,1,0);
  if (*(char *)(_DAT_080182e4 + 8) == '\x01') {
    FUN_08014d88(0xbe,0x14,&DAT_0801831c,0x18,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xda,0x2d,&DAT_08018330,0x18);
  }
  else {
    FUN_08014d88(0xc0,0x14,s_Channel_work_mode_changed__080182e7 + 1,0x10,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xd7,0x1c,s_The_device_will_restart_08018304,0x10);
  }
  FUN_08015500((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),uVar2,uVar3);
  return;
}

