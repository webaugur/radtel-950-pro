/**
 * @brief fun_08022780
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022780, Ghidra name FUN_08022780, 80 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022780(void)

{
  if (*(char *)(DAT_080227d0 + 0x27) != '\0') {
    if ((DAT_080227d4[1] != '\v') && (DAT_080227d4[1] != '\x03')) {
      if (DAT_080227d4[0x65] == '\x01') {
        DAT_080227d4[0x67] = '\x19';
      }
      else {
        if (*DAT_080227d4 == '\x01') {
          DAT_080227d4[0x67] = '\x19';
          return;
        }
        if (DAT_080227d4[0x1e] == '\x01') {
          DAT_080227d4[0x67] = '\x19';
          return;
        }
        if (DAT_080227d4[0x67] == '\0') {
          DAT_080227d4[0x66] = '\x01';
          FUN_0801c9a0();
          return;
        }
      }
    }
  }
  return;
}

