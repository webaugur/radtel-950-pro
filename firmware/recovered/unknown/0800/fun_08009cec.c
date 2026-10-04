/**
 * @brief fun_08009cec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009cec, Ghidra name FUN_08009cec, 126 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08009cec(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_08009d6c;
  if ((*DAT_08009d6c == '\x01') && (*(short *)(DAT_08009d6c + 2) == 0)) {
    if (DAT_08009d6c[4] != '\0') {
      if (DAT_08009d6c[0xc] == '\0') {
        *(uint *)(DAT_08009d6c + 8) = (*(int *)(DAT_08009d6c + 8) + 1U) % 0xd3;
      }
      pcVar1[0xc] = '\0';
      if (*(int *)(pcVar1 + 8) == 0) {
        pcVar1[8] = '\x01';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
      }
      thunk_FUN_0801c60c(*(undefined2 *)(pcVar1 + 8));
      FUN_0800c0d8(*(undefined4 *)(pcVar1 + 8));
      pcVar1[2] = '\x03';
      pcVar1[3] = '\0';
      return;
    }
    if (DAT_08009d6c[0xc] == '\0') {
      *(uint *)(DAT_08009d6c + 8) = (*(int *)(DAT_08009d6c + 8) + 1U) % 0x33;
    }
    pcVar1[0xc] = '\0';
    if (*(int *)(pcVar1 + 8) == 0) {
      pcVar1[8] = '\x01';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
    }
    iVar2 = DAT_08009d70;
    thunk_FUN_0801c60c(*(undefined2 *)(DAT_08009d70 + *(int *)(pcVar1 + 8) * 2));
    FUN_0800c0d8(*(undefined2 *)(iVar2 + *(int *)(pcVar1 + 8) * 2));
    pcVar1[2] = '\x02';
    pcVar1[3] = '\0';
  }
  return;
}

