/**
 * @brief fun_0800f20e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f20e, Ghidra name FUN_0800f20e, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f20e(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  *(undefined4 *)(*param_1 + (uint)*(byte *)((int)param_1 + 6) * 4) = param_2;
  uVar1 = *(byte *)((int)param_1 + 6) + 1;
  *(byte *)((int)param_1 + 6) =
       (char)uVar1 - *(byte *)(param_1 + 1) * (char)(uVar1 / *(byte *)(param_1 + 1));
  return;
}

