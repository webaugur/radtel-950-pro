/**
 * @brief fun_0800e1c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e1c8, Ghidra name FUN_0800e1c8, 686 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800e1c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_30;
  byte *local_2c;
  
  local_30 = param_3;
  local_2c = (byte *)param_4;
  FUN_0800e828(0);
  iVar2 = iRam0800e42c;
  *(undefined1 *)(iRam0800e42c + 1) = 8;
  iVar4 = FUN_08008aa8();
  if (iVar4 != 0) {
    FUN_080039f8(0);
  }
  FUN_0801ac24();
  FUN_0801b6cc();
  FUN_0800be54();
  pbVar3 = pbRam0800e430;
  if (*(char *)(iVar2 + 0x47) == '\x01') {
    *pbRam0800e430 = 1;
  }
  else {
    *pbRam0800e430 = 0;
  }
  FUN_08012aea(&local_30);
  local_30 = 0x18020400;
  FUN_080125d4(uRam0800e434,&local_30);
  local_2c = pbVar3 + 0x10;
  do {
    while( true ) {
      iVar4 = FUN_08008214();
      if (iVar4 != 0) {
        FUN_08009980();
      }
      if (pbVar3[3] == 0) break;
      pbVar3[3] = 0;
      if (*pbVar3 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0800e252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&switchD_0800e252::switchdataD_0800e256 +
                  (uint)(&switchD_0800e252::switchdataD_0800e256)[*pbVar3] * 2))();
        return;
      }
      iVar4 = FUN_080097ac();
      if (iVar4 == 1) {
        FUN_08019c98();
        *pbVar3 = 1;
      }
    }
    if ((*pbVar3 == 7) && (bVar1 = pbVar3[1], pbVar3[1] = bVar1 + 1, 2 < (byte)(bVar1 + 1))) {
      *pbVar3 = 4;
    }
  } while (*pbVar3 != 4);
  FUN_08015868(0);
  FUN_08015824(0);
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  *pbVar3 = 0;
  if (pbVar3[0xa0] == 0x57) {
    FUN_08018f7c();
    uVar7 = 0x800e42b;
    uVar6 = 0;
    FUN_0800da50(0,0);
    if (*(char *)(DAT_0800e480 + 0x38) == '\x01') {
      *(undefined1 *)(DAT_0800e480 + 0x38) = 0;
    }
    iVar2 = DAT_0800e484;
    if (*(char *)(DAT_0800e484 + 1) == '\x01') {
      FUN_0800e95c(0);
    }
    FUN_0801b334();
    *(undefined1 *)(iVar2 + 1) = 0x11;
    *DAT_0800e488 = 1;
    FUN_0800b604(1);
    FUN_0800ca18();
    FUN_0800a1c4(4);
    uVar5 = 0;
    FUN_080154a4(0x37,0xb9,0x86,0xd1,0,0,uVar6,uVar7);
    uVar6 = DAT_0801a4ec;
    FUN_08027b14(0x86,0x39,0x7e,0x4b);
    FUN_08015500();
    FUN_0801a4f0(0,extraout_r1,uVar6,uVar5);
    return;
  }
  *(undefined1 *)(iVar2 + 0x47) = 0;
  pbVar3[2] = 0;
  *(undefined1 *)(iVar2 + 1) = 0;
  FUN_0800b980();
  return;
}

