/**
 * @brief fun_0800e0dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e0dc, Ghidra name FUN_0800e0dc, 22 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800e0dc(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e0f4;
  *(undefined1 *)(DAT_0800e0f4 + 2) = 1;
  *(undefined1 *)(iVar1 + 3) = 1;
  FUN_08001016(DAT_0800e0f8,0x17);
  return 0;
}

