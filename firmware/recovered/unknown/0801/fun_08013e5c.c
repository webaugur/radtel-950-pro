/**
 * @brief fun_08013e5c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013e5c, Ghidra name FUN_08013e5c, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08013e5c(undefined4 param_1,undefined2 param_2,int param_3,undefined3 param_4)

{
  undefined4 local_8;
  
  if (param_3 == 0) {
    local_8 = CONCAT13(0x48,param_4);
  }
  else {
    local_8._2_2_ = 0x1002;
  }
  local_8 = CONCAT22(local_8._2_2_,param_2);
  FUN_080125d4(param_1,&local_8);
  return;
}

