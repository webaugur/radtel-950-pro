/**
 * @brief fun_08009384
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009384, Ghidra name FUN_08009384, 46 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08009384(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_080093b8 + (param_1 >> 3);
  uVar1 = 1 << (param_1 & 7);
  if (*(byte *)(DAT_080093b4 + 0x43) == 1) {
    return *(byte *)(iVar2 + 0xb) & uVar1;
  }
  if (1 < *(byte *)(DAT_080093b4 + 0x43)) {
    return *(byte *)(iVar2 + 0x11) & uVar1;
  }
  return *(byte *)(iVar2 + 6) & uVar1;
}

