/**
 * @brief fun_08007bf0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007bf0, Ghidra name FUN_08007bf0, 88 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08007bf0(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(DAT_08007c48 + 8);
  uVar2 = *(uint *)(DAT_08007c48 + 4);
  if (1 < bVar1) {
    if ((~uVar2 & 0xa0000000) != 0) {
      FUN_0800ab8c(uVar2,bVar1,0,*(char *)(DAT_08007c48 + 0x18));
      return;
    }
    *(uint *)(DAT_08007c4c + 0xc) = uVar2 & 0x7fffff;
    FUN_0800ab8c(uVar2,bVar1,1,0);
    return;
  }
  if (bVar1 == 1) {
    FUN_08007984();
    return;
  }
  if (*(char *)(DAT_08007c48 + 0x18) != '\0') {
    FUN_08007984(0x1f5,1);
    return;
  }
  FUN_08007984(0x227,0);
  return;
}

