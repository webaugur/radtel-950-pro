/**
 * @brief fun_08007166
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007166, Ghidra name FUN_08007166, 44 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08007166(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_18;
  
  uVar1 = 0;
  local_18 = param_4;
  while ((uVar1 < param_2 && (FUN_08021824(param_1,&local_18,1), (char)local_18 != -0x5b))) {
    param_1 = param_1 + param_3;
    uVar1 = uVar1 + 1 & 0xffff;
  }
  return uVar1;
}

