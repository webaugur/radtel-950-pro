/**
 * @brief fun_080181b4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080181b4, Ghidra name FUN_080181b4, 114 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080181b4(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xbe,0xf3,1,0);
  if (*(char *)(_DAT_08018228 + 8) == '\x01') {
    FUN_08014d88(0xbe,0x2d,&DAT_08018250,0x18,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xda,0x25,&DAT_08018260,0x18);
  }
  else {
    FUN_08014d88(0xbe,9,s_FM_Initialization_0801822b + 1,0x18,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xda,0x1d,s_Please_Wait____08018240,0x18);
  }
  FUN_08015500((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),uVar2,uVar3);
  return;
}

