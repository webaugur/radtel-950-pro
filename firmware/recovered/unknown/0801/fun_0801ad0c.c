/**
 * @brief fun_0801ad0c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ad0c, Ghidra name FUN_0801ad0c, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ad0c(void)

{
  int iVar1;
  
  iVar1 = DAT_0801ad50;
  if (*(char *)(DAT_0801ad50 + 0x10c) == '\0') {
    FUN_0800ad30(0);
    FUN_0801ac14(0);
  }
  else {
    FUN_0800ad30(1);
  }
  if (*DAT_0801ad54 != '\x02') {
    FUN_0801a9a4(*(undefined1 *)(iVar1 + 0x10b),0);
  }
  FUN_0801c6a8();
  FUN_0801a9a4(*(undefined1 *)(iVar1 + 0x10b),2);
  return;
}

