/**
 * @brief fun_08020330
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020330, Ghidra name FUN_08020330, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020330(undefined4 param_1)

{
  int iVar1;
  
  FUN_0801b334();
  iVar1 = DAT_0802034c;
  *(undefined4 *)(DAT_0802034c + 8) = param_1;
  *(undefined1 *)(iVar1 + 0x11) = 0xaa;
  iVar1 = DAT_08020350;
  *(undefined1 *)(DAT_08020350 + 2) = 5;
  *(undefined1 *)(iVar1 + 3) = 7;
  return;
}

