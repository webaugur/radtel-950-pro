/**
 * @brief fun_0801b394
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b394, Ghidra name FUN_0801b394, 78 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b394(void)

{
  int iVar1;
  
  FUN_08000ee4(DAT_0801b3e8,DAT_0801b3e4,0x20);
  FUN_08000ee4(DAT_0801b3ec,DAT_0801b3e4 + 0x20,0x2d);
  iVar1 = DAT_0801b3ec;
  *(undefined1 *)(DAT_0801b3ec + 0xd) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  FUN_08010044();
  FUN_08021764(0xa000);
  FUN_080219b8(0xa000,DAT_0801b3e4 + 0x46,0x20);
  FUN_080219b8(0xa020,DAT_0801b3e4 + -8,8);
  return;
}

