/**
 * @brief fun_0801dd90
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801dd90, Ghidra name FUN_0801dd90, 78 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801dd90(void)

{
  int iVar1;
  
  iVar1 = DAT_0801dde0;
  FUN_08000bca(DAT_0801dde0 + (uint)*(byte *)(DAT_0801dde0 + 0xfa) * 0x58 + 0x149,0x10,0xff);
  FUN_08000ee4(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x58 + 0x149,DAT_0801dde4 + 0x12,
               *(undefined4 *)(DAT_0801dde4 + 4));
  FUN_08018038();
  FUN_0800b604(1);
  return 1;
}

