/**
 * @brief fun_0801d228
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801d228, Ghidra name FUN_0801d228, 54 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801d228(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(DAT_0801d260 + 3);
  *(char *)(DAT_0801d264 + 0x1d) = cVar1;
  uVar2 = DAT_0801d268;
  if (cVar1 == '\0') {
    FUN_08012ae2(DAT_0801d268,0x200);
  }
  else {
    FUN_080077d0();
    FUN_08012ae6(uVar2,0x200);
  }
  FUN_08018038();
  FUN_0800cfc0();
  return 1;
}

