/**
 * @brief fun_080090ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080090ec, Ghidra name FUN_080090ec, 68 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_080090ec(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_08009134 + (param_1 >> 3);
  uVar1 = 1 << (param_1 & 7);
  if ((*(char *)(DAT_08009130 + 0x4a) == -0x5b) && (*(char *)(DAT_08009134 + 0xfa) == '\x02')) {
    if (param_2 != 0) {
      return *(byte *)(iVar2 + 0x33e) & uVar1;
    }
    return *(byte *)(iVar2 + 0x3ba) & uVar1;
  }
  if (param_2 != 0) {
    return *(byte *)(iVar2 + 2) & uVar1;
  }
  return *(byte *)(iVar2 + 0x7e) & uVar1;
}

