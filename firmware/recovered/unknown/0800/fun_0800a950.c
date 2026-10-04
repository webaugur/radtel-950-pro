/**
 * @brief fun_0800a950
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a950, Ghidra name FUN_0800a950, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a950(void)

{
  int iVar1;
  
  iVar1 = FUN_0800aa20(4);
  if (iVar1 != 0) {
    FUN_0800a9ec(4);
    FUN_0800367c(DAT_0800a98c,0x800);
  }
  iVar1 = FUN_0800aa20(2);
  if (iVar1 != 0) {
    FUN_0800a9ec(1);
    FUN_0800367c(DAT_0800a990,0x800);
    return;
  }
  return;
}

