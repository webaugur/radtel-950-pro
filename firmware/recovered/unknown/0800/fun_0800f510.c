/**
 * @brief fun_0800f510
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f510, Ghidra name FUN_0800f510, 110 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f510(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = (param_1 >> 2) * 0x1000 + 0x13000;
  uStack_20 = param_3;
  uStack_1c = param_4;
  bVar1 = FUN_08007166(iVar3,0x13,8);
  if (bVar1 < 0x13) {
    FUN_08021824(iVar3 + (uint)bVar1 * 8,&uStack_20,8);
    uVar2 = FUN_0800a878((int)&uStack_20 + 3,5);
    if (uVar2 == (uStack_20 >> 8 & 0xffff)) {
      FUN_08021824((short)(ushort)*(byte *)((int)&uStack_1c + (param_1 & 3)) * 0xcd + iVar3 + 0xa0,
                   param_2,param_3);
      return;
    }
  }
  FUN_08000fd2(param_2,param_3);
  return;
}

