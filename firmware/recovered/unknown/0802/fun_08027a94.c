/**
 * @brief fun_08027a94
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027a94, Ghidra name FUN_08027a94, 128 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027a94(int param_1,uint param_2,uint param_3,uint param_4,int param_5,undefined4 param_6,
                 undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (((param_4 != 0) && (param_3 != 0)) && (param_2 < 0xf1)) {
    if (0xf0 < param_2 + param_3) {
      param_3 = 0xf0 - param_2 & 0xffff;
    }
    FUN_0801548c(param_2,param_2 + param_3 & 0xffff,param_1,param_1 + param_4 & 0xffff);
    uVar2 = 1;
    iVar4 = 0;
    for (uVar3 = 0; uVar3 < param_4; uVar3 = uVar3 + 1) {
      for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
        if ((*(byte *)(param_5 + uVar1 + iVar4) & uVar2) == 0) {
          FUN_080157c0(param_6);
        }
        else {
          FUN_080157c0(param_7);
        }
      }
      if ((uVar3 + 1 & 7) == 0) {
        uVar2 = 1;
        iVar4 = iVar4 + param_3;
      }
      else {
        uVar2 = uVar2 << 1;
      }
    }
  }
  return;
}

