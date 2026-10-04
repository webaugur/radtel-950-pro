/**
 * @brief fun_08011864
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08011864, Ghidra name FUN_08011864, 124 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011864(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800ca18();
  FUN_080152cc(0x1c,0x10b,0);
  FUN_080154a4(0,0xf0,0x81,0xbf,1,0);
  if (*(char *)(_DAT_080118e0 + 8) == '\x01') {
    FUN_08014d88(0x81,0x2d,&DAT_08011908,0x18,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xa6,0x25,&DAT_08011918,0x18);
  }
  else {
    FUN_08014d88(0x81,9,s_FM_Initialization_080118e3 + 1,0x18,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xa6,0x1d,s_Please_Wait____080118f8,0x18);
  }
  FUN_08015500((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),uVar2,uVar3);
  return;
}

