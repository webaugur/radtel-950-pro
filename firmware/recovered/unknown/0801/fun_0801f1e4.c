/**
 * @brief fun_0801f1e4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f1e4, Ghidra name FUN_0801f1e4, 134 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f1e4(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0801f26c;
  if ((((*DAT_0801f26c != '\0') && (FUN_08018340(), *(short *)(pcVar1 + 2) == 0)) &&
      (*pcVar1 != '\x04')) && (iVar2 = FUN_0801a91c(), iVar2 == 0)) {
    *pcVar1 = '\x01';
    pcVar1[2] = '\x02';
    pcVar1[3] = '\0';
    if (pcVar1[4] == '\0') {
      if (pcVar1[0xc] == '\0') {
        *(uint *)(pcVar1 + 8) = (*(int *)(pcVar1 + 8) + 1U) % 0x33;
      }
      pcVar1[0xc] = '\0';
      if (*(int *)(pcVar1 + 8) == 0) {
        pcVar1[8] = '\x01';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
      }
      FUN_0800c0d8(*(undefined2 *)(DAT_0801f270 + *(int *)(pcVar1 + 8) * 2));
      return;
    }
    if (pcVar1[0xc] == '\0') {
      *(uint *)(pcVar1 + 8) = (*(int *)(pcVar1 + 8) + 1U) % 0xd3;
    }
    pcVar1[0xc] = '\0';
    if (*(int *)(pcVar1 + 8) == 0) {
      pcVar1[8] = '\x01';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
    }
    FUN_0800c0d8(*(undefined4 *)(pcVar1 + 8));
    return;
  }
  return;
}

