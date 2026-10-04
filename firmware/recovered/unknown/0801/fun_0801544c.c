/**
 * @brief fun_0801544c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801544c, Ghidra name FUN_0801544c, 64 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801544c(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_2 < param_3) {
    uVar1 = (short)param_3 - (short)param_2;
  }
  else {
    uVar1 = (short)param_2 - (short)param_3;
  }
  for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
    FUN_080157a8(param_4,uVar2);
  }
  FUN_0801576c(param_1,param_1 + 1U & 0xffff,param_2,param_3);
  return;
}

