/**
 * @brief fun_0800beb4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800beb4, Ghidra name FUN_0800beb4, 64 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800beb4(void)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = DAT_0800bef4;
  pcVar2[0x1a] = '\0';
  pcVar2[0x1b] = '\0';
  if (pcVar2[0x2b] == '\x01') {
    pcVar2[0x2b] = '\0';
  }
  if ((((*pcVar2 != '\x02') && (cVar1 = pcVar2[1], cVar1 != '\x01')) && (cVar1 != '\a')) &&
     (((cVar1 != '\x0f' && (cVar1 != '\x14')) && ((cVar1 != '\v' && (cVar1 != '\x02')))))) {
    FUN_0800cb78(*(undefined1 *)(DAT_0800bef8 + 0xfa),0);
    return;
  }
  return;
}

