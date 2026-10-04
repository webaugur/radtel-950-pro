/**
 * @brief fun_080138f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080138f8, Ghidra name FUN_080138f8, 90 bytes.
 *       Not linked into rt950-firmware.
 */

char FUN_080138f8(void)

{
  char cVar1;
  char cVar2;
  
  cVar2 = *(char *)(DAT_08013958 + 0xfa);
  if (*(char *)(DAT_08013954 + 0x28) == '\x01') {
    if (*(char *)(DAT_08013954 + 0x4a) == -0x5b) {
      if (cVar2 == '\0') {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      cVar1 = *(char *)(DAT_08013958 + 0xfc);
      if (cVar2 == '\0') {
        if (cVar1 == '\0') {
          cVar2 = '\x01';
        }
        else {
          cVar2 = '\x02';
        }
      }
      else if (cVar2 == '\x01') {
        if (cVar1 == '\0') {
          cVar2 = '\x02';
        }
        else {
          cVar2 = '\0';
        }
      }
      else if (cVar1 == '\0') {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
    }
    if (*(char *)(DAT_08013954 + 0x2b) == '\0') {
      *(undefined1 *)(DAT_08013954 + 0x2b) = 1;
    }
  }
  return cVar2;
}

