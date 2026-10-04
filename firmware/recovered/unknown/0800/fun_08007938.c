/**
 * @brief fun_08007938
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007938, Ghidra name FUN_08007938, 26 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08007938(byte *param_1,uint param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 1;
    }
    if (*param_1 != param_2) break;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return 0;
}

