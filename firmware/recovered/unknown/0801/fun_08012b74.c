/**
 * @brief fun_08012b74
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012b74, Ghidra name FUN_08012b74, 80 bytes.
 *       Not linked into rt950-firmware.
 */

char FUN_08012b74(void)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\0';
  if ((*(char *)(DAT_08012bc4 + 0x4a) == -0x5b) && ((char)DAT_08012bc8[0x7d] == '\x02')) {
    uVar2 = 0;
    do {
      if (((uint)DAT_08012bc8[0x19e] & 1 << uVar2) != 0) {
        cVar1 = cVar1 + '\x01';
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 10);
    return cVar1;
  }
  uVar2 = 0;
  do {
    if (((uint)*DAT_08012bc8 & 1 << uVar2) != 0) {
      cVar1 = cVar1 + '\x01';
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 10);
  return cVar1;
}

