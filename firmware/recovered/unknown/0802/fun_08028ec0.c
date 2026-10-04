/**
 * @brief fun_08028ec0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028ec0, Ghidra name FUN_08028ec0, 106 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08028ec0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 3;
  do {
    uVar3 = param_2;
    uVar2 = param_1;
    uVar1 = uVar5 >> 1;
    uVar5 = (uint)((param_4 & 0x80000000) != 0) << 0x1f | uVar1;
    param_2 = param_4 & 0xfffff;
    if ((param_4 & 0x7fffffff) >> 0x14 == 0) {
      uVar4 = param_3;
      if (param_2 == 0 && param_3 >> 0x14 == 0) {
        uVar4 = 0;
        param_2 = param_3;
      }
      if (param_2 == 0) {
        param_2 = uVar4 >> 0xc;
        uVar4 = uVar4 << 0x14;
      }
      uVar6 = LZCOUNT(param_2) - 0xb;
      param_3 = uVar4 << (uVar6 & 0xff);
      param_2 = param_2 << (uVar6 & 0xff) | uVar4 >> (0x20 - uVar6 & 0xff);
    }
    else {
      param_2 = param_2 | 0x100000;
    }
    param_1 = param_3;
    param_3 = uVar2;
    param_4 = uVar3;
  } while ((uVar1 & 1) != 0);
  return;
}

