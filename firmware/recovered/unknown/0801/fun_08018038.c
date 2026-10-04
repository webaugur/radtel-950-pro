/**
 * @brief fun_08018038
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018038, Ghidra name FUN_08018038, 160 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018038(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xa5,0xd5,1,0,in_r3);
  uVar5 = 0xffff;
  FUN_08027a94(0xa5,0x62,0x2b,0x2d,DAT_080180d8,0);
  FUN_08015500();
  FUN_080154a4(0,0xf0,0xdc,0xf5,1,0);
  iVar1 = _DAT_080180dc;
  if (*(char *)(_DAT_080180dc + 8) == '\x01') {
    uVar3 = 0;
    uVar4 = 0xffff;
    FUN_08014d88(0xdc,0x40,&LAB_080180ec,0x18);
  }
  else {
    uVar3 = 0;
    uVar4 = 0xffff;
    FUN_08014d88(0xdc,0x3e,s_Save_OK_080180df + 1,0x18);
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

