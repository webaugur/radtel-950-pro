/**
 * @brief fun_0800bb38
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800bb38, Ghidra name FUN_0800bb38, 96 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_0800bb38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = *(char *)(DAT_0800bb98 + 0x10);
  if (cVar1 != *DAT_0800bb9c) {
    *DAT_0800bb9c = cVar1;
    if (cVar1 == '\0') {
      puVar2 = &DAT_0800bba8;
    }
    else if (cVar1 == '\x01') {
      puVar2 = &DAT_0800bbac;
    }
    else if (cVar1 == '\x03') {
      puVar2 = &DAT_0800bbb0;
    }
    else {
      puVar2 = &DAT_0800bba0;
    }
    uStack_10 = param_3;
    uStack_c = param_4;
    FUN_08000850(&uStack_10,&DAT_0800bba4,puVar2);
    FUN_080154a4(0xba,0xe2,0x7b,0x94,1,0xd086);
    param_1 = 0xd086;
    param_2 = 0xffff;
    FUN_08014d88(0x7b,0xba,&uStack_10,0x18);
    FUN_08015500();
  }
  return CONCAT44(param_2,param_1);
}

