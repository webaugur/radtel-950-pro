/**
 * @brief fun_08017b8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017b8c, Ghidra name FUN_08017b8c, 148 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017b8c(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xa5,0xd5,1,0,in_r3);
  uVar4 = 0xffff;
  FUN_08027a94(0xa5,0x62,0x30,0x30,DAT_08017c20,0);
  FUN_08015500();
  FUN_080154a4(0,0xf0,0xdc,0xf5,1,0);
  iVar1 = _DAT_08017c24;
  if (*(char *)(_DAT_08017c24 + 8) == '\x01') {
    uVar2 = 0;
    uVar3 = 0xffff;
    FUN_08014d88(0xdc,0x26,&DAT_08017c3c,0x18);
  }
  else {
    uVar2 = 0;
    uVar3 = 0xffff;
    FUN_08014d88(0xdc,3,s_No_Available_Zone__08017c27 + 1,0x18);
  }
  FUN_08015500();
  if (*(char *)(iVar1 + 7) == '\0') {
    FUN_08025f44(0x514);
  }
  else {
    FUN_08025f44(800);
  }
  FUN_0800a1c4(4,uVar2,uVar3,uVar4);
  return;
}

