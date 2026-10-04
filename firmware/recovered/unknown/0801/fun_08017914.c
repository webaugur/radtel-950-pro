/**
 * @brief fun_08017914
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017914, Ghidra name FUN_08017914, 90 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017914(void)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0800a1c4(4);
  if (*(char *)(_DAT_08017970 + 8) == '\x01') {
    uVar1 = 0;
    uVar2 = 0xffff;
    FUN_08014d88(0xdc,0x40,&DAT_08017990,0x18);
  }
  else {
    FUN_08014d88(0xd0,0x50,s_Frequency_08017973 + 1,0x18,0,0xffff);
    uVar1 = 0;
    uVar2 = 0xffff;
    FUN_08014d88(0xe8,0x40,s_out_of_range__08017980,0x18);
  }
  FUN_08025f44(500);
  FUN_0800a1c4(4,extraout_r1,uVar1,uVar2);
  return;
}

