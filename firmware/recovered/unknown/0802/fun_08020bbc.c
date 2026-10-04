/**
 * @brief fun_08020bbc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020bbc, Ghidra name FUN_08020bbc, 270 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020bbc(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  FUN_080154a4(0xaf,0xf0,0x55,0x69,1,0);
  FUN_08000850(&local_30,s__03ddBm_08020ccc,param_1);
  FUN_08014f44(0x55,0xaf,&local_30,0x10,0,0xae9c,1);
  FUN_08015500();
  FUN_080154a4(0x19,0xe1,0x69,0x7d,1,0);
  FUN_08000850(&local_30,&DAT_08020cd4);
  FUN_08014f44(0x6a,0x19,&local_30,0x10,0,0xffff,1);
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (param_1 < *(short *)(DAT_08020cdc + uVar1 * 2)) break;
    uVar1 = uVar1 + 1 & 0xff;
    uVar3 = 8;
  } while (uVar1 < 9);
  cVar2 = '<';
  uVar1 = 0;
  iVar4 = DAT_08020cdc + -0x31;
  do {
    if (uVar3 < uVar1) {
      FUN_08027a94(0x69,cVar2,0xc,0x10,iVar4,0,0x3335);
    }
    else {
      FUN_08027a94(0x69,cVar2,0xc,0x10,DAT_08020cdc + -0x19,0,0x3335);
    }
    cVar2 = cVar2 + '\x0f';
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 9);
  FUN_08000850(&local_30,&DAT_08020ce0,uVar3);
  FUN_08014f44(0x69,cVar2,&local_30,0x10,0,0xffff,1);
  FUN_08015500();
  return;
}

