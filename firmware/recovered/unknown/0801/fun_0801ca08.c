/**
 * @brief fun_0801ca08
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ca08, Ghidra name FUN_0801ca08, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ca08(ushort *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = *param_1 | 0x40;
    return;
  }
  *param_1 = *param_1 & 0xffbf;
  return;
}

