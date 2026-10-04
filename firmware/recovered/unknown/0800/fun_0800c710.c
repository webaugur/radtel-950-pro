/**
 * @brief fun_0800c710
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c710, Ghidra name FUN_0800c710, 526 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c710(int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int extraout_r2;
  int iVar2;
  int extraout_r3;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  short sVar7;
  short sVar9;
  short sVar8;
  
  if ((param_1 == 2) ||
     (((cVar1 = *(char *)(DAT_0800c920 + 1), cVar1 != '\0' && (cVar1 != '\x03')) && (cVar1 != '\a'))
     )) {
    uVar4 = 0x105;
    iVar2 = DAT_0800c920;
  }
  else {
    uVar4 = FUN_08013e30(param_3);
    param_3 = extraout_r2;
    iVar2 = extraout_r3;
  }
  if (*(char *)(iVar2 + 1) == '\x01') {
    sVar3 = 100;
  }
  else if (param_3 == 1) {
    sVar3 = 0xbd;
  }
  else if (param_3 == 2) {
    sVar3 = 0x116;
  }
  else {
    sVar3 = 100;
  }
  if (param_4 != 0) {
    if ((param_2 == 0) || (param_1 == 1)) {
      FUN_080154a4(0,0xf0,sVar3 + -1,sVar3 + 0x10,1,uVar4);
    }
    else {
      FUN_080154a4(0,0xd4,sVar3 + -1,sVar3 + 0x10,1,uVar4);
    }
  }
  if (param_1 == 1) {
    FUN_08014f44(sVar3 + -1,4,&DAT_0800c92c,0x10,uVar4,0xffff,0);
    if (param_2 == 10) {
      uVar5 = 0xe0a3;
    }
    else {
      uVar5 = 0xfe60;
    }
  }
  else {
    FUN_08014f44(sVar3 + -1,4,&DAT_0800c924,0x10,uVar4,0xffff,0);
    uVar5 = 0x7e0;
  }
  sVar9 = sVar3 + 0xd;
  FUN_0801caec(0x26,sVar9,0xd1,0xffff,1);
  FUN_0801cbe8(0x26,sVar3 + 6,sVar9,0xffff,1);
  uVar6 = 0;
  sVar7 = 0x26;
  do {
    sVar8 = sVar7;
    sVar7 = sVar8 + 0x11;
    FUN_0801cbe8(sVar7,sVar3 + 9,sVar9,0xffff,1);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 9);
  FUN_0801cbe8(sVar8 + 0x22,sVar3 + 6,sVar9,0xffff,1);
  sVar7 = 0x28;
  uVar6 = 0;
  do {
    FUN_08027990(sVar3,sVar7,0xd,0xb,uVar4);
    sVar7 = sVar7 + 0x11;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 10);
  if (param_2 != 0) {
    if (10 < param_2) {
      param_2 = 10;
    }
    sVar7 = 0x28;
    for (uVar6 = 0; uVar6 < param_2; uVar6 = uVar6 + 1) {
      FUN_08027990(sVar3,sVar7,0xd,0xb,uVar5);
      sVar7 = sVar7 + 0x11;
    }
    FUN_08027a94(sVar3,0x29,0xb,0xb,DAT_0800c934,uVar4,uVar5);
    if (4 < param_2) {
      FUN_08027a94(sVar3,0x6d,0xb,0xb,DAT_0800c938,uVar4,uVar5);
    }
    if (8 < param_2) {
      FUN_08027a94(sVar3,0xb1,0xb,0xb,DAT_0800c93c,uVar4,uVar5);
    }
  }
  if (param_4 != 0) {
    FUN_08015500();
    return;
  }
  return;
}

