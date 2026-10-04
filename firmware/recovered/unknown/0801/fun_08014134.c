/**
 * @brief fun_08014134
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014134, Ghidra name FUN_08014134, 204 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014134(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int unaff_r7;
  undefined1 auStack_b8 [132];
  undefined4 local_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar2 = 0;
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  FUN_08001016(auStack_b8,0x84);
  while (uVar1 = (uint)*(byte *)(param_3 + uVar2), uVar1 != 0) {
    if (uVar1 < 0xa1) {
      if (uVar1 - 0x20 < 0x5f) {
        if (param_4 == 0x10) {
          FUN_08026af8(param_3 + uVar2,auStack_b8);
          unaff_r7 = 8;
        }
        else if (param_4 == 0x18) {
          FUN_080269ec(param_3 + uVar2,auStack_b8);
          unaff_r7 = 0xd;
        }
        FUN_08027a94(local_34,param_2,unaff_r7,param_4,auStack_b8,param_5,param_6);
        param_2 = param_2 + unaff_r7 & 0xffff;
      }
      uVar2 = uVar2 + 1 & 0xff;
    }
    else {
      if (param_4 == 0x10) {
        FUN_08026a0c(param_3 + uVar2,auStack_b8);
        unaff_r7 = 0x10;
      }
      else if (param_4 == 0x18) {
        FUN_08026a6c(param_3 + uVar2,auStack_b8);
        unaff_r7 = 0x19;
      }
      FUN_08027a94(local_34,param_2,unaff_r7,param_4,auStack_b8,param_5,param_6);
      if ((*(char *)(param_3 + uVar2) == -0x5f) && (*(char *)(param_3 + uVar2 + 1) == -0x1d)) {
        param_2 = param_2 + 8;
      }
      else {
        param_2 = param_2 + unaff_r7;
      }
      param_2 = param_2 & 0xffff;
      uVar2 = uVar2 + 2 & 0xff;
    }
  }
  return;
}

