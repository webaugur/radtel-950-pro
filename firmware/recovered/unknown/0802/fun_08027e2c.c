/**
 * @brief fun_08027e2c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027e2c, Ghidra name FUN_08027e2c, 44 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027e2c(undefined2 param_1)

{
  dword dVar1;
  dword dVar2;
  
  dVar2 = DWORD_08027e64;
  dVar1 = DWORD_08027e60;
  if ((*(char *)(DWORD_08027e58 + 0x1d) == '\x01') && (*(char *)(DWORD_08027e5c + 0x47) != '\0')) {
    *(undefined2 *)DWORD_08027e60 = param_1;
    do {
    } while (-1 < (int)((uint)*(ushort *)(dVar1 - 4) << 0x19));
    return;
  }
  *(undefined2 *)DWORD_08027e64 = param_1;
  do {
  } while (-1 < (int)((uint)*(ushort *)(dVar2 - 4) << 0x19));
  return;
}

