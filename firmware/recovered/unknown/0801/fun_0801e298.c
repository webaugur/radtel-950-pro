/**
 * @brief fun_0801e298
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e298, Ghidra name FUN_0801e298, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e298(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0801e2b8;
  FUN_08000fd2(DAT_0801e2b8,0x28);
  FUN_08000ee4(uVar1,DAT_0801e2bc + 0x12,*(undefined4 *)(DAT_0801e2bc + 4));
  FUN_08018038();
  return 1;
}

