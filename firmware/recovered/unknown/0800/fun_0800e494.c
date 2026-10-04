/**
 * @brief fun_0800e494
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e494, Ghidra name FUN_0800e494, 16 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800e494(undefined1 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0800e4a4;
  *DAT_0800e4a4 = 1;
  puVar1[0xc] = 1;
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[4] = param_1;
  return;
}

