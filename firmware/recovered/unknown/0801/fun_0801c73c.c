/**
 * @brief fun_0801c73c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c73c, Ghidra name FUN_0801c73c, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c73c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0801c770;
  uVar2 = (**(code **)(DAT_0801c770 + 4))(0x70);
  (**(code **)(iVar1 + 8))(0x70,uVar2 & 0x7f | 0x9700);
  if (param_1 == 0) {
    FUN_0801c150(3);
  }
  else {
    FUN_0801c150(4);
  }
  FUN_0801c3b0(3);
  return;
}

