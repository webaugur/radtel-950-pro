/**
 * @brief fun_08029568
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08029568, Ghidra name FUN_08029568, 556 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_08029568(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  uint uVar4;
  uint uVar5;
  char in_ZR;
  bool bVar6;
  uint in_fpscr;
  
  if (in_ZR == '\0') {
    param_2 = param_2 | 0x80000000;
  }
  if (param_3 == 0) {
    if ((in_r12 & 0x40000000) == 0) {
      return param_1;
    }
    in_r12 = in_r12 & 0x7fffffff;
  }
  else if ((in_fpscr & 0xc00000) == 0) {
    uVar2 = param_3 & 0x80000000;
    param_3 = param_3 << 1;
    if (uVar2 != 0) {
      if (param_3 == 0) {
        param_3 = (int)in_r12 >> 0x1e;
        if (-1 < (int)param_3) {
          if (param_3 == 0) {
            param_2 = param_2 + (0xfffffffe < param_1);
            param_1 = param_1 + 1 & 0xfffffffe;
          }
          goto LAB_08029588;
        }
      }
LAB_08029582:
      bVar6 = 0xfffffffe < param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + bVar6;
    }
  }
  else {
    if ((int)param_2 < 0) {
      uVar2 = in_fpscr & 0x400000;
    }
    else {
      uVar2 = in_fpscr & 0x800000;
    }
    if (uVar2 == 0) goto LAB_08029582;
  }
LAB_08029588:
  uVar2 = in_fpscr | 8;
  if ((in_r12 & 0x70) == 0) {
    param_3 = param_2;
  }
  uVar3 = (in_r12 & 0x7fffffff | 0x40000000) >> 0x1a & ~(in_fpscr >> 8);
  if ((in_fpscr & (in_r12 & 0x30000000) >> 0x12) != 0) {
    uVar3 = uVar3 & 0xffffffef;
  }
  uVar3 = uVar2 | uVar3;
  uVar4 = in_r12 | 0x40000000 | in_fpscr & 0x1c00000;
  uVar5 = in_r12 & 0xf;
  bVar6 = uVar5 == 10 || uVar5 == 8;
  if (uVar5 == 10 || uVar5 == 8) {
    bVar6 = (~uVar4 & 0x20000) == 0;
  }
  else {
    uVar4 = uVar4 | (in_r12 & 0x70) << 3;
  }
  if (bVar6) {
    uVar4 = uVar4 | 0xc00000;
  }
  if ((uVar4 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    goto LAB_08029cb0;
  }
  if ((uVar4 & 0x10000000) == 0) {
    if ((uVar4 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
    if ((uVar4 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if ((uVar4 & 0x40) != 0) {
          uVar2 = param_2;
          if ((uVar4 & 0x80) == 0) {
            uVar2 = param_1;
          }
          if ((uVar4 & 0x10) == 0) {
            uVar2 = DAT_080297f8 | uVar2 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar2 & 0x80000000;
            uVar2 = DAT_080297f0;
          }
          uVar2 = FUN_08029adc(uVar2,param_2);
          return uVar2;
        }
        if ((uVar4 & 0xc000) != 0) {
          bVar6 = (uVar4 & 0x8000) != 0;
          if (bVar6) {
            param_1 = param_3;
            param_2 = uVar2;
          }
          if (bVar6) {
            uVar4 = uVar4 ^ (uVar4 & 0x100) >> 1;
          }
          if ((uVar4 & 0x80) == 0) {
            param_1 = param_1 | 0x400000;
          }
          else {
            param_2 = param_2 | 0x80000;
          }
          uVar2 = FUN_08029adc(param_1,param_2);
          return uVar2;
        }
        uVar3 = DAT_080297f0;
        uVar2 = DAT_080297f4;
        if ((uVar4 & 0x10) == 0) {
          uVar3 = DAT_080297f8;
          uVar2 = param_2;
        }
        uVar2 = FUN_08029adc(uVar3,uVar2);
        return uVar2;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if ((uVar4 & 0x40) != 0) {
      return 0x80000001;
    }
    if ((uVar4 & 0x10) == 0) {
      param_3 = param_3 ^ param_1;
    }
    else {
      param_3 = param_2 ^ uVar2;
    }
    if ((uVar4 & 0xf) == 10) {
      param_3 = 0xffffffff;
    }
    uVar3 = 0;
    uVar5 = uVar4;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    uVar5 = uVar4 & 0xefffffff;
    param_3 = param_2;
    if ((uVar4 & 0x80) == 0) {
      param_3 = param_1;
    }
    param_3 = param_3 & 0x80000000;
    if (param_3 == 0) {
      cVar1 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar1 = (char)((uVar3 << 9) >> 0x18);
    }
    if (cVar1 < '\0') {
      if ((uVar4 & 0x10) == 0) {
        param_1 = DAT_080297ec | param_3;
      }
      else {
        param_2 = DAT_080297e8 | param_3;
        param_1 = DAT_080297e4;
      }
      uVar2 = uVar3;
      uVar4 = uVar5;
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
  }
  param_3 = param_3 & 0x80000000;
  if ((uVar5 & 0x10) == 0) {
    param_1 = DAT_080297e0 | param_3;
  }
  else {
    param_2 = DAT_080297dc | param_3;
    param_1 = DAT_080297d8;
  }
  uVar2 = uVar3;
  uVar4 = uVar5;
  if ((uVar3 & 0x1000) == 0) {
    return param_1;
  }
LAB_08029cb0:
  uVar2 = FUN_08001d58(param_1,param_2,param_3,uVar2,uVar4);
  if ((uVar4 & 0xf) != 9) {
    return uVar2;
  }
  if ((uVar4 & 0x100000) == 0) {
    return (uint)((uVar4 & uVar2 << 0x10) != 0);
  }
  if ((uVar4 & 0x70000) == 0) {
    return uVar2 << 0x1d;
  }
  if ((uVar2 & 8) == 0) {
    return 2 - uVar2;
  }
  return uVar2;
}

