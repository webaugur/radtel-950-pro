/**
 * @brief fun_08009980
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009980, Ghidra name FUN_08009980, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08009980(void)

{
  short sVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_08009998;
  sVar1 = *(short *)(DAT_08009998 + 6);
  if ((sVar1 != 0) && (*(short *)(DAT_08009998 + 6) = sVar1 + -1, sVar1 == 1)) {
    *puVar2 = 4;
  }
  return;
}

