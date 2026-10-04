/**
 * @brief fun_0800ed5c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ed5c, Ghidra name FUN_0800ed5c, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ed5c(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0800ed7c;
  *DAT_0800ed7c = 0x11;
  FUN_080277c6(1,puVar1,1,puVar1 + 7);
  FUN_0800ad06(600);
  return;
}

