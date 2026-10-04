/**
 * @brief fun_0800dc8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800dc8c, Ghidra name FUN_0800dc8c, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800dc8c(void)

{
  undefined1 *puVar1;
  
  FUN_0800e95c(1);
  FUN_08023510(0x49,6);
  puVar1 = DAT_0800dcac;
  *DAT_0800dcac = 1;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x96;
  return;
}

