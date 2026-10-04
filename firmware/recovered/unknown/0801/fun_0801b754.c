/**
 * @brief fun_0801b754
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b754, Ghidra name FUN_0801b754, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b754(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0801b78c;
  if ((DAT_0801b78c[1] == '\x04') || (DAT_0801b78c[1] == '\x15')) {
    return;
  }
  if (*DAT_0801b78c == '\x01') {
    FUN_0802235c();
    return;
  }
  if ((*DAT_0801b78c == '\x02') && (FUN_0802235c(), pcVar1[0x51] == '\0')) {
    return;
  }
  FUN_0801ad64();
  return;
}

