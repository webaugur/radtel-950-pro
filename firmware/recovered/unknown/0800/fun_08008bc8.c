/**
 * @brief fun_08008bc8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008bc8, Ghidra name FUN_08008bc8, 88 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008bc8(void)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  
  pcVar3 = DAT_08008c24;
  if (*(char *)(DAT_08008c20 + 0x10) != '\0') {
    cVar1 = DAT_08008c24[1];
    if (((((cVar1 != '\x01') && (cVar1 != '\x04')) && (cVar1 != '\x11')) &&
        ((sVar2 = *(short *)(DAT_08008c24 + 0x2e), sVar2 != 0 && (DAT_08008c24[0x14] != '\x04'))))
       && ((*DAT_08008c24 == '\0' && (DAT_08008c24[0x14] != '\x05')))) {
      *(short *)(DAT_08008c24 + 0x2e) = sVar2 + -1;
      if ((sVar2 == 1) && (pcVar3[99] == '\0')) {
        pcVar3[99] = '\x01';
        FUN_0800cf58();
        FUN_080234ac(0x25);
        return;
      }
    }
  }
  return;
}

