/**
 * @brief fun_080091dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080091dc, Ghidra name FUN_080091dc, 54 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080091dc(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 7) {
    return 0;
  }
  iVar1 = FUN_08000e06(param_1,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = *(byte *)(param_1 + 6) - 1;
  if (uVar2 < 0xf) {
    *(char *)(param_2 + 6) = (char)uVar2;
    return 1;
  }
  return 0;
}

