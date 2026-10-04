/**
 * @brief fun_08012fe8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012fe8, Ghidra name FUN_08012fe8, 50 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08012fe8(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *DAT_0801301c;
  for (uVar1 = 0; uVar1 < (uint)DAT_0801301c[2]; uVar1 = uVar1 + 1) {
    iVar2 = *(int *)(iVar2 + DAT_0801301c[uVar1 + 3] * 0x21 + 0x1d);
  }
  return DAT_0801301c[DAT_0801301c[2] + 3] * 0x21 + iVar2;
}

