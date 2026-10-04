/**
 * @brief fun_0800e0a4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e0a4, Ghidra name FUN_0800e0a4, 24 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800e0a4(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e0bc;
  *(undefined1 *)(DAT_0800e0bc + 2) = 7;
  *(undefined1 *)(iVar1 + 3) = 1;
  FUN_08001016(DAT_0800e0c0,0x17);
  return 0;
}

