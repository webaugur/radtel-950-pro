/**
 * @brief fun_08007c50
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007c50, Ghidra name FUN_08007c50, 106 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08007c50(void)

{
  byte bVar1;
  uint uVar2;
  
  FUN_0801abb4(0);
  bVar1 = *(byte *)(DAT_08007cbc + 0x14);
  if (bVar1 == 0) {
    if (*(char *)(DAT_08007cbc + 0x19) != '\0') {
      FUN_08007984(0x1f5,1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x08007cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_08007cbc + -4))(0x51,0);
    return;
  }
  if (1 < bVar1) {
    uVar2 = *(uint *)(DAT_08007cbc + 0x10);
    if ((~uVar2 & 0xa0000000) != 0) {
      FUN_0800ab8c(uVar2,bVar1,0,*(undefined1 *)(DAT_08007cbc + 0x19));
      return;
    }
    *(uint *)(DAT_08007cc0 + 0xc) = uVar2 & 0x7fffff;
    FUN_0800ab8c(uVar2,bVar1,1,0);
    return;
  }
  FUN_08007984(*(undefined4 *)(DAT_08007cbc + 0x10),*(undefined1 *)(DAT_08007cbc + 0x19));
  return;
}

