/**
 * @brief fun_08001be8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001be8, Ghidra name FUN_08001be8, 12 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 FUN_08001be8(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)*param_1;
  *param_1 = (undefined1 *)*param_1 + param_2;
  return uVar1;
}

