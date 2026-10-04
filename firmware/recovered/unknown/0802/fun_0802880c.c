/**
 * @brief fun_0802880c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802880c, Ghidra name FUN_0802880c, 180 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_0802880c(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  
  iVar2 = ((param_2 & 0x7fffffff) >> 0x14) - 0x400;
  bVar9 = SBORROW4(0x1e,iVar2);
  uVar3 = -iVar2 + 0x1e;
  bVar8 = uVar3 == 0;
  uVar4 = uVar3;
  if (!bVar8 && iVar2 < 0x1f) {
    bVar9 = SBORROW4(0x21,uVar3);
    uVar4 = 0x21 - uVar3;
    bVar8 = uVar3 == 0x21;
  }
  uVar6 = DWORD_080288cc;
  if (bVar8 || (int)uVar4 < 0 != bVar9) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      return param_1;
    }
    if ((int)uVar3 < 0x11) {
      if (-iVar2 == -0x3ff) {
                    /* WARNING: Subroutine does not return */
        FUN_08028c58();
      }
      uVar6 = DAT_080288d0;
      if ((((uVar3 == 0 && (int)param_2 >> 0x20 == -1) && (param_2 & 0xfffff) == 0) &&
           param_1 >> 0x15 == 0) &&
         (bVar8 = param_1 == 0, param_1 = 0x80000000, uVar6 = DWORD_080288cc, bVar8)) {
        return 0x80000000;
      }
    }
    else {
      param_1 = 0;
    }
  }
  else {
    param_3 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
    uVar5 = param_3 >> (uVar3 & 0xff);
    uVar4 = (int)param_2 >> 0x1f;
    if ((param_3 >> (uVar3 & 0x1f) | param_3 << 0x20 - (uVar3 & 0x1f)) == uVar5 &&
        (param_1 & 0x1fffff) == 0) {
      return (uVar5 ^ uVar4) - uVar4;
    }
    param_1 = (param_3 >> (uVar3 & 0xff) ^ uVar4) - uVar4;
  }
  if ((uVar6 & 0x70) == 0) {
    param_3 = param_2;
  }
  uVar4 = uVar6 & 0x30000000;
  if ((uVar4 & ~(in_fpscr << 0x12)) != 0) {
    uVar6 = uVar6 | 0x40000000;
  }
  uVar5 = (uVar6 & 0x7fffffff) >> 0x1a & ~(in_fpscr >> 8);
  if ((uVar4 & in_fpscr << 0x12) != 0) {
    uVar5 = uVar5 & 0xffffffef;
  }
  uVar5 = in_fpscr | uVar5;
  uVar7 = uVar6 | in_fpscr & 0x1c00000;
  uVar4 = uVar6 & 0xf;
  bVar8 = uVar4 == 10 || uVar4 == 8;
  if (uVar4 == 10 || uVar4 == 8) {
    bVar8 = (~uVar7 & 0x20000) == 0;
  }
  else {
    uVar7 = uVar7 | (uVar6 & 0x70) << 3;
  }
  if (bVar8) {
    uVar7 = uVar7 | 0xc00000;
  }
  if ((uVar7 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    goto LAB_08029cb0;
  }
  if ((uVar7 & 0x10000000) == 0) {
    if ((uVar7 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
    if ((uVar7 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if ((uVar7 & 0x40) != 0) {
          uVar4 = param_2;
          if ((uVar7 & 0x80) == 0) {
            uVar4 = param_1;
          }
          if ((uVar7 & 0x10) == 0) {
            uVar4 = DAT_080297f8 | uVar4 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar4 & 0x80000000;
            uVar4 = DAT_080297f0;
          }
          uVar4 = FUN_08029adc(uVar4,param_2);
          return uVar4;
        }
        if ((uVar7 & 0xc000) != 0) {
          bVar8 = (uVar7 & 0x8000) != 0;
          if (bVar8) {
            param_1 = param_3;
            param_2 = uVar3;
          }
          if (bVar8) {
            uVar7 = uVar7 ^ (uVar7 & 0x100) >> 1;
          }
          if ((uVar7 & 0x80) == 0) {
            param_1 = param_1 | 0x400000;
          }
          else {
            param_2 = param_2 | 0x80000;
          }
          uVar4 = FUN_08029adc(param_1,param_2);
          return uVar4;
        }
        uVar3 = DAT_080297f0;
        uVar4 = DAT_080297f4;
        if ((uVar7 & 0x10) == 0) {
          uVar3 = DAT_080297f8;
          uVar4 = param_2;
        }
        uVar4 = FUN_08029adc(uVar3,uVar4);
        return uVar4;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if ((uVar7 & 0x40) != 0) {
      return 0x80000001;
    }
    if ((uVar7 & 0x10) == 0) {
      param_3 = param_3 ^ param_1;
    }
    else {
      param_3 = param_2 ^ uVar3;
    }
    if ((uVar7 & 0xf) == 10) {
      param_3 = 0xffffffff;
    }
    uVar5 = 0;
    uVar4 = uVar7;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    uVar4 = uVar7 & 0xefffffff;
    param_3 = param_2;
    if ((uVar7 & 0x80) == 0) {
      param_3 = param_1;
    }
    param_3 = param_3 & 0x80000000;
    if (param_3 == 0) {
      cVar1 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar1 = (char)((uVar5 << 9) >> 0x18);
    }
    if (cVar1 < '\0') {
      if ((uVar7 & 0x10) == 0) {
        param_1 = DAT_080297ec | param_3;
      }
      else {
        param_2 = DAT_080297e8 | param_3;
        param_1 = DAT_080297e4;
      }
      uVar3 = uVar5;
      uVar7 = uVar4;
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
  }
  param_3 = param_3 & 0x80000000;
  if ((uVar4 & 0x10) == 0) {
    param_1 = DAT_080297e0 | param_3;
  }
  else {
    param_2 = DAT_080297dc | param_3;
    param_1 = DAT_080297d8;
  }
  uVar3 = uVar5;
  uVar7 = uVar4;
  if ((uVar5 & 0x1000) == 0) {
    return param_1;
  }
LAB_08029cb0:
  uVar4 = FUN_08001d58(param_1,param_2,param_3,uVar3,uVar7,unaff_lr,uVar7,unaff_lr);
  if ((uVar7 & 0xf) != 9) {
    return uVar4;
  }
  if ((uVar7 & 0x100000) == 0) {
    return (uint)((uVar7 & uVar4 << 0x10) != 0);
  }
  if ((uVar7 & 0x70000) == 0) {
    return uVar4 << 0x1d;
  }
  if ((uVar4 & 8) == 0) {
    return 2 - uVar4;
  }
  return uVar4;
}

