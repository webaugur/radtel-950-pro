/**
 * @brief fun_080180f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080180f8, Ghidra name FUN_080180f8, 156 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080180f8(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xa5,0xd5,1,0,in_r3);
  uVar4 = 0xffff;
  FUN_08027a94(0xa5,0x62,0x30,0x30,DAT_08018194,0);
  FUN_08015500();
  FUN_080154a4(0,0xf0,0xdc,0xf5,1,0);
  iVar1 = _DAT_08018198;
  if (*(char *)(_DAT_08018198 + 8) == '\x01') {
    uVar2 = 0;
    uVar3 = 0xffff;
    FUN_08014d88(0xdc,0x40,&DAT_080181a8,0x18);
  }
  else {
    uVar2 = 0;
    uVar3 = 0xffff;
    FUN_08014d88(0xdc,0x3c,s_Data_Error_0801819b + 1,0x18);
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

