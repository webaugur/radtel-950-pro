/**
 * @brief fun_080016d6
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080016d6, Ghidra name FUN_080016d6, 20 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080016d6(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_080008ca();
  }
  return 1;
}

