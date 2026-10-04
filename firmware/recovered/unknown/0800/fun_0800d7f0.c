/**
 * @brief fun_0800d7f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d7f0, Ghidra name FUN_0800d7f0, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800d7f0(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_0801c73c(1);
  FUN_080207ec(9);
  iVar1 = DAT_0800d82c;
  uVar2 = 0;
  do {
    thunk_FUN_0801c654(*(undefined2 *)(iVar1 + uVar2 * 2));
    FUN_0800ad06(0x50);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  FUN_080207ec(10);
  FUN_0800ad06(0x1e);
  FUN_0801c6fc();
  return;
}

