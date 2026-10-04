/**
 * @brief fun_080146cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080146cc, Ghidra name FUN_080146cc, 24 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080146cc(int param_1)

{
  if (((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0x10) == 0)) &&
     (*(int *)(param_1 + 0x1d) == 0)) {
    return 1;
  }
  return 0;
}

