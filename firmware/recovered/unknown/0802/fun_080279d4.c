/**
 * @brief fun_080279d4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080279d4, Ghidra name FUN_080279d4, 92 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080279d4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_08027a30;
  FUN_08012ae2(DAT_08027a30,2);
  FUN_08012ae2(uVar1,8);
  FUN_08012ae2(uVar1,1);
  uVar2 = FUN_08012adc(uVar1);
  FUN_08012afa(uVar1,uVar2 & 0xff | param_1 << 8);
  FUN_08012ae6(uVar1,1);
  FUN_08012ae6(uVar1,2);
  return;
}

