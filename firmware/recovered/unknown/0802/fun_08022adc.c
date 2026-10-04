/**
 * @brief fun_08022adc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022adc, Ghidra name FUN_08022adc, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022adc(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x2000;
    return;
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xdfff;
  return;
}

