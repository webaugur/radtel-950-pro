/**
 * @brief fun_08008b5c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008b5c, Ghidra name FUN_08008b5c, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08008b5c(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_08008b7c + 9);
  *(char *)(DAT_08008b7c + 10) = *pcVar1;
  if (((*DAT_08008b80 == '\x01') && (DAT_08008b80[0x1f] != '\0')) && (DAT_08008b80[0x1c] == *pcVar1)
     ) {
    return 0;
  }
  return 1;
}

