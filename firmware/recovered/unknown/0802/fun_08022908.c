/**
 * @brief fun_08022908
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022908, Ghidra name FUN_08022908, 76 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022908(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_08000ea6(param_2);
  if (param_3 <= uVar1) {
    FUN_08000ee4(param_1,param_2,param_3);
    return;
  }
  FUN_08000bca(param_1,param_3,0x20);
  uVar2 = FUN_08000ea6(param_2);
  iVar3 = FUN_08000ea6(param_2);
  FUN_08000ee4(param_1 + (param_3 - iVar3 >> 1),param_2,uVar2);
  return;
}

