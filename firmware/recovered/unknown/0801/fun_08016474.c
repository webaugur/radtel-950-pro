/**
 * @brief fun_08016474
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016474, Ghidra name FUN_08016474, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016474(void)

{
  undefined1 *puVar1;
  
  FUN_0800e0dc();
  puVar1 = DAT_08016490;
  *(undefined2 *)(DAT_08016490 + 1) = 1;
  *puVar1 = 2;
  *(undefined4 *)(puVar1 + 0xf) = DAT_08016494;
  return;
}

