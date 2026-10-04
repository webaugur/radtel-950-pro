/**
 * @brief fun_08020224
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020224, Ghidra name FUN_08020224, 46 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08020224(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_08020258;
  sVar1 = *(short *)(DAT_08020254 + 3);
  *(short *)(DAT_08020258 + 2) = sVar1;
  iVar2 = FUN_080090ec(sVar1 + (ushort)*(byte *)(iVar2 + 1) * 99,0);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_08017784();
  return 4;
}

