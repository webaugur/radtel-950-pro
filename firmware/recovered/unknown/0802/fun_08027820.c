/**
 * @brief fun_08027820
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027820, Ghidra name FUN_08027820, 34 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027820(undefined4 param_1,undefined4 param_2)

{
  dword dVar1;
  
  dVar1 = DWORD_08027844;
  *(undefined1 *)DWORD_08027844 = 0x12;
  *(undefined1 *)(dVar1 + 1) = 0;
  *(char *)(dVar1 + 2) = (char)((uint)param_1 >> 8);
  *(char *)(dVar1 + 3) = (char)param_1;
  *(char *)(dVar1 + 4) = (char)((uint)param_2 >> 8);
  *(char *)(dVar1 + 5) = (char)param_2;
  FUN_080277c6(6,DWORD_08027844,0);
  return;
}

