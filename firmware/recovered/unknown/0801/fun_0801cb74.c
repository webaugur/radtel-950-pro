/**
 * @brief fun_0801cb74
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cb74, Ghidra name FUN_0801cb74, 116 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801cb74(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  if ((3 < param_3 - param_1) && (3 < param_4 - param_2)) {
    sVar4 = 2;
    uVar3 = 1;
    iVar5 = param_2;
    do {
      sVar2 = (short)param_4 - sVar4;
      sVar1 = (short)param_2 + sVar4;
      FUN_0801544c((param_1 + uVar3) - 1 & 0xffff,sVar1,sVar2,param_5,iVar5);
      FUN_0801544c(param_3 - uVar3 & 0xffff,sVar1,sVar2,param_5);
      sVar4 = sVar4 + -1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    FUN_08015218(param_2,param_1 + 2U & 0xffff,(param_3 - param_1) - 4U & 0xffff,
                 param_4 - param_2 & 0xffff,param_5);
  }
  return;
}

