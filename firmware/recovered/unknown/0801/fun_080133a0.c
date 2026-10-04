/**
 * @brief fun_080133a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080133a0, Ghidra name FUN_080133a0, 76 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080133a0(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_080133ec + (uint)*(byte *)(DAT_080133ec + 0xfa) * 0x58 + 0x144);
  if (uVar1 == 0) {
    if (*(char *)(DAT_080133fc + 8) == '\x01') {
      FUN_08000850(DAT_080133f8,&DAT_08013404,&DAT_08013408);
    }
    else {
      FUN_08000850(DAT_080133f8,&DAT_08013404,&DAT_08013400);
    }
  }
  else {
    FUN_08000850(DAT_080133f8,&DAT_080133f0,uVar1 & 0xffffff);
  }
  return DAT_080133f8;
}

