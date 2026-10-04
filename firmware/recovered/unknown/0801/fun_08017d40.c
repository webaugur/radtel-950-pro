/**
 * @brief fun_08017d40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017d40, Ghidra name FUN_08017d40, 280 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017d40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xa5,0xd5,1,0,param_4);
  uVar5 = 0xffff;
  FUN_08027a94(0xa5,0x62,0x30,0x30,DAT_08017e90,0);
  FUN_08015500();
  FUN_080154a4(0,0xf0,0xd2,0x107,1,0);
  iVar1 = _DAT_08017e94;
  if (param_1 == 1) {
    if (*(char *)(_DAT_08017e94 + 8) == '\x01') {
      uVar3 = 0;
      uVar4 = 0xffff;
      FUN_08014d88(0xdc,0x25,&DAT_08017ecc,0x18);
    }
    else {
      FUN_08014d88(0xd2,0x16,s_Longitude_range_08017eac,0x18,0,0xffff);
      uVar3 = 0;
      uVar4 = 0xffff;
      FUN_08014d88(0xee,0x23,s_0_180_degrees_08017ebc,0x18);
    }
  }
  else if (param_1 == 3) {
    if (*(char *)(_DAT_08017e94 + 8) == '\x01') {
      uVar3 = 0;
      uVar4 = 0xffff;
      FUN_08014d88(0xdc,0x2c,&DAT_08017ef0,0x18);
    }
    else {
      uVar3 = 0;
      uVar4 = 0xffff;
      FUN_08014d88(0xdc,9,s_Second_range_0_59_08017edc,0x18);
    }
  }
  else if (param_1 == 4) {
    if (*(char *)(_DAT_08017e94 + 8) == '\x01') {
      uVar3 = 0;
      uVar4 = 0xffff;
      FUN_08014d88(0xdc,0x25,&DAT_08017f20,0x18);
    }
    else {
      FUN_08014d88(0xd2,0x16,s_Latitude_range_08017f00,0x18,0,0xffff);
      uVar3 = 0;
      uVar4 = 0xffff;
      FUN_08014d88(0xee,0x23,s_0_90_degrees_08017f10,0x18);
    }
  }
  else if (*(char *)(_DAT_08017e94 + 8) == '\x01') {
    uVar3 = 0;
    uVar4 = 0xffff;
    FUN_08014d88(0xdc,0x2c,&DAT_08017f30,0x18);
  }
  else {
    uVar3 = 0;
    uVar4 = 0xffff;
    FUN_08014d88(0xdc,9,s_Minute_range_0_59_08017e97 + 1,0x18);
  }
  FUN_08015500();
  FUN_08023510(0x47,6);
  if (*(char *)(iVar1 + 7) == '\0') {
    FUN_08025f44(0x514);
  }
  else {
    FUN_08025f44(800);
  }
  uVar2 = FUN_0800a1c4(4);
  FUN_0801b334(uVar2,uVar3,uVar4,uVar5);
  return;
}

