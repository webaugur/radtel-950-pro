/**
 * @brief fun_08012dcc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012dcc, Ghidra name FUN_08012dcc, 96 bytes.
 *       Not linked into rt950-firmware.
 */

char FUN_08012dcc(void)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\0';
  if ((*(char *)(DAT_08012e2c + 0x4a) == -0x5b) && ((byte)DAT_08012e30[0x7d] == 2)) {
    uVar2 = 0;
    do {
      if (((uint)DAT_08012e30[0x19e] & 1 << uVar2) != 0) {
        if (*(byte *)(DAT_08012e34 + 2) == uVar2) {
          return cVar1;
        }
        cVar1 = cVar1 + '\x01';
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 10);
  }
  else {
    uVar2 = 0;
    do {
      if (((uint)*DAT_08012e30 & 1 << uVar2) != 0) {
        if (*(byte *)((uint)(byte)DAT_08012e30[0x7d] + DAT_08012e34) == uVar2) {
          return cVar1;
        }
        cVar1 = cVar1 + '\x01';
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 10);
  }
  return '\0';
}

