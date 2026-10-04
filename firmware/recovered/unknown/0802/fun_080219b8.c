/**
 * @brief fun_080219b8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080219b8, Ghidra name FUN_080219b8, 102 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080219b8(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x100 - (param_1 & 0xff);
  if (uVar1 < param_3) {
    FUN_08021934(param_1,param_2,uVar1);
    param_3 = param_3 - uVar1;
    iVar2 = param_1 + uVar1;
    param_2 = uVar1 + param_2;
    while (param_3 != 0) {
      if (param_3 < 0x101) {
        FUN_08021934(iVar2,param_2,param_3 & 0xffff);
        param_3 = 0;
      }
      else {
        FUN_08021934(iVar2,param_2);
        param_3 = param_3 - 0x100;
        iVar2 = iVar2 + 0x100;
        param_2 = param_2 + 0x100;
      }
    }
    return;
  }
  FUN_08021934(param_1,param_2,param_3 & 0xffff);
  return;
}

