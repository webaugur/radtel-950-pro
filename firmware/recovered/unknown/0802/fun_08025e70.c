/**
 * @brief fun_08025e70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025e70, Ghidra name FUN_08025e70, 14 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08025e70(undefined2 param_1)

{
  dword dVar1;
  
  dVar1 = DWORD_08025e80;
  *(undefined2 *)DWORD_08025e80 = param_1;
  do {
  } while (-1 < (int)((uint)*(ushort *)(dVar1 - 4) << 0x19));
  return;
}

