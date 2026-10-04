/**
 * @brief fun_080008a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080008a8, Ghidra name FUN_080008a8, 34 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080008a8(byte *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(param_1 + 4))(0x20,*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}

