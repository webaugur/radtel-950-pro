/**
 * @brief fun_080203a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080203a0, Ghidra name FUN_080203a0, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080203a0(undefined4 param_1)

{
  int iVar1;
  
  FUN_0801b334();
  iVar1 = DAT_080203bc;
  *(undefined4 *)(DAT_080203bc + 8) = param_1;
  *(undefined1 *)(iVar1 + 0x11) = 0xaa;
  iVar1 = DAT_080203c0;
  *(undefined1 *)(DAT_080203c0 + 2) = 8;
  *(undefined1 *)(iVar1 + 3) = 9;
  return;
}

