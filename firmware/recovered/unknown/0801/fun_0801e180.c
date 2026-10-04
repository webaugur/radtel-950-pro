/**
 * @brief fun_0801e180
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e180, Ghidra name FUN_0801e180, 44 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e180(void)

{
  undefined1 *puVar1;
  
  if ((uint)*(byte *)(DAT_0801e1ac + 0x43) != *(uint *)(DAT_0801e1b0 + 3)) {
    puVar1 = (undefined1 *)(DAT_0801e1ac + 0x43);
    *puVar1 = (char)*(uint *)(DAT_0801e1b0 + 3);
    FUN_08012200();
    FUN_080181b4();
    FUN_0800eff0(*puVar1);
  }
  FUN_08018038();
  return 1;
}

