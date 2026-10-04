/**
 * @brief fun_08002f0a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002f0a, Ghidra name FUN_08002f0a, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08002f0a(uint *param_1,uint *param_2)

{
  if ((*param_1 & 0x40000000) == 0 && (*param_2 & 0x40000000) == 0) {
    FUN_08002f32(*param_1,param_1[1],param_1[2]);
    FUN_08002d78();
  }
  return;
}

