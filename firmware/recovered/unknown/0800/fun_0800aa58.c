/**
 * @brief fun_0800aa58
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800aa58, Ghidra name FUN_0800aa58, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800aa58(uint *param_1,uint *param_2)

{
  *param_1 = param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10] | *param_1 & 0xffff800f;
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}

