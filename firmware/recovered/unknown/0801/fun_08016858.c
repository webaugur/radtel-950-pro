/**
 * @brief fun_08016858
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016858, Ghidra name FUN_08016858, 74 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016858(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = 0;
  do {
    uVar3 = (uint)*(byte *)(DAT_080168a4 + (uint)*(byte *)(DAT_080168a4 + 0xfa) * 0x24 + uVar1 +
                           0x2e4) + uVar3 * 10;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 7);
  uVar2 = FUN_08000850(DAT_080168b0,s__3d_04d_080168a8,uVar3 / 10000,uVar3 % 10000);
  *(undefined4 *)(DAT_080168b0 + -0xe) = uVar2;
  return;
}

