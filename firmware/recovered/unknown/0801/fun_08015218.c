/**
 * @brief fun_08015218
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015218, Ghidra name FUN_08015218, 102 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015218(uint param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_08015280;
  uVar4 = param_4 * param_3 * 2 & 0xffff;
  if (0x9600 < uVar4) {
    uVar4 = 0x9600;
  }
  for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 2 & 0xffff) {
    *(char *)(iVar2 + uVar3) = (char)((uint)param_5 >> 8);
    *(char *)(iVar2 + uVar3 + 1) = (char)param_5;
  }
  for (; 0 < (int)param_4; param_4 = param_4 - uVar4) {
    if ((int)param_4 < 0x51) {
      uVar4 = param_4 & 0xffff;
    }
    else {
      uVar4 = 0x50;
    }
    uVar1 = (short)param_1 + (short)uVar4;
    FUN_0801576c(param_2,param_3 + param_2 & 0xffff,param_1,uVar1);
    param_1 = (uint)uVar1;
  }
  return;
}

