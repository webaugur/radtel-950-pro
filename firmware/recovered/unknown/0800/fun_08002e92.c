/**
 * @brief fun_08002e92
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002e92, Ghidra name FUN_08002e92, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08002e92(int *param_1,int *param_2)

{
  if ((param_1[1] & ~(*param_1 << 1)) < 0 && (param_2[1] & ~(*param_2 << 1)) < 0) {
    FUN_08002a3e(*param_1,param_1[1],param_1[2]);
    FUN_08002dcc();
  }
  return;
}

