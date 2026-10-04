/**
 * @brief fun_0800808c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800808c, Ghidra name FUN_0800808c, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800808c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int extraout_r2;
  
  iVar3 = FUN_08009214(param_1,param_2,param_1);
  uVar1 = DAT_080080e0;
  if (iVar3 == 0) {
    if (extraout_r2 == 0) {
      FUN_0800ec20();
      FUN_0800eb84(uVar1,DAT_080080e8);
      FUN_0800eb6c();
    }
    else {
      FUN_0800ec20();
      FUN_0800eb84(uVar1,DAT_080080e4);
      FUN_0800eb6c();
    }
  }
  cVar2 = FUN_08009214();
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      FUN_0800d174(1);
      return;
    }
    return;
  }
  FUN_0800d174(0);
  return;
}

