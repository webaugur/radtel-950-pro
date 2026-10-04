/**
 * @brief fun_0800dc68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800dc68, Ghidra name FUN_0800dc68, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800dc68(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  uVar1 = DAT_0800dc84;
  uVar3 = FUN_08012ace(DAT_0800dc84,0x10);
  puVar2 = DAT_0800dc88;
  *DAT_0800dc88 = uVar3;
  uVar3 = FUN_08012ace(uVar1,0x20);
  puVar2[1] = uVar3;
  return;
}

