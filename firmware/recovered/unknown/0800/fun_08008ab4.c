/**
 * @brief fun_08008ab4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008ab4, Ghidra name FUN_08008ab4, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008ab4(void)

{
  int iVar1;
  
  iVar1 = DAT_08008ad4;
  if (*(short *)(DAT_08008ad4 + 4) != 0) {
    *(short *)(DAT_08008ad4 + 4) = *(short *)(DAT_08008ad4 + 4) + -1;
  }
  if (*(short *)(iVar1 + 8) != 0) {
    *(short *)(iVar1 + 8) = *(short *)(iVar1 + 8) + -1;
  }
  if (*(short *)(iVar1 + 6) != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + -1;
  }
  return;
}

