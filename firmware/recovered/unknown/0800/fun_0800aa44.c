/**
 * @brief fun_0800aa44
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800aa44, Ghidra name FUN_0800aa44, 20 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800aa44(uint *param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = *param_1 | param_2;
    return;
  }
  *param_1 = *param_1 & ~param_2;
  return;
}

