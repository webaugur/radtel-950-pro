/**
 * @brief fun_08029adc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08029adc, Ghidra name FUN_08029adc, 178 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */
/* WARNING: Removing unreachable block (ram,0x08029ce6) */

undefined8 FUN_08029adc(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint in_r12;
  
  uVar4 = in_r12 & 0xf;
  if (uVar4 == 9) {
    if ((in_r12 & 0x100000) == 0) {
      return CONCAT44(param_2,(uint)((in_r12 & 0x80000) != 0));
    }
    if ((in_r12 & 0x70000) != 0) {
      return CONCAT44(~(in_r12 << 0xf) << 1,8);
    }
    return 0xe000000000000000;
  }
  if (uVar4 == 10) {
    if ((in_r12 & 0x40) != 0) {
      param_1 = 0x80000000;
    }
    return CONCAT44(param_2,param_1);
  }
  if (uVar4 != 8) {
    return CONCAT44(param_2,param_1);
  }
  if ((in_r12 & 0x40) == 0) {
    if ((in_r12 & 0x10) != 0) {
      return CONCAT44(param_1 & 0xff000000 | (param_1 & 0xfffffff) >> 3,param_1 << 0x1d);
    }
    return CONCAT44(param_2,param_2 & 0xff000000 | param_1 >> 0x1d | (param_2 & 0xffffff) << 3);
  }
  if ((in_r12 & 0x10000) == 0) {
    if ((in_r12 & 0x20) == 0) {
      if ((in_r12 & 0x10) == 0) {
        uVar1 = 0x7fffffff;
        uVar4 = param_2;
        param_2 = param_1;
      }
      else {
        uVar4 = 0x7fffffff;
        uVar1 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar1 = ~uVar1;
        uVar4 = ~uVar4;
      }
      return CONCAT44(uVar4,uVar1);
    }
    if ((in_r12 & 0x10) != 0) {
      param_1 = param_2;
    }
    uVar2 = 0xffffffff;
    uVar3 = 0xffffffff;
    if ((param_1 & 0x80000000) != 0) {
      uVar2 = 0;
      uVar3 = 0;
    }
    return CONCAT44(uVar3,uVar2);
  }
  return 0;
}

