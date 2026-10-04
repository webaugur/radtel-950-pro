/**
 * @brief fun_08017694
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017694, Ghidra name FUN_08017694, 176 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017694(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xa5,0xd5,1,0,in_r3);
  uVar4 = 0xffff;
  FUN_08027a94(0xa5,0x62,0x30,0x30,DAT_08017744,0);
  FUN_08015500();
  FUN_080154a4(0,0xf0,0xd2,0x107,1,0);
  iVar1 = _DAT_08017748;
  if (*(char *)(_DAT_08017748 + 8) == '\x01') {
    uVar2 = 0;
    uVar3 = 0xffff;
    FUN_08014d88(0xdc,0xe,&DAT_08017770,0x18);
  }
  else {
    FUN_08014d88(0xd2,0x10,s_Please_close_the_0801774b + 1,0x18,0,0xffff);
    uVar2 = 0;
    uVar3 = 0xffff;
    FUN_08014d88(0xee,0x1d,s_AB_RPT_Mode_08017760,0x18);
  }
  FUN_08015500();
  FUN_08023510(0x48,7);
  if (*(char *)(iVar1 + 7) == '\0') {
    FUN_08025f44(0x514);
  }
  else {
    FUN_08025f44(800);
  }
  FUN_0800a1c4(4,uVar2,uVar3,uVar4);
  return;
}

