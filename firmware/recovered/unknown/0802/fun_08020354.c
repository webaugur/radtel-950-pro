/**
 * @brief fun_08020354
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020354, Ghidra name FUN_08020354, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020354(undefined4 param_1)

{
  int iVar1;
  
  FUN_0801b334();
  iVar1 = DAT_08020370;
  *(undefined4 *)(DAT_08020370 + 8) = param_1;
  *(undefined1 *)(iVar1 + 0x11) = 0xaa;
  iVar1 = DAT_08020374;
  *(undefined1 *)(DAT_08020374 + 2) = 9;
  *(undefined1 *)(iVar1 + 3) = 10;
  return;
}

