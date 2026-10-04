/**
 * @brief fun_0800efd0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800efd0, Ghidra name FUN_0800efd0, 174 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800efd0(void)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar2 = DAT_0801ca04;
  cVar1 = *(char *)(DAT_0800efec + 0x17);
  if (cVar1 == '\0') {
    cVar3 = '\0';
  }
  else {
    cVar3 = cVar1 + -1;
  }
  if (*DAT_0801ca04 == '\0') {
    DAT_0801ca04[2] = '(';
  }
  else {
    DAT_0801ca04[2] = 'H';
  }
  pcVar2[3] = cVar1 != '\0';
  pcVar2[4] = cVar3;
  FUN_080277c6(3,DAT_0801ca04 + 2,0);
  return;
}

