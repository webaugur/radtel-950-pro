/**
 * @brief fun_0801b41c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b41c, Ghidra name FUN_0801b41c, 104 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b41c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0801b488 + 0x2f4;
  iVar2 = DAT_0801b488 + 0x318;
  if (*(char *)(DAT_0801b484 + 0x62) == '\0') {
    FUN_08000ee4(DAT_0801b488 + 0x2d0,DAT_0801b48c + 0x60,0x20);
    FUN_08000ee4(iVar1,DAT_0801b48c + 0x80,0x20);
    FUN_08000ee4(iVar2,DAT_0801b48c + 0xa0,0x20);
  }
  else {
    FUN_08000ee4(DAT_0801b488 + 0x2d0,DAT_0801b48c,0x20);
    FUN_08000ee4(iVar1,DAT_0801b48c + 0x20,0x20);
    FUN_08000ee4(iVar2,DAT_0801b48c + 0x40,0x20);
  }
  FUN_080105cc(4);
  return;
}

