/**
 * @brief fun_0801171c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801171c, Ghidra name FUN_0801171c, 240 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801171c(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  undefined1 auStack_28 [12];
  
  uVar1 = (uint)*(byte *)(DAT_08011754 + 0x1b);
  if (*(char *)(DAT_08011750 + 0x43) == '\0') {
    uVar1 = uVar1 / 5;
  }
  else if (*(char *)(DAT_08011750 + 0x43) == '\x01') {
    uVar1 = uVar1 / 6;
  }
  else {
    uVar1 = uVar1 / 6;
  }
  if (*(byte *)(DAT_08011754 + 0x1a) != uVar1) {
    *(char *)(DAT_08011754 + 0x1a) = (char)uVar1;
    FUN_080154a4(0,0xf0,0xe6,0x11e,1,0);
    FUN_08027b14(0x10e,0xc,0xe,0xf,DAT_08011850);
    if (uVar1 < 10) {
      FUN_08027b14(0x10e,0x1e,9,0xc,DAT_0801185c);
      FUN_08000850(auStack_28,&DAT_08011860,uVar1);
      FUN_08014a70(0x10e,0x29,auStack_28,0);
    }
    else {
      FUN_08000850(auStack_28,&DAT_08011854,uVar1 - 9);
      FUN_08014a70(0x10e,0x1e,auStack_28,0);
    }
    if (10 < uVar1) {
      uVar1 = 10;
    }
    sVar5 = 0x118;
    sVar4 = 0x40;
    cVar3 = '\x05';
    for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1 & 0xff) {
      FUN_08027990(sVar5,sVar4,0xb,cVar3,0x457);
      sVar5 = sVar5 + -7;
      sVar4 = sVar4 + 0x14;
      cVar3 = cVar3 + '\a';
    }
    FUN_08015500();
    return;
  }
  return;
}

