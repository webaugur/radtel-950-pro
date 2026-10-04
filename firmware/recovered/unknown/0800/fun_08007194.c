/**
 * @brief fun_08007194
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007194, Ghidra name FUN_08007194, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08007194(void)

{
  undefined2 auStack_18 [10];
  
  FUN_08000f6e(auStack_18,DAT_080071b4,0x14);
  *(undefined2 *)(DAT_080071bc + 0x12) = auStack_18[*(byte *)(DAT_080071b8 + 0x24)];
  return;
}

