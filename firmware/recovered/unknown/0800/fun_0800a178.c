/**
 * @brief fun_0800a178
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a178, Ghidra name FUN_0800a178, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a178(void)

{
  undefined4 *puVar1;
  
  FUN_08001016(DAT_0800a1a0,0xe);
  *(undefined1 *)(DAT_0800a1a0 + 2) = 0x20;
  puVar1 = DAT_0800a1a4;
  *DAT_0800a1a4 = 0;
  puVar1[1] = 0;
  FUN_08000fd2(DAT_0800a1a0 + 0xe,0x22);
  return;
}

