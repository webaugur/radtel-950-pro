/**
 * @brief fun_08020378
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020378, Ghidra name FUN_08020378, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020378(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0801b334();
  iVar1 = DAT_08020398;
  *(undefined4 *)(DAT_08020398 + 8) = param_1;
  *(undefined1 *)(iVar1 + 0x11) = 0xaa;
  iVar2 = DAT_0802039c;
  *(undefined1 *)(DAT_0802039c + 2) = 3;
  *(undefined1 *)(iVar2 + 3) = 4;
  *(undefined1 *)(iVar1 + 0x10) = 2;
  return;
}

