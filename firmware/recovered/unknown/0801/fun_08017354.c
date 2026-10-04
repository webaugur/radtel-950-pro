/**
 * @brief fun_08017354
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017354, Ghidra name FUN_08017354, 304 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017354(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_2c [20];
  
  FUN_08000f6e(auStack_2c,DAT_08017484,0x14);
  FUN_0800a1c4(4);
  FUN_0800a1a8();
  FUN_080203e4(0x10,0);
  uVar3 = _DAT_0801748c;
  iVar2 = DAT_08017488;
  if (*(char *)(DAT_08017488 + 8) == '\x01') {
    FUN_08022908(_DAT_0801748c,&DAT_080174e8,0x10);
  }
  else {
    FUN_08022908(_DAT_0801748c,s_About_Machine_0801748f + 1,0x10);
  }
  FUN_08000838(s______s_080174a0,0x10,0x10,uVar3);
  puVar5 = DAT_080174a8;
  if (*(char *)(iVar2 + 8) == '\x01') {
    puVar5 = DAT_080174a8 + -5;
  }
  FUN_080203e4(0x11,0);
  FUN_08000850(auStack_2c,&DAT_080174ac,*puVar5,puVar5[1]);
  FUN_08000838(s______s_080174b4,0x10,0x10,auStack_2c);
  FUN_08000850(auStack_2c,&DAT_080174c0,puVar5[2]);
  FUN_08000838(s______s_080174b4,0x10,0x10,auStack_2c);
  iVar2 = FUN_08009214();
  if (iVar2 == 1) {
    FUN_08000850(auStack_2c,s_BJ9000__s_080174f4,puVar5[3]);
  }
  else {
    iVar2 = FUN_08009214();
    if (iVar2 == 2) {
      FUN_08000850(auStack_2c,s_UV850PRO__s_08017500,puVar5[3]);
    }
    else {
      FUN_08000850(auStack_2c,s_RT950Pro__s_080174c4,puVar5[3]);
    }
  }
  FUN_08000838(s______s_080174b4,0x10,0x10,auStack_2c);
  FUN_08001016(auStack_2c,0x14);
  uVar3 = FUN_08000ea6(puVar5[4]);
  FUN_08000ee4(auStack_2c,puVar5[4],uVar3);
  iVar2 = DAT_080174d0;
  uVar6 = 0;
  do {
    cVar1 = *(char *)(iVar2 + uVar6 + 0x11);
    if ((cVar1 == -1) || (cVar1 == '\0')) break;
    iVar4 = FUN_08000ea6(puVar5[4]);
    auStack_2c[iVar4 + uVar6] = *(undefined1 *)(iVar2 + uVar6 + 0x11);
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 6);
  FUN_08000838(s______s_080174b4,0x10,0x10,auStack_2c);
  FUN_08000838(s__080174d4);
  FUN_080203e4(0x20,0);
  return;
}

