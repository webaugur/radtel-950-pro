/**
 * @brief fun_080032ba
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080032ba, Ghidra name FUN_080032ba, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080032ba(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x500000;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffafffff;
  return;
}

