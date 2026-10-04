/**
 * @brief fun_0800dd44
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800dd44, Ghidra name FUN_0800dd44, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800dd44(void)

{
  undefined1 *puVar1;
  
  *(undefined1 *)(DAT_0800dd64 + 1) = 0x14;
  puVar1 = DAT_0800dd68;
  DAT_0800dd68[1] = 1;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[3] = 1;
  *puVar1 = 1;
  FUN_080046c0();
  return 7;
}

