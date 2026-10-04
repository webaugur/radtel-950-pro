/**
 * @brief fun_080288d4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080288d4, Ghidra name FUN_080288d4, 200 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_080288d4(uint param_1,uint param_2,uint param_3)

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
  uint in_fpscr;
  
  iVar2 = (param_2 >> 0x14) - 0x400;
  bVar8 = SBORROW4(0x1e,iVar2);
  uVar3 = -iVar2 + 0x1e;
  uVar5 = uVar3;
  if (iVar2 < 0x1f) {
    bVar8 = SBORROW4(0x20,uVar3);
    uVar5 = 0x20 - uVar3;
  }
  uVar6 = DWORD_080289a8;
  if ((int)uVar5 < 0 == bVar8) {
    param_3 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
    uVar5 = param_3 >> (uVar3 & 0xff);
    if ((param_3 >> (uVar3 & 0x1f) | param_3 << 0x20 - (uVar3 & 0x1f)) == uVar5 &&
        (param_1 & 0x1fffff) == 0) {
      return uVar5;
    }
    param_3 = param_3 | param_1 >> 0x15;
    param_1 = param_3 >> (uVar3 & 0xff);
  }
  else if ((int)param_2 < 0) {
    if ((int)(param_2 + 0x40000000) < -0x100000) {
      param_3 = param_1 | param_2 << 1;
      param_1 = 0;
      if (param_3 == 0) {
        return 0;
      }
    }
    else {
      param_3 = param_2 * 2 + (uint)(param_1 != 0);
      uVar6 = DAT_080289ac;
      if (0xffe00000 < param_3) {
        uVar6 = DAT_080289ac | 0x10000;
      }
    }
  }
  else {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      return param_1;
    }
    if ((int)uVar3 < 0x11) {
      uVar6 = DAT_080289ac;
      if (-iVar2 == -0x3ff) {
                    /* WARNING: Subroutine does not return */
        FUN_08028c58();
      }
    }
    else {
      param_1 = 0;
    }
  }
  if ((uVar6 & 0x70) == 0) {
    param_3 = param_2;
  }
  uVar5 = uVar6 & 0x30000000;
  if ((uVar5 & ~(in_fpscr << 0x12)) != 0) {
    uVar6 = uVar6 | 0x40000000;
  }
  uVar4 = (uVar6 & 0x7fffffff) >> 0x1a & ~(in_fpscr >> 8);
  if ((uVar5 & in_fpscr << 0x12) != 0) {
    uVar4 = uVar4 & 0xffffffef;
  }
  uVar4 = in_fpscr | uVar4;
  uVar7 = uVar6 | in_fpscr & 0x1c00000;
  uVar5 = uVar6 & 0xf;
  bVar8 = uVar5 == 10 || uVar5 == 8;
  if (uVar5 == 10 || uVar5 == 8) {
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
          uVar5 = param_2;
          if ((uVar7 & 0x80) == 0) {
            uVar5 = param_1;
          }
          if ((uVar7 & 0x10) == 0) {
            uVar5 = DAT_080297f8 | uVar5 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar5 & 0x80000000;
            uVar5 = DAT_080297f0;
          }
          uVar5 = FUN_08029adc(uVar5,param_2);
          return uVar5;
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
          uVar5 = FUN_08029adc(param_1,param_2);
          return uVar5;
        }
        uVar3 = DAT_080297f0;
        uVar5 = DAT_080297f4;
        if ((uVar7 & 0x10) == 0) {
          uVar3 = DAT_080297f8;
          uVar5 = param_2;
        }
        uVar5 = FUN_08029adc(uVar3,uVar5);
        return uVar5;
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
    uVar4 = 0;
    uVar5 = uVar7;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    uVar5 = uVar7 & 0xefffffff;
    param_3 = param_2;
    if ((uVar7 & 0x80) == 0) {
      param_3 = param_1;
    }
    param_3 = param_3 & 0x80000000;
    if (param_3 == 0) {
      cVar1 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar1 = (char)((uVar4 << 9) >> 0x18);
    }
    if (cVar1 < '\0') {
      if ((uVar7 & 0x10) == 0) {
        param_1 = DAT_080297ec | param_3;
      }
      else {
        param_2 = DAT_080297e8 | param_3;
        param_1 = DAT_080297e4;
      }
      uVar3 = uVar4;
      uVar7 = uVar5;
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
  uVar3 = uVar4;
  uVar7 = uVar5;
  if ((uVar4 & 0x1000) == 0) {
    return param_1;
  }
LAB_08029cb0:
  uVar5 = FUN_08001d58(param_1,param_2,param_3,uVar3,uVar7,unaff_lr,uVar7,unaff_lr);
  if ((uVar7 & 0xf) != 9) {
    return uVar5;
  }
  if ((uVar7 & 0x100000) == 0) {
    return (uint)((uVar7 & uVar5 << 0x10) != 0);
  }
  if ((uVar7 & 0x70000) == 0) {
    return uVar5 << 0x1d;
  }
  if ((uVar5 & 8) == 0) {
    return 2 - uVar5;
  }
  return uVar5;
}

