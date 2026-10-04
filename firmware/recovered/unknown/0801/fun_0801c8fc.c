/**
 * @brief fun_0801c8fc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c8fc, Ghidra name FUN_0801c8fc, 148 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c8fc(void)

{
  char cVar1;
  char *pcVar2;
  
  FUN_08015824(0);
  FUN_0801ab2c(0);
  pcVar2 = DAT_0801c990;
  DAT_0801c990[0x1e] = '\0';
  FUN_080033c8();
  FUN_0801acce(0);
  FUN_080207ec(6);
  pcVar2[0x51] = '\0';
  if (*pcVar2 == '\x02') {
    FUN_0801a9a4(*(undefined1 *)(DAT_0801c99c + 0x10a),3);
  }
  else {
    pcVar2[0x14] = '\x01';
  }
  FUN_08012ae6(DAT_0801c994,0x8000);
  pcVar2[0x15] = '\0';
  pcVar2[9] = '\n';
  pcVar2[10] = '\0';
  if (pcVar2[1] != '\x11') {
    FUN_0800beb4();
    *DAT_0801c998 = 0xff;
    FUN_0801b3fc();
    if ((((*pcVar2 == '\0') && (cVar1 = pcVar2[1], cVar1 != '\x14')) && (cVar1 != '\x02')) &&
       (((cVar1 != '\a' && (cVar1 != '\x0f')) && (cVar1 != '\v')))) {
      FUN_0800d2a8(0);
    }
    FUN_0800da50();
    return;
  }
  return;
}

