/**
 * @brief fun_0800d518
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d518, Ghidra name FUN_0800d518, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800d518(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_0800d540;
  FUN_0800a9b8(DAT_0800d540,0);
  *(undefined4 *)(iVar1 + 4) = param_3;
  *(undefined4 *)(DAT_0800d540 + 0xc) = param_2;
  FUN_0800a9b8(iVar1,1);
  return;
}

