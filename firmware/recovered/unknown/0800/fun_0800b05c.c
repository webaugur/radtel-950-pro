/**
 * @brief fun_0800b05c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800b05c, Ghidra name FUN_0800b05c, 590 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800b05c(int param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  sVar7 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  uVar5 = 0;
  uVar2 = (uint)*(byte *)(DAT_0800b2ac + 0xfa);
  cVar1 = *(char *)(DAT_0800b2b0 + 0x51);
  if ((uVar2 == param_2) && (cVar1 == '\0')) {
    uVar5 = 0x105;
  }
  if (((param_1 == 0) || (param_1 == 2)) || (param_1 == 4)) {
    if (param_2 == 0) {
      iVar6 = 0x31;
      local_28 = 0x50;
      if ((uVar2 != 0) || (uVar4 = DAT_0800b2c0, cVar1 != '\0')) {
        uVar4 = DAT_0800b2bc;
      }
    }
    else if (param_2 == 1) {
      iVar6 = 0x8a;
      local_28 = 0xa9;
      sVar7 = 0x59;
      uVar4 = DAT_0800b2c4;
      if ((uVar2 == 1) && (uVar4 = DAT_0800b2c4, cVar1 == '\0')) {
        uVar4 = DAT_0800b2c8;
      }
    }
    else {
      iVar6 = 0xe3;
      local_28 = 0x102;
      sVar7 = 0xb2;
      uVar4 = DAT_0800b2b4;
      if (uVar2 != 2) {
        uVar4 = DAT_0800b2b8;
        sVar7 = 0xb2;
      }
    }
  }
  else {
    iVar6 = 0x31;
    local_28 = 0x50;
    uVar4 = DAT_0800b2c0;
    if ((uVar2 != 0) && (uVar4 = DAT_0800b2c8, uVar2 != 1)) {
      uVar4 = DAT_0800b2b4;
    }
  }
  FUN_080154a4(0,0xf0,iVar6,iVar6 + 0x32,1,uVar5);
  FUN_08027b14(sVar7 + 0x31,8,0x14,0x1a,uVar4);
  if (param_1 == 4) {
    uVar2 = (uint)*(ushort *)(DAT_0800b2ac + 0x108);
  }
  else if (param_2 == 1) {
    uVar2 = (uint)*(ushort *)(DAT_0800b2ac + 0x104);
  }
  else if (param_2 == 0) {
    uVar2 = (uint)*(ushort *)(DAT_0800b2ac + 0x102);
  }
  else {
    uVar2 = (uint)*(ushort *)(DAT_0800b2ac + 0x106);
  }
  iVar8 = DAT_0800b2ac + param_2 * 0x58;
  if ((param_3 == 0) && (iVar3 = FUN_0800f228(iVar8 + 0x149,&local_38), iVar3 == 1)) {
    FUN_08014134(iVar6,0x26,&local_38,0x18,uVar5,0xffff,0);
  }
  else if (param_3 == 3) {
    if (*(char *)(DAT_0800b2cc + 8) == '\0') {
      FUN_08000850(&local_38,s_VFO_Mode_0800b2f0);
    }
    else {
      FUN_08000850(&local_38,FUN_0800b2e0);
    }
    FUN_08014134(local_28,8,&local_38,0x10,uVar5,0x59b,0x1d);
  }
  else {
    iVar3 = FUN_0800f228(iVar8 + 0x149,&local_38);
    if (iVar3 == 1) {
      FUN_08014134(local_28,8,&local_38,0x10,uVar5,0x59b,0);
    }
    else {
      if (*(char *)(DAT_0800b2cc + 8) == '\0') {
        FUN_08000850(&local_38,s_CH_Mode_0800b300);
      }
      else {
        FUN_08000850(&local_38,&LAB_0800b2d0);
      }
      FUN_08014134(local_28,8,&local_38,0x10,uVar5,0x59b,0x1d);
    }
  }
  if (param_3 == 2) {
    FUN_08000850(&local_44,s_CH__03d_0800b30c,uVar2 + 1);
    local_3c = local_3c & 0xffffff00;
    FUN_08014b60(iVar6,0x26,&local_44,uVar5);
  }
  else if (param_3 == 0) {
    uVar2 = **(uint **)(iVar8 + 0x128);
    FUN_08000850(&local_44,s__03d__05d_0800b31c,uVar2 / DAT_0800b318,
                 uVar2 - DAT_0800b318 * (uVar2 / DAT_0800b318));
    local_3c._0_2_ = (ushort)(byte)local_3c;
    FUN_08014134(local_28,8,&local_44,0x10,uVar5,0x59b,0);
  }
  else {
    FUN_0800b448(0x26,iVar6,**(undefined4 **)(iVar8 + 0x128),uVar5);
  }
  return;
}

