/**
 * @brief fun_0801cbe8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cbe8, Ghidra name FUN_0801cbe8, 66 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801cbe8(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_0801548c(param_1,param_1 + param_5 & 0xffff,param_2,param_3);
  if (param_2 < param_3) {
    uVar1 = (short)param_3 - (short)param_2;
  }
  else {
    uVar1 = (short)param_2 - (short)param_3;
  }
  for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
    for (uVar2 = 0; uVar2 < param_5; uVar2 = uVar2 + 1) {
      FUN_080157c0(param_4);
    }
  }
  return;
}

