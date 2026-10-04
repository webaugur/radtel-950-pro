/**
 * @brief fun_08000b74
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000b74, Ghidra name FUN_08000b74, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08000b74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_48 [6];
  int local_30;
  int local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_48[0] = &uStack_8;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_30 = DAT_08000ba8 + 0x8000b92;
  local_2c = DAT_08000bac + 0x8000b98;
  local_24 = param_1;
  local_1c = param_1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_08001bf4(&local_24,param_2,local_48);
  return;
}

