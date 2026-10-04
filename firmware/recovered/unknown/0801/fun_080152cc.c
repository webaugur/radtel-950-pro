/**
 * @brief fun_080152cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080152cc, Ghidra name FUN_080152cc, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080152cc(uint param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_08015320;
  uVar4 = param_2 * 0x1e0;
  if (0x9600 < uVar4) {
    uVar4 = 0x9600;
  }
  for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 2 & 0xffff) {
    *(char *)(iVar2 + uVar3) = (char)((uint)param_3 >> 8);
    *(char *)(iVar2 + uVar3 + 1) = (char)param_3;
  }
  for (; 0 < (int)param_2; param_2 = param_2 - uVar4) {
    if ((int)param_2 < 0x51) {
      uVar4 = param_2 & 0xffff;
    }
    else {
      uVar4 = 0x50;
    }
    uVar1 = (short)param_1 + (short)uVar4;
    FUN_0801576c(0,0xf0,param_1,uVar1);
    param_1 = (uint)uVar1;
  }
  return;
}

