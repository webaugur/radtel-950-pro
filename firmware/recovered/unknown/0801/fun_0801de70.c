/**
 * @brief fun_0801de70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801de70, Ghidra name FUN_0801de70, 46 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801de70(void)

{
  int iVar1;
  
  iVar1 = DAT_0801dea0;
  *(undefined4 *)(DAT_0801dea0 + 0x32) = 0;
  *(undefined2 *)(iVar1 + 0x36) = 0;
  iVar1 = DAT_0801dea4;
  if (6 < *(uint *)(DAT_0801dea4 + 4)) {
    *(undefined4 *)(DAT_0801dea4 + 4) = 6;
  }
  FUN_08000ee4(DAT_0801dea0 + 0x32,DAT_0801dea4 + 0x12,*(undefined4 *)(iVar1 + 4));
  FUN_08018038();
  return 1;
}

