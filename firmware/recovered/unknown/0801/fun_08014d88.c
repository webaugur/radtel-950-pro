/**
 * @brief fun_08014d88
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014d88, Ghidra name FUN_08014d88, 440 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014d88(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_b4 [128];
  undefined4 local_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar3 = 0;
  bVar1 = false;
  uVar4 = param_5;
  uVar5 = param_6;
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  while (uVar2 = (uint)*(byte *)(param_3 + uVar3), uVar2 != 0) {
    if (uVar2 == 1) {
      FUN_08027a94(local_34,param_2,0xc,0x18,DAT_08014f40,uVar4,uVar5);
      param_2 = param_2 + 0xc & 0xffff;
      uVar3 = uVar3 + 2 & 0xff;
    }
    else if (uVar2 < 0xa1) {
      if (uVar2 == 8) {
        if (uVar3 != 0) {
          FUN_08027990(local_34,param_2,0xd,0x18,uVar4);
          param_2 = param_2 + 0xd & 0xffff;
        }
        bVar1 = true;
        uVar3 = uVar3 + 1 & 0xff;
        uVar4 = param_6;
        uVar5 = param_5;
      }
      else {
        if (uVar2 - 0x20 < 0x5f) {
          if (param_4 == 0x18) {
            FUN_080269ec(param_3 + uVar3,auStack_b4);
            FUN_08027a94(local_34,param_2,0xd,0x18,auStack_b4,uVar4,uVar5);
            param_2 = param_2 + 0xd & 0xffff;
          }
          else if (param_4 == 0x10) {
            FUN_08026af8(param_3 + uVar3,auStack_b4);
            FUN_08027a94(local_34,param_2,8,0x10,auStack_b4,uVar4,uVar5);
            param_2 = param_2 + 8 & 0xffff;
          }
          else if (param_4 == 0xc) {
            FUN_08026ad8(param_3 + uVar3,auStack_b4);
            FUN_08027a94(local_34,param_2,6,0xc,auStack_b4,uVar4,uVar5);
            param_2 = param_2 + 6 & 0xffff;
          }
        }
        else if (uVar2 == 2) {
          uVar3 = uVar3 + 1 & 0xff;
          FUN_08027a94(local_34,param_2,param_4,param_4,auStack_b4,uVar4,uVar5);
          param_2 = param_2 + param_4 & 0xffff;
        }
        uVar3 = uVar3 + 1 & 0xff;
        if (bVar1) {
          bVar1 = false;
          uVar4 = param_5;
          uVar5 = param_6;
        }
      }
    }
    else {
      if (param_4 == 0x18) {
        FUN_08026a6c(param_3 + uVar3,auStack_b4);
        FUN_08027a94(local_34,param_2,0x19,0x18,auStack_b4,uVar4,uVar5);
        param_2 = param_2 + 0x19 & 0xffff;
      }
      else if (param_4 == 0x10) {
        FUN_08026a0c(param_3 + uVar3,auStack_b4);
        FUN_08027a94(local_34,param_2,0x10,0x10,auStack_b4,uVar4,uVar5);
        param_2 = param_2 + 0x10 & 0xffff;
      }
      else if (param_4 == 0xc) {
        FUN_0802697c(param_3 + uVar3,auStack_b4);
        FUN_08027a94(local_34,param_2,0xc,0xc,auStack_b4,uVar4,uVar5);
        param_2 = param_2 + 0xc & 0xffff;
      }
      uVar3 = uVar3 + 2 & 0xff;
      if (bVar1) {
        bVar1 = false;
        uVar4 = param_5;
        uVar5 = param_6;
      }
    }
  }
  return;
}

