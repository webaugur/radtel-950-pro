/**
 * @brief fun_0801958c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801958c, Ghidra name FUN_0801958c, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801958c(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int local_18 [3];
  
  local_18[0] = param_2;
  local_18[1] = param_3;
  local_18[2] = param_4;
  FUN_08000850(local_18,&DAT_080195b4,param_1);
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xff) {
    *(char *)(param_2 + uVar1) = *(char *)((int)local_18 + uVar1) + -0x30;
  }
  return;
}

