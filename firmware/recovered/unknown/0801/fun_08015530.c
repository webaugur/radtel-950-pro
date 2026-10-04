/**
 * @brief fun_08015530
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015530, Ghidra name FUN_08015530, 552 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015530(byte param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_38 [20];
  
  FUN_08001016(auStack_38,0x14);
  pbVar1 = DAT_0801575c;
  iVar8 = DAT_08015758;
  param_1 = param_1 & 0xc0;
  if (*DAT_0801575c != param_1) {
    FUN_0800a1c4(4);
    *pbVar1 = param_1;
  }
  sVar4 = 0x9e;
  if ((param_1 != 0xc0) || (*(char *)(DAT_08015760 + 3) == '\0')) {
    FUN_08027990(0x76,0xb5,0x31,0x22,0);
    FUN_080154a4(0x10,0xe4,0x7b,0x94,1,0);
    FUN_08014d88(0x7b,0x10,DAT_08015764,0x18,0,0xffff);
    FUN_08015500();
  }
  iVar2 = DAT_08015764;
  iVar7 = DAT_08015764 + 0x44;
  if (param_1 == 0x80) {
    FUN_080154a4(0xe,0xe4,0xfe,0x117,1,0);
    FUN_08014f44(0xfe,0xe,iVar7,0x18,0,0xffff,0);
    FUN_08015500();
  }
  else if (param_1 == 0x40) {
    FUN_080154a4(0xe,0xe4,0xfe,0x117,1,0);
    FUN_08014f44(0xfe,0xe,iVar7,0x18,0,0xffff,1);
    FUN_08015500();
  }
  else if (param_1 == 0xc0) {
    sVar5 = 0x7e;
    sVar4 = 0xc;
    if (*DAT_08015768 < 6) {
      uVar6 = 0;
    }
    else {
      uVar6 = 6;
    }
    uVar9 = 0;
    do {
      FUN_080154a4(sVar4 + -2,sVar4 + 0x42,sVar5,sVar5 + 0x49,1,0);
      pbVar1 = DAT_08015768;
      if (DAT_08015768[uVar6 * 0xd + 6] == 2) {
        uVar3 = DAT_08015768[uVar6 * 0xd + 7] - 0x12;
        if (0x27 < uVar3) {
          uVar3 = DAT_08015768[uVar6 * 0xd + 7] - 0x2e;
        }
        FUN_08027b14(sVar5,sVar4,0x3a,0x3a,iVar8 + uVar3 * 0x1a48);
      }
      else {
        FUN_08027990(sVar5,sVar4,0x3a,0x3a,0);
      }
      FUN_08022908(auStack_38,pbVar1 + uVar6 * 0xd + 8,10);
      FUN_08014f44(sVar5 + 0x3d,sVar4 + -1,auStack_38,0xc,0,0xffff,0);
      FUN_08015500();
      uVar6 = (uVar6 + 1) % 0xc;
      sVar4 = sVar4 + 0x50;
      if (uVar9 == 2) {
        sVar4 = 0xc;
        sVar5 = 0xd3;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 6);
  }
  else {
    uVar6 = 1;
    do {
      iVar8 = uVar6 * 0x11 + iVar2;
      *(undefined1 *)(iVar8 + 0x10) = 0;
      if (*(char *)(DAT_08015764 + 0x55 + uVar6 * 0x10) == '\0') {
        FUN_080154a4(0xb,0xe4,sVar4 + -2,sVar4 + 0x1a,1,0);
        FUN_08014f44(sVar4,0xe,iVar8,0x18,0,0xffff,0);
      }
      else {
        FUN_080154a4(0xb,0xe4,sVar4 + -2,sVar4 + 0x1a,1,0x3377);
        FUN_08014f44(sVar4,0xe,iVar8,0x18,0x3377,0xffff,0);
      }
      FUN_08015500();
      sVar4 = sVar4 + 0x20;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
  }
  return;
}

