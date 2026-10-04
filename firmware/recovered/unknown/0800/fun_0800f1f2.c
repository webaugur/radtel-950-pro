/**
 * @brief fun_0800f1f2
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f1f2, Ghidra name FUN_0800f1f2, 28 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800f1f2(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*param_1 + (uint)*(byte *)((int)param_1 + 5) * 4);
  uVar1 = *(byte *)((int)param_1 + 5) + 1;
  *(byte *)((int)param_1 + 5) =
       (char)uVar1 - *(byte *)(param_1 + 1) * (char)(uVar1 / *(byte *)(param_1 + 1));
  return uVar2;
}

