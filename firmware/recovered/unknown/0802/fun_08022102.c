/**
 * @brief fun_08022102
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022102, Ghidra name FUN_08022102, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022102(ushort *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = *param_1 | 1;
    return;
  }
  *param_1 = *param_1 & 0xfffe;
  return;
}

