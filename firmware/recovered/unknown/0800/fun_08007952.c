/**
 * @brief fun_08007952
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007952, Ghidra name FUN_08007952, 48 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08007952(byte *param_1,int param_2,byte param_3)

{
  byte bVar1;
  
  for (param_2 = param_2 + -1; 0 < param_2; param_2 = (int)(short)((short)param_2 + -1)) {
    bVar1 = param_1[param_2];
    param_1[param_2] = bVar1 << 1;
    if ((int)((uint)param_1[param_2 + -1] << 0x18) < 0) {
      param_1[param_2] = bVar1 << 1 | 1;
    }
  }
  *param_1 = *param_1 << 1 | param_3;
  return;
}

