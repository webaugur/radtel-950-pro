/**
 * @brief fun_0800ed30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ed30, Ghidra name FUN_0800ed30, 44 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ed30(int param_1)

{
  if (param_1 != 1) {
    FUN_08027820(0x4001,0);
    FUN_08027820(0x4000,0x3f);
    return;
  }
  FUN_08027820(0x4001,3);
  return;
}

