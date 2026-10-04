/**
 * @brief fun_0801cb30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cb30, Ghidra name FUN_0801cb30, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801cb30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  FUN_0801537c(param_1,param_2,param_3,param_5);
  FUN_0801544c(param_1,param_2,param_4,param_5);
  FUN_0801537c(param_1,param_4,param_3,param_5);
  FUN_0801544c(param_3,param_2,param_4 + 1U & 0xffff,param_5);
  return;
}

