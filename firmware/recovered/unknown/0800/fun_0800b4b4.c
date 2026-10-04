/**
 * @brief fun_0800b4b4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800b4b4, Ghidra name FUN_0800b4b4, 252 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800b4b4(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800ca18();
  if (*(char *)(DAT_0800b5b0 + 0xfa) == '\x01') {
    FUN_080154a4(0,0xf0,0x75,0xab,1,0);
    FUN_08014d88(0x7f,0x5e,&DAT_0800b5b4,0x18,0,0xffff);
    FUN_08015500();
    FUN_080154a4(0,0xf0,0xab,0xcd,1,0);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0xab,0x36,s____________0800b5bc,0x18);
  }
  else if (*(char *)(DAT_0800b5b0 + 0xfa) == '\x02') {
    FUN_080154a4(0,0xf0,0xce,0x104,1,0);
    FUN_08014d88(0xd8,0x5e,&DAT_0800b5b4,0x18,0,0xffff);
    FUN_08015500();
    FUN_080154a4(0,0xf0,0x104,0x126,1,0);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0x104,0x36,s____________0800b5bc,0x18);
  }
  else {
    FUN_080154a4(0,0xf0,0x1c,0x52,1,0);
    FUN_08014d88(0x26,0x5e,&DAT_0800b5b4,0x18,0,0xffff);
    FUN_08015500();
    FUN_080154a4(0,0xf0,0x52,0x74,1,0);
    uVar2 = 0;
    uVar3 = 0xffff;
    uVar1 = FUN_08014d88(0x52,0x36,s____________0800b5bc,0x18);
  }
  FUN_08015500((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),uVar2,uVar3);
  return;
}

