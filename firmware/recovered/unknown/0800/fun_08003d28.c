/**
 * @brief fun_08003d28
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003d28, Ghidra name FUN_08003d28, 832 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08003d28(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_98 [3];
  undefined1 local_95;
  undefined1 local_93;
  undefined1 local_8f;
  undefined4 local_84;
  uint local_80;
  uint local_7c [2];
  undefined1 local_74 [6];
  undefined1 local_6e;
  undefined1 local_2e [6];
  int local_28;
  
  FUN_08001016(local_74,0x4c);
  local_7c[0] = 0;
  local_7c[1] = 0;
  local_84 = 0;
  local_80 = 0;
  if (param_1 == 0) {
    FUN_0800f300();
  }
  iVar2 = DAT_08004068;
  uVar1 = (undefined1)param_1;
  *(undefined1 *)(DAT_08004068 + 4) = uVar1;
  iVar3 = DAT_0800406c;
  local_28 = 0x3f;
  if (*(char *)(iVar2 + 3) == '\0') {
    for (uVar7 = 0; uVar7 < 6; uVar7 = uVar7 + 1 & 0xff) {
      if (((uint)*(byte *)(DAT_0800406c + 1) % 6 == uVar7) || (param_1 % 6 == uVar7)) {
        if (param_1 % 6 == uVar7) {
          uVar8 = 0xe0a3;
        }
        else {
          uVar8 = 0;
        }
        uVar9 = local_28 + uVar7 * 0x20;
        FUN_080154a4(0,0xf0,uVar9 & 0xffff,uVar9 + 0x20 & 0xffff,1,uVar8);
        uVar6 = (param_1 / 6) * 6 + uVar7 & 0xff;
        if (uVar6 < 100) {
          FUN_08000850(auStack_98,&DAT_0800408c,uVar6 + 1);
          local_95 = 0;
          uVar9 = uVar9 + 3;
          FUN_08014d88(uVar9 & 0xffff,5,auStack_98,0x18,uVar8,0xffff);
          FUN_0800f510(*(undefined1 *)((param_1 / 6) * 6 + DAT_08004068 + uVar7 + 0x3c7),local_74,
                       0x4c);
          uVar6 = 0;
          do {
            *(undefined1 *)((int)local_7c + uVar6) = local_74[uVar6];
            uVar6 = uVar6 + 1 & 0xff;
          } while (uVar6 < 6);
          if (((local_7c[0] & 0xff) == 0) || ((local_7c[0] & 0xff) == 0xff)) {
            FUN_08000850(auStack_98,s___________0800409c);
          }
          else {
            FUN_08000850(auStack_98,s__s__d_08004094,local_7c,local_6e);
          }
          local_8f = 0;
          FUN_08014d88(uVar9 & 0xffff,0x2d,auStack_98,0x18,uVar8,0xffff);
          uVar6 = 0;
          do {
            *(undefined1 *)((int)&local_84 + uVar6) = local_2e[uVar6];
            uVar6 = uVar6 + 1 & 0xff;
          } while (uVar6 < 6);
          if ((local_84._3_1_ == '\0') || (local_84._3_1_ == -1)) {
            FUN_08000850(auStack_98,s_______080040b8);
          }
          else {
            uVar4 = FUN_08006278(local_84._3_1_,*(undefined1 *)(DAT_080040a8 + 6));
            FUN_08000850(auStack_98,s__02d__02d_080040ac,uVar4,local_80 & 0xff);
          }
          local_93 = 0;
          FUN_08014d88(uVar9 & 0xffff,0xaa,auStack_98,0x18,uVar8,0xffff);
        }
        FUN_08015500();
      }
    }
    *(undefined1 *)(DAT_0800406c + 1) = uVar1;
  }
  else {
    FUN_080152cc(0x3a,0xec,0);
    FUN_080154a4(0,0xf0,0x1c,0x3a,1,0x1ad);
    if (*(char *)(_DAT_08004070 + 8) == '\x01') {
      pcVar5 = &DAT_08004080;
    }
    else {
      pcVar5 = s_Beacon_List_08004073 + 1;
    }
    FUN_08014d88(0x1e,4,pcVar5,0x18,0x1ad,0xffff);
    FUN_08015500();
    *(undefined1 *)(iVar3 + 1) = uVar1;
    for (uVar7 = 0; uVar7 < 6; uVar7 = uVar7 + 1 & 0xff) {
      if (param_1 % 6 == uVar7) {
        uVar8 = 0xe0a3;
      }
      else {
        uVar8 = 0;
      }
      uVar9 = local_28 + uVar7 * 0x20;
      FUN_080154a4(0,0xf0,uVar9 & 0xffff,uVar9 + 0x20 & 0xffff,1,uVar8);
      uVar6 = (param_1 / 6) * 6 + uVar7 & 0xff;
      if (uVar6 < 100) {
        FUN_08000850(auStack_98,&DAT_0800408c,uVar6 + 1);
        local_95 = 0;
        uVar9 = uVar9 + 3;
        FUN_08014d88(uVar9 & 0xffff,5,auStack_98,0x18,uVar8,0xffff);
        FUN_0800f510(*(undefined1 *)((param_1 / 6) * 6 + DAT_08004068 + uVar7 + 0x3c7),local_74,0x4c
                    );
        uVar6 = 0;
        do {
          *(undefined1 *)((int)local_7c + uVar6) = local_74[uVar6];
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 6);
        if (((local_7c[0] & 0xff) == 0) || ((local_7c[0] & 0xff) == 0xff)) {
          FUN_08000850(auStack_98,s___________0800409c);
        }
        else {
          FUN_08000850(auStack_98,s__s__d_08004094,local_7c,local_6e);
        }
        local_8f = 0;
        FUN_08014d88(uVar9 & 0xffff,0x2d,auStack_98,0x18,uVar8,0xffff);
        uVar6 = 0;
        do {
          *(undefined1 *)((int)&local_84 + uVar6) = local_2e[uVar6];
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 6);
        if ((local_84._3_1_ == '\0') || (local_84._3_1_ == -1)) {
          FUN_08000850(auStack_98,s_______080040b8);
        }
        else {
          uVar4 = FUN_08006278(local_84._3_1_,*(undefined1 *)(DAT_080040a8 + 6));
          FUN_08000850(auStack_98,s__02d__02d_080040ac,uVar4,local_80 & 0xff);
        }
        local_93 = 0;
        FUN_08014d88(uVar9 & 0xffff,0xaa,auStack_98,0x18,uVar8,0xffff);
      }
      FUN_08015500();
    }
    *(undefined1 *)(DAT_08004068 + 3) = 0;
  }
  return;
}

