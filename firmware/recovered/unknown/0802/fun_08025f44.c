/**
 * @brief fun_08025f44
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025f44, Ghidra name FUN_08025f44, 22 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08025f44(int param_1)

{
  dword dVar1;
  
  dVar1 = DWORD_08025f5c;
  *(int *)DWORD_08025f5c = param_1 + 1;
  while (*(int *)dVar1 != 0) {
    FUN_08008214();
  }
  return;
}

