/**
 * @brief fun_080096a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080096a0, Ghidra name FUN_080096a0, 52 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_080096a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_1 = param_1 & 0x7fffff;
  uVar2 = 0;
  while( true ) {
    uVar1 = (uint)*(ushort *)(DAT_080096d8 + uVar2 * 2);
    if (uVar1 < param_1) {
      uVar3 = param_1 - uVar1;
    }
    else {
      uVar3 = uVar1 - param_1;
    }
    if (uVar3 < 10) break;
    uVar2 = uVar2 + 1 & 0xff;
    if (0x32 < uVar2) {
      return (uint)*(ushort *)(DAT_080096d4 + 0x10);
    }
  }
  *(uint *)(DAT_080096d4 + 0x10) = (uint)*(ushort *)(DAT_080096d8 + uVar2 * 2);
  return uVar1;
}

