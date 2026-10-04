/**
 * @brief fun_08002eba
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002eba, Ghidra name FUN_08002eba, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08002eba(int *param_1,int *param_2)

{
  if ((param_1[1] & ~(*param_1 << 1)) < 0 && (param_2[1] & ~(*param_2 << 1)) < 0) {
    FUN_08002a3e(*param_1,param_1[1],param_1[2]);
    FUN_08002d78();
  }
  return;
}

