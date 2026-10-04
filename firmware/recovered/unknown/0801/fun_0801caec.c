/**
 * @brief fun_0801caec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801caec, Ghidra name FUN_0801caec, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801caec(uint param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_0801548c(param_1,param_3,param_2,param_2 + param_5 & 0xffff);
  if (param_1 < param_3) {
    uVar1 = (short)param_3 - (short)param_1;
  }
  else {
    uVar1 = (short)param_1 - (short)param_3;
  }
  for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
    for (uVar2 = 0; uVar2 < param_5; uVar2 = uVar2 + 1) {
      FUN_080157c0(param_4);
    }
  }
  return;
}

