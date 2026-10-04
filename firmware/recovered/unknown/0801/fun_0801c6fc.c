/**
 * @brief fun_0801c6fc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c6fc, Ghidra name FUN_0801c6fc, 60 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c6fc(void)

{
  int iVar1;
  
  FUN_0801c654(0);
  (**(code **)(DAT_0801c738 + 8))(0x70,0);
  iVar1 = FUN_0801be04();
  if (iVar1 == 1) {
    FUN_0801c150(2);
  }
  else {
    FUN_0801c150(1);
  }
  FUN_0801c3b0(0);
  FUN_0801c548(*(undefined1 *)(DAT_0801c738 + 0x26));
  return;
}

