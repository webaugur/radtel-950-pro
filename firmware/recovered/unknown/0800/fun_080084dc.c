/**
 * @brief fun_080084dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080084dc, Ghidra name FUN_080084dc, 14 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080084dc(int param_1,undefined2 param_2)

{
  *(undefined2 *)(DAT_080084ec + param_1 * 2 + 0x102) = param_2;
  FUN_08010520();
  return;
}

