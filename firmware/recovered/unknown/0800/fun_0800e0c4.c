/**
 * @brief fun_0800e0c4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e0c4, Ghidra name FUN_0800e0c4, 18 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800e0c4(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e0d8;
  *(undefined1 *)(DAT_0800e0d8 + 2) = 2;
  *(undefined1 *)(iVar1 + 3) = 2;
  FUN_0801b334();
  return 0;
}

