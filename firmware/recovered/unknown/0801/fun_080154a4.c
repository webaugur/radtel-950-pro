/**
 * @brief fun_080154a4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080154a4, Ghidra name FUN_080154a4, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080154a4(int param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_080154f8;
  if (0x140 < param_4) {
    param_4 = 0x140;
  }
  *(short *)(DAT_080154f8 + 0xc) = (short)param_1;
  *(short *)(iVar1 + 0xe) = (short)param_3;
  *(short *)(iVar1 + 0x10) = (short)param_2;
  *(short *)(iVar1 + 0x12) = (short)param_4;
  uVar3 = (param_2 - param_1) * 2;
  *(short *)(iVar1 + 0x14) = (short)uVar3;
  iVar1 = DAT_080154fc;
  if (param_5 != 0) {
    uVar3 = (param_4 - param_3) * (uVar3 & 0xffff) & 0xffff;
    if (0x9600 < uVar3) {
      uVar3 = 0x9600;
    }
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 2 & 0xffff) {
      *(char *)(iVar1 + uVar2) = (char)((uint)param_6 >> 8);
      *(char *)(iVar1 + uVar2 + 1) = (char)param_6;
    }
  }
  return;
}

