/**
 * @brief fun_0802997c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802997c, Ghidra name FUN_0802997c, 254 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */
/* WARNING: Removing unreachable block (ram,0x080299f6) */

uint FUN_0802997c(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  uint in_fpscr;
  
  if ((in_fpscr & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((in_fpscr & 0x800) != 0) {
    uVar3 = param_3 | 0x20000000;
    goto LAB_08029cb0;
  }
  uVar5 = 0xc1 - (param_1 & 0x80000000 | param_1 >> 0x17 & 0xfffffeff);
  uVar3 = uVar5 & 0x7fffffff;
  bVar2 = (byte)(in_fpscr >> 0x10);
  if (uVar3 < 0x18) {
    uVar4 = param_1 << (0x20 - uVar5 & 0xff);
    uVar3 = 0x20 - (0x20 - uVar5);
    uVar6 = uVar3 & 0x80000000;
    param_1 = (param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | uVar6;
    if (uVar4 == 0) {
      if ((param_3 & 0x40000000) == 0) {
        return param_1;
      }
      uVar5 = in_fpscr | 8;
      uVar4 = uVar6;
      uVar6 = param_3;
    }
    else {
      if ((in_fpscr & 0xc00000) != 0) goto LAB_08029a1c;
      uVar5 = uVar4 << 1;
      if ((uVar4 & 0x80000000) != 0) {
        if (uVar5 == 0) {
          uVar4 = ~((int)param_3 >> 0x1f);
          if (uVar4 == 0) {
            param_1 = param_1 + 1;
          }
        }
        else {
          param_1 = param_1 + 1;
        }
      }
LAB_080299fa:
      uVar6 = param_3 | 0x40000000;
    }
  }
  else {
    uVar4 = uVar5 + (uVar3 >> 10);
    if (uVar3 != 0x18) {
      uVar3 = 0x7fffffff;
    }
    uVar5 = in_fpscr | 8;
    if ((in_fpscr & 0xc00000) != 0) {
      param_1 = uVar4 & 0x80000000;
LAB_08029a1c:
      uVar5 = in_fpscr | 8;
      bVar8 = 1;
      bVar7 = (param_1 & 0x80000000) == 0;
      if (!bVar7) {
        uVar4 = in_fpscr >> 0x17 | uVar5 << 9;
        bVar8 = (byte)((uVar5 << 9) >> 0x1f);
        bVar7 = uVar4 == 0;
      }
      if (bVar7) {
        uVar4 = in_fpscr >> 0x18 | uVar5 << 8;
        bVar8 = bVar2 >> 7;
      }
      if (bVar8 == 0) {
        param_1 = param_1 + 1;
      }
      goto LAB_080299fa;
    }
    if (SCARRY4(uVar3,1)) {
      param_1 = uVar4 & 0x80000000;
    }
    else {
      uVar3 = param_1 & 0x7fffff;
      param_1 = (uVar4 & 0x80000000) + 1;
      if (uVar3 == 0 && (param_3 & 0x80000000) == 0) {
        param_1 = uVar4 & 0x80000000;
      }
    }
    uVar6 = 0x40000000;
  }
  if ((uVar6 & 0x70) == 0) {
    param_3 = uVar5;
  }
  if ((uVar6 & 0x30000000 & ~(in_fpscr << 0x12)) != 0) {
    uVar6 = uVar6 | 0x40000000;
  }
  uVar3 = uVar6 | in_fpscr & 0x1c00000;
  uVar1 = uVar6 & 0xf;
  bVar7 = uVar1 == 10 || uVar1 == 8;
  if (uVar1 == 10 || uVar1 == 8) {
    bVar7 = (~uVar3 & 0x20000) == 0;
  }
  else {
    uVar3 = uVar3 | (uVar6 & 0x70) << 3;
  }
  if (bVar7) {
    uVar3 = uVar3 | 0xc00000;
  }
  if ((uVar3 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    goto LAB_08029cb0;
  }
  if ((uVar3 & 0x10000000) == 0) {
    if ((uVar3 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
    if ((uVar3 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if ((uVar3 & 0x40) != 0) {
          uVar4 = uVar5;
          if ((uVar3 & 0x80) == 0) {
            uVar4 = param_1;
          }
          if ((uVar3 & 0x10) == 0) {
            uVar3 = DAT_080297f8 | uVar4 & 0x80000000;
          }
          else {
            uVar5 = DAT_080297f4 | uVar4 & 0x80000000;
            uVar3 = DAT_080297f0;
          }
          uVar3 = FUN_08029adc(uVar3,uVar5);
          return uVar3;
        }
        if ((uVar3 & 0xc000) == 0) {
          uVar6 = DAT_080297f0;
          uVar4 = DAT_080297f4;
          if ((uVar3 & 0x10) == 0) {
            uVar6 = DAT_080297f8;
            uVar4 = uVar5;
          }
          uVar3 = FUN_08029adc(uVar6,uVar4);
          return uVar3;
        }
        bVar7 = (uVar3 & 0x8000) != 0;
        if (bVar7) {
          param_1 = param_3;
          uVar5 = uVar4;
        }
        if (bVar7) {
          uVar3 = uVar3 ^ (uVar3 & 0x100) >> 1;
        }
        if ((uVar3 & 0x80) == 0) {
          param_1 = param_1 | 0x400000;
        }
        else {
          uVar5 = uVar5 | 0x80000;
        }
        uVar3 = FUN_08029adc(param_1,uVar5);
        return uVar3;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if ((uVar3 & 0x40) != 0) {
      return 0x80000001;
    }
    if ((uVar3 & 0x10) == 0) {
      uVar5 = param_3 ^ param_1;
    }
    else {
      uVar5 = uVar5 ^ uVar4;
    }
    if ((uVar3 & 0xf) == 10) {
      uVar5 = 0xffffffff;
    }
    in_fpscr = 0;
    uVar4 = uVar3;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    uVar4 = uVar3 & 0xefffffff;
    if ((uVar3 & 0x80) == 0) {
      uVar5 = param_1;
    }
    uVar5 = uVar5 & 0x80000000;
    if (uVar5 != 0) {
      bVar2 = (byte)((in_fpscr << 9) >> 0x18);
    }
    if ((char)bVar2 < '\0') {
      param_1 = DAT_080297e4;
      if ((uVar3 & 0x10) == 0) {
        param_1 = DAT_080297ec | uVar5;
      }
      uVar3 = uVar4;
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
  }
  param_1 = DAT_080297d8;
  if ((uVar4 & 0x10) == 0) {
    param_1 = DAT_080297e0 | uVar5 & 0x80000000;
  }
  uVar3 = uVar4;
  if ((in_fpscr & 0x1000) == 0) {
    return param_1;
  }
LAB_08029cb0:
  uVar5 = FUN_08001d58(param_1);
  if ((uVar3 & 0xf) != 9) {
    return uVar5;
  }
  if ((uVar3 & 0x100000) == 0) {
    return (uint)((uVar3 & uVar5 << 0x10) != 0);
  }
  if ((uVar3 & 0x70000) == 0) {
    return uVar5 << 0x1d;
  }
  if ((uVar5 & 8) != 0) {
    return uVar5;
  }
  return 2 - uVar5;
}

