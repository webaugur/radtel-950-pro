/**
 * @brief fun_0801b320
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b320, Ghidra name FUN_0801b320, 14 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b320(void)

{
  char *pcVar1;
  
  if (*DAT_0801b330 == '\x01') {
    pcVar1 = DAT_0801b330;
    pcVar1[4] = -0x38;
    pcVar1[5] = '\0';
  }
  return;
}

