/**
 * @brief fun_08014f44
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014f44, Ghidra name FUN_08014f44, 638 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014f44(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_b8;
  undefined1 auStack_b4 [128];
  int local_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  FUN_08001016(auStack_b4,0x80);
  uVar3 = 0;
  while( true ) {
    while( true ) {
      uVar1 = (uint)*(byte *)(param_3 + uVar3);
      if (uVar1 == 0) {
        return;
      }
      if (0xa0 < uVar1) break;
      if (uVar1 - 0x20 < 0x5f) {
        if (param_4 == 0x10) {
          FUN_08026af8(param_3 + uVar3,auStack_b4);
          FUN_08027a94(local_34,param_2,8,0x10,auStack_b4,param_5,param_6);
          param_2 = param_2 + 8 & 0xffff;
        }
        else if (param_4 == 0xc) {
          FUN_08026ad8(param_3 + uVar3,auStack_b4);
          FUN_08027a94(local_34,param_2,6,0xc,auStack_b4,param_5,param_6);
          param_2 = param_2 + 6 & 0xffff;
        }
        else {
          FUN_080269ec(param_3 + uVar3,auStack_b4);
          FUN_08027a94(local_34,param_2,0xd,0x18,auStack_b4,param_5,param_6);
          param_2 = param_2 + 0xd & 0xffff;
        }
        if (param_7 != 0) {
          FUN_08027990(local_34,param_2,param_7,param_4,param_5);
          param_2 = param_2 + (param_7 >> 1) & 0xffff;
        }
      }
      else if (uVar1 == 7) {
        uVar3 = uVar3 + 1 & 0xff;
        uVar1 = *(byte *)(param_3 + uVar3) - 0x30 & 0xff;
        if (uVar1 < 10) {
          local_b8 = uVar1 + 0x30;
          FUN_080269ec(&local_b8,auStack_b4);
          FUN_08027a94(local_34,param_2,0xd,0x18,auStack_b4,param_5,param_6);
        }
        else {
          local_b8 = uVar1 / 10 + 0x30;
          FUN_080269ec(&local_b8,auStack_b4);
          FUN_08027a94(local_34,param_2,0xd,0x18,auStack_b4,param_5,param_6);
          param_2 = param_2 + 0xd & 0xffff;
          local_b8 = uVar1 % 10 + 0x30;
          FUN_080269ec(&local_b8,auStack_b4);
          FUN_08027a94(local_34,param_2,0xd,0x18,auStack_b4,param_5,param_6);
        }
        param_2 = param_2 + 0xd & 0xffff;
        if (param_7 != 0) {
          FUN_08027990(local_34,param_2,param_7,param_4,param_5);
          param_2 = param_2 + (param_7 >> 1) & 0xffff;
        }
      }
      else if (uVar1 == 2) {
        uVar3 = uVar3 + 1 & 0xff;
        uVar1 = *(byte *)(param_3 + uVar3) - 0x10 & 0xff;
        if (uVar1 < 0x10) {
          FUN_08000ee4(auStack_b4,DAT_080151c4 + uVar1 * 0x3f,0x3f);
        }
        FUN_08027a94(local_34 + 2U & 0xffff,param_2,0x15,0x15,auStack_b4,param_5,param_6);
        param_2 = param_2 + 0x15 & 0xffff;
      }
      uVar3 = uVar3 + 1 & 0xff;
    }
    iVar2 = param_3 + uVar3;
    if (*(char *)(iVar2 + 1) == '\0') break;
    if (param_4 == 0x10) {
      FUN_08026a0c(iVar2,auStack_b4);
      FUN_08027a94(local_34,param_2,0x10,0x10,auStack_b4,param_5,param_6);
      param_2 = param_2 + 0x10 & 0xffff;
    }
    else if (param_4 == 0xc) {
      FUN_0802697c(iVar2,auStack_b4);
      FUN_08027a94(local_34,param_2,0xc,0xc,auStack_b4,param_5,param_6);
      param_2 = param_2 + 0xc & 0xffff;
    }
    else {
      FUN_08026a6c(iVar2,auStack_b4);
      FUN_08027a94(local_34,param_2,0x19,0x18,auStack_b4,param_5,param_6);
      param_2 = param_2 + 0x19 & 0xffff;
    }
    if (param_7 != 0) {
      FUN_08027990(local_34,param_2,param_7,param_4,param_5);
      param_2 = param_2 + param_7 & 0xffff;
    }
    uVar3 = uVar3 + 2 & 0xff;
  }
  if (param_4 != 0x10) {
    if (param_4 != 0xc) {
      FUN_08027990(local_34,param_2,0xc,0x18,param_5);
      return;
    }
    FUN_08027990(local_34,param_2,6,0xc,param_5);
    return;
  }
  FUN_08027990(local_34,param_2,8,0x10,param_5);
  return;
}

