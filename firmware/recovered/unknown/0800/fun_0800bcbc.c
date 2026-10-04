/**
 * @brief fun_0800bcbc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800bcbc, Ghidra name FUN_0800bcbc, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800bcbc(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08000850(&local_1c,s__03d__05d_0800bd04,param_3 / DAT_0800bd00,
               param_3 - DAT_0800bd00 * (param_3 / DAT_0800bd00));
  FUN_08014f44(param_2,param_1,&local_1c,0x10,param_4,0x6cb7,1);
  return;
}

