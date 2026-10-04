/**
 * @brief fun_0802776c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802776c, Ghidra name FUN_0802776c, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802776c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  FUN_08027820(0x101,(param_2 & 0xf) << 4 | param_1 & 0xf |
                     (param_4 >> 8 & 0x40 | param_3 & 0xf | (param_4 & 1) << 4 | (param_5 & 1) << 5
                     | (param_6 & 1) << 7) << 8,param_3,param_4);
  return;
}

