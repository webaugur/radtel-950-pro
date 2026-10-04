/**
 * @brief fun_0801de3c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801de3c, Ghidra name FUN_0801de3c, 42 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801de3c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0801de68;
  *DAT_0801de68 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  iVar2 = DAT_0801de6c;
  if (6 < *(uint *)(DAT_0801de6c + 4)) {
    *(undefined4 *)(DAT_0801de6c + 4) = 6;
  }
  FUN_08000ee4(DAT_0801de68,DAT_0801de6c + 0x12,*(undefined4 *)(iVar2 + 4));
  FUN_08018038();
  return 1;
}

