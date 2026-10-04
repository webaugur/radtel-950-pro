/**
 * @brief fun_08012afe
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012afe, Ghidra name FUN_08012afe, 116 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08012afe(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 - param_3 < 0) {
    param_1 = param_3;
  }
  if (param_2 - param_3 < 0) {
    param_2 = param_3;
  }
  for (uVar1 = param_2 - param_3; uVar1 = uVar1 & 0xffff, uVar1 < (uint)(param_2 + param_3);
      uVar1 = uVar1 + 1) {
    for (uVar2 = param_1 - param_3; uVar2 = uVar2 & 0xffff, uVar2 < (uint)(param_1 + param_3);
        uVar2 = uVar2 + 1) {
      iVar3 = (param_2 - uVar1) * (param_2 - uVar1) + (param_1 - uVar2) * (param_1 - uVar2);
      if ((iVar3 < param_3 * param_3) && ((param_3 - param_4) * (param_3 - param_4) < iVar3)) {
        FUN_0801caec(uVar2,uVar1,uVar2 + 1 & 0xffff,param_5,1);
      }
    }
  }
  return;
}

