/**
 * @brief fun_080160b8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080160b8, Ghidra name FUN_080160b8, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080160b8(void)

{
  undefined1 *puVar1;
  
  FUN_0800e0a4();
  puVar1 = DAT_080160d4;
  *(undefined2 *)(DAT_080160d4 + 1) = 0xd3;
  *puVar1 = 2;
  *(undefined4 *)(puVar1 + 0xf) = DAT_080160d8;
  return;
}

