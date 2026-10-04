/**
 * @brief fun_0800e754
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e754, Ghidra name FUN_0800e754, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800e754(void)

{
  int iVar1;
  
  FUN_0800da50();
  iVar1 = DAT_0800e798;
  if (*(char *)(DAT_0800e798 + 1) == '\x01') {
    FUN_0800e95c(0);
  }
  FUN_0801b334();
  if (9 < *(byte *)(DAT_0800e79c + 5)) {
    *(undefined1 *)(DAT_0800e79c + 5) = 0;
  }
  *(undefined1 *)(iVar1 + 1) = 0xb;
  *(undefined1 *)(iVar1 + 0x66) = 0;
  *(undefined1 *)(iVar1 + 0x65) = 0;
  FUN_08023838();
  FUN_08023510(0x49,6);
  FUN_0801c9a0();
  return;
}

