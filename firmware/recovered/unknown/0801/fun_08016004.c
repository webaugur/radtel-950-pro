/**
 * @brief fun_08016004
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016004, Ghidra name FUN_08016004, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016004(undefined2 param_1)

{
  undefined1 *puVar1;
  
  FUN_0800e0c4();
  puVar1 = DAT_08016020;
  *(undefined2 *)(DAT_08016020 + 1) = param_1;
  *puVar1 = 2;
  *(undefined4 *)(puVar1 + 0xf) = DAT_08016024;
  return;
}

