/**
 * @brief fun_0800c270
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c270, Ghidra name FUN_0800c270, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c270(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_08000850(&local_20,s__d__05d_0800c2b4,param_3 / DAT_0800c2b0,
               param_3 - DAT_0800c2b0 * (param_3 / DAT_0800c2b0));
  FUN_08014f44(param_2,param_1,&local_20,0x18,0,param_4,0);
  return;
}

