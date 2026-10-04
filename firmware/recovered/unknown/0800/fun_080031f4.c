/**
 * @brief fun_080031f4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080031f4, Ghidra name FUN_080031f4, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080031f4(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 4) =
       *param_2 | *(uint *)(param_1 + 4) & DAT_08003234 | (uint)(byte)param_2[1] << 8;
  *(uint *)(param_1 + 8) =
       param_2[3] | param_2[2] |
       *(uint *)(param_1 + 8) & DAT_08003238 | (uint)*(byte *)((int)param_2 + 5) << 1;
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & 0xff0fffff | ((byte)param_2[4] - 1 & 0xff) << 0x14;
  return;
}

