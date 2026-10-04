/**
 * @brief fun_0801576c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801576c, Ghidra name FUN_0801576c, 216 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801576c(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  dword dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0x140 < param_4) {
    param_4 = 0x140;
  }
  if (0xf0 < param_2) {
    param_2 = 0xf0;
  }
  uVar4 = (param_2 - param_1) * (param_4 - param_3) * 2;
  if (0x9600 < uVar4) {
    uVar4 = 0x9600;
  }
  FUN_0801cc2a();
  FUN_08027b68();
  dVar2 = DWORD_08027980;
  iVar1 = DAT_080157a4;
  FUN_08012ae2(DWORD_08027980,2);
  FUN_08012ae6(dVar2,8);
  FUN_08012ae2(dVar2,1);
  uVar3 = FUN_08012adc(dVar2);
  for (uVar5 = 0; uVar5 < (uVar4 & 0xffff); uVar5 = uVar5 + 1 & 0xffff) {
    FUN_08012ae2(dVar2,1);
    FUN_08012afa(dVar2,uVar3 & 0xff | (uint)*(byte *)(iVar1 + uVar5) << 8);
    FUN_08012ae6(dVar2,1);
  }
  FUN_08012ae6(dVar2,2);
  return;
}

