/**
 * @brief fun_08008a48
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008a48, Ghidra name FUN_08008a48, 36 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008a48(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_08008a6c;
  iVar2 = DAT_08008a6c + 0xc;
  if (*(char *)(DAT_08008a6c + 0x30) == '\x01') {
    *(int *)(DAT_08008a6c + 0x18) = iVar2;
    *(int *)(iVar1 + 0x1c) = iVar1;
    return;
  }
  if (*(char *)(DAT_08008a6c + 0x30) != '\x02') {
    *(int *)(DAT_08008a6c + 0x18) = DAT_08008a6c;
    *(int *)(iVar1 + 0x1c) = iVar2;
    return;
  }
  *(int *)(DAT_08008a6c + 0x18) = DAT_08008a6c;
  *(int *)(iVar1 + 0x1c) = iVar1;
  return;
}

