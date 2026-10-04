/**
 * @brief fun_08021e8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021e8c, Ghidra name FUN_08021e8c, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021e8c(void)

{
  uint *puVar1;
  
  *DAT_08021ee0 = *DAT_08021ee0 | 0xf00000;
  puVar1 = DAT_08021ee4;
  *DAT_08021ee4 = *DAT_08021ee4 | 1;
  puVar1[1] = puVar1[1] & DAT_08021ee8;
  *puVar1 = *puVar1 & DAT_08021eec;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[1] = puVar1[1] & DAT_08021ef0;
  puVar1[0xc] = puVar1[0xc] & DAT_08021ef4;
  puVar1[2] = 0x9f0000;
  FUN_08020440();
  DAT_08021ee0[-0x20] = 0x8000000;
  return;
}

