/**
 * @brief fun_0800bd10
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800bd10, Ghidra name FUN_0800bd10, 280 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800bd10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 extraout_r1;
  char *pcVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar1 = DAT_0800be28;
  FUN_08000fd2(DAT_0800be28,0x1e1,param_3,param_4,param_3,param_4);
  iVar2 = _DAT_0800be2c;
  if ((*(byte *)(_DAT_0800be2c + 0x1c) & 3) == 0) {
    iVar7 = 0x90000;
    uVar5 = 0;
    sVar3 = 0;
    do {
      FUN_08021824(iVar7,iVar1,0x3c00);
      uVar9 = 0;
      FUN_080154a4(0,0xf0,sVar3,sVar3 + 0x20,0);
      iVar8 = iVar1;
      FUN_08027b14(sVar3,0,0xf0,0x20);
      FUN_08015500();
      iVar7 = iVar7 + 0x3c00;
      uVar5 = uVar5 + 1;
      sVar3 = sVar3 + 0x20;
    } while (uVar5 < 10);
  }
  else {
    FUN_080152cc(0,0x140);
    FUN_08013d88();
    FUN_0800ad06(0x14);
    sVar3 = FUN_08013d88();
    uVar6 = (uint)(sVar3 * 0x1e2) / 1000;
    if (*(char *)(iVar2 + 8) == '\x01') {
      pcVar4 = &DAT_0800be48;
    }
    else {
      pcVar4 = s_Voltage_0800be2f + 1;
    }
    FUN_08000850(iVar1,&DAT_0800be3c,pcVar4);
    FUN_08000850(iVar1 + 8,s__d__dV_0800be40,uVar6 / 10,uVar6 % 10);
    FUN_080154a4(0,0xf0,0x89,0xa2,0,0);
    iVar8 = 0;
    uVar9 = 0xffff;
    FUN_08014d88(0x89,0x25,iVar1,0x18);
    FUN_08015500();
  }
  FUN_080151cc(1);
  if (*(char *)(iVar2 + 7) != '\0') {
    FUN_0800ad06(200,extraout_r1,iVar8,uVar9);
    return;
  }
  FUN_0800ad06(800,extraout_r1,iVar8,uVar9);
  return;
}

