/**
 * @brief fun_080110fc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080110fc, Ghidra name FUN_080110fc, 254 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080110fc(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = false;
  FUN_080154a4(0,0xf0,0x29,99,1);
  iVar2 = DAT_08011214;
  if (*(char *)(DAT_080111fc + 0x43) == '\x01') {
    FUN_08027b14(0x29,0x33,0x1b,0xc,
                 *(undefined4 *)(DAT_08011200 + (uint)*(byte *)(DAT_08011214 + 1) * 4));
    if (*(char *)(iVar2 + 1) == '\0') {
      FUN_08014a70(0x29,0x56,s_153_279_08011224,0);
    }
    else if (*(char *)(iVar2 + 1) == '\x02') {
      FUN_08014a70(0x29,0x56,s_2_3_30_0801122c,0);
      bVar1 = true;
    }
    else {
      FUN_08014a70(0x29,0x56,s_520_1710_08011218,0);
    }
  }
  else if (*(char *)(DAT_080111fc + 0x43) == '\0') {
    FUN_08027b14(0x29,0x33,0x15,0xc,DAT_08011234);
    FUN_08014a70(0x29,0x56,s_64_108_08011238,0);
    bVar1 = true;
  }
  else {
    FUN_08027b14(0x29,0x33,0x1b,0xc,*(undefined4 *)(DAT_08011200 + 8));
    FUN_08014a70(0x29,0x56,s_0_15_30_08011204,0);
    bVar1 = true;
  }
  FUN_08027b14(0x29,0x50,2,0xc,DAT_0801120c);
  if (bVar1) {
    uVar3 = DAT_08011210;
    FUN_08027b14(0x29,0xa0,0x1e,0xc);
  }
  else {
    uVar3 = DAT_08011240;
    FUN_08027b14(0x29,0xa0,0x1e,0xc);
  }
  FUN_08015500();
  FUN_08010e28();
  FUN_0801160c();
  FUN_08011244(0,0xffffffff,uVar3,0);
  return;
}

