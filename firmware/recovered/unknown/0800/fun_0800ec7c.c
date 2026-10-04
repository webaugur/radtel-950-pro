/**
 * @brief fun_0800ec7c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ec7c, Ghidra name FUN_0800ec7c, 32 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_0800ec7c(void)

{
  int iVar1;
  int extraout_r3;
  int extraout_r3_00;
  int iVar2;
  
  iVar1 = FUN_0800eb40();
  iVar2 = extraout_r3;
  while ((iVar1 == 1 && (iVar2 != 0))) {
    iVar1 = FUN_0800eb40();
    iVar2 = extraout_r3_00 + -1;
  }
  if (iVar2 == 0) {
    iVar1 = 5;
  }
  return iVar1;
}

