/**
 * @brief fun_0801786c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801786c, Ghidra name FUN_0801786c, 128 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801786c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  
  *(char *)(unaff_r7 + 0x17) = (char)unaff_r7;
  FUN_08027a94(0xa5,0x62,0x2b,0x2d);
  FUN_08015500();
  FUN_080154a4(0,0xf0,0xdc,0xf5);
  iVar1 = _DAT_080178f0;
  if (*(char *)(_DAT_080178f0 + 8) == '\x01') {
    FUN_08014d88(0xdc,0x27,&DAT_08017904,0x18);
  }
  else {
    FUN_08014d88(0xdc,0x20,s_Clear_Data_OK_080178f3 + 1,0x18);
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
  FUN_0801b334(uVar2,unaff_r4,unaff_r5,unaff_r5);
  return;
}

