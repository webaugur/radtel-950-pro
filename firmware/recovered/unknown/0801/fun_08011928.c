/**
 * @brief fun_08011928
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08011928, Ghidra name FUN_08011928, 88 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08011928(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = DAT_08011980;
  if (*(char *)(DAT_08011980 + 1) == '\x02') {
    *(undefined1 *)(DAT_08011980 + 1) = 0;
    pcVar1 = DAT_08011984;
    if (*DAT_08011984 != '\x01') {
      FUN_0800ed30(1);
      FUN_08012ae6(DAT_08011988,0x80);
      FUN_08012ae2(DAT_0801198c,0x20);
    }
    FUN_080207ec(0xc);
    *pcVar1 = '\x01';
    pcVar1[4] = -0x38;
    pcVar1[5] = '\0';
    FUN_0801b70c(0);
    if ((*(char *)(iVar2 + 1) != '\x03') && (param_1 != 0)) {
      FUN_0800b980();
      return;
    }
  }
  return;
}

