/**
 * @brief fun_0801ca36
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ca36, Ghidra name FUN_0801ca36, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ca36(ushort *param_1,ushort *param_2)

{
  if ((int)((uint)param_2[6] << 0x10) < 0) {
    param_1[2] = param_1[2] | 0x100;
  }
  else {
    param_1[2] = param_1[2] & 0xfeff;
  }
  *param_1 = *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] |
             (ushort)(((uint)param_2[6] << 0x11) >> 0x11) | param_2[7] | *param_1 & 0x3040;
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
}

