/**
 * @brief fun_08028f2a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028f2a, Ghidra name FUN_08028f2a, 6 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08028f2a(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 1;
  while (uVar4 = param_1, (uVar3 & 1) != 0) {
    uVar3 = (uint)((param_2 & 0x80000000) != 0) << 0x1f | uVar3 >> 1;
    uVar2 = param_2 & 0xfffff;
    param_1 = param_3;
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      uVar1 = uVar4;
      if (uVar2 == 0 && uVar4 >> 0x14 == 0) {
        uVar1 = 0;
        uVar2 = uVar4;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 >> 0xc;
        uVar1 = uVar1 << 0x14;
      }
      uVar4 = LZCOUNT(uVar2) - 0xb;
      param_2 = param_4;
      param_3 = uVar1 << (uVar4 & 0xff);
      param_4 = uVar2 << (uVar4 & 0xff) | uVar1 >> (0x20 - uVar4 & 0xff);
    }
    else {
      param_2 = param_4;
      param_3 = uVar4;
      param_4 = uVar2 | 0x100000;
    }
  }
  return;
}

