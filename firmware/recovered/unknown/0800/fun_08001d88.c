/**
 * @brief fun_08001d88
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001d88, Ghidra name FUN_08001d88, 18 bytes.
 *       Not linked into rt950-firmware.
 */

byte FUN_08001d88(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_080007cc();
  return *(byte *)(*piVar1 + param_1) & 1;
}

