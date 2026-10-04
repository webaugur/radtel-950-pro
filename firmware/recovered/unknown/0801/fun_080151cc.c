/**
 * @brief fun_080151cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080151cc, Ghidra name FUN_080151cc, 66 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080151cc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_08015214;
  if (param_1 != 0) {
    FUN_08012ae6(DAT_08015210,0x40);
    FUN_08012ae6(uVar1,8);
    FUN_08012ae6(uVar1,8);
    return;
  }
  FUN_08012ae2(DAT_08015210,0x40);
  FUN_08012ae2(uVar1,8);
  FUN_08012ae2(uVar1,8);
  return;
}

