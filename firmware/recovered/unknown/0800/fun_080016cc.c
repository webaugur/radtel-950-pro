/**
 * @brief fun_080016cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080016cc, Ghidra name FUN_080016cc, 10 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080016cc(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}

