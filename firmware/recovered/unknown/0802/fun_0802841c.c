/**
 * @brief fun_0802841c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802841c, Ghidra name FUN_0802841c, 712 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0802841c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  uint extraout_r3;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint unaff_r6;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  dword dVar15;
  uint unaff_lr;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint in_fpscr;
  undefined8 uVar19;
  
  uVar19 = CONCAT44(param_2,param_1);
  if ((_BYTE_ARRAY_08028788 & ~(param_2 >> 4)) == 0 || (_BYTE_ARRAY_08028788 & ~(param_4 >> 4)) == 0
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_08028c58();
  }
  uVar9 = param_2 ^ param_4;
  uVar7 = _BYTE_ARRAY_08028788 & param_2 >> 4;
  bVar18 = uVar7 == 0;
  uVar7 = uVar7 | uVar9 >> 0x1f;
  if (!bVar18) {
    uVar9 = _BYTE_ARRAY_08028788 & param_4 >> 4;
    bVar18 = uVar9 == 0;
  }
  if (bVar18) {
    uVar9 = _BYTE_ARRAY_08028788 & param_4 >> 4;
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      dVar15 = DAT_080286dc;
      if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
        return param_1;
      }
    }
    else {
      dVar15 = DWORD_08028794;
      if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
        unaff_lr = 0x8028699;
        uVar19 = FUN_08028ec0();
        uVar7 = (uVar7 - uVar9) * 0x10000 | (unaff_r6 ^ unaff_r6 << 1) >> 0x1f;
        uVar9 = extraout_r2;
        param_4 = extraout_r3;
        goto LAB_0802844e;
      }
    }
  }
  else {
    uVar7 = uVar7 - uVar9;
    uVar9 = param_3;
LAB_0802844e:
    uVar5 = (uint)uVar19;
    uVar6 = param_4 << 0xb | 0x80000000;
    uVar4 = (int)((ulonglong)uVar19 >> 0x20) << 0xb | 0x80000000U | uVar5 >> 0x15;
    param_4 = uVar6 | uVar9 >> 0x15;
    uVar8 = uVar7 + 0x3fe0000;
    param_3 = uVar9 * 0x800;
    if (uVar4 == param_4 && uVar5 * 0x800 == param_3) {
      uVar7 = 0x100000;
      param_1 = 0;
      uVar4 = 0;
      uVar11 = 0;
LAB_0802862c:
      uVar9 = uVar8 & 0xfffffffe;
      param_2 = uVar7 + uVar8 * -0x80000000 + uVar9 * 0x10;
      if (uVar9 < 0x7f00001) {
        return param_1;
      }
      if (-1 < (int)uVar9) {
        unaff_lr = param_2 + 0x100000;
      }
      if (-1 < (int)uVar9 && -1 < (int)(unaff_lr ^ uVar8 << 0x1f)) {
        return param_1;
      }
      if ((int)uVar8 < 0) {
LAB_08028660:
        param_2 = param_2 + 0x60000000;
        uVar7 = 0;
        if (uVar4 != 0 || uVar11 != 0) {
          uVar7 = uVar4 & 0x80000000 | 0x40000000;
        }
        uVar9 = uVar7 | 0x20000014;
        if ((in_fpscr & 0x1000000) != 0) {
          return 0;
        }
        if ((in_fpscr & 0x800) != 0) {
          uVar7 = uVar7 | 0x20000094;
          param_4 = in_fpscr;
          goto LAB_08029cb0;
        }
        if ((int)param_2 < 0) {
          uVar9 = uVar7 | 0x20010014;
        }
        uVar7 = param_2 & ~((param_2 >> 0x14) << 0x14);
        uVar8 = 0x601 - (param_2 >> 0x14 & 0xfffff7ff);
        if ((int)uVar8 < 0) {
          uVar8 = 0xffffff01;
        }
        uVar5 = uVar7 | 0x100000;
        if (uVar8 < 0x36) {
          if (uVar8 == 0x35) {
            uVar8 = 0;
            param_2 = 0;
            param_3 = 0x80000000;
            if (param_1 != 0 || (uVar7 & 0xfffff) != 0) {
              param_3 = 0x80000001;
            }
          }
          else if (uVar8 < 0x15) {
            param_3 = param_1 << (0x20 - uVar8 & 0xff);
            param_2 = uVar5 >> (uVar8 & 0xff);
            uVar8 = uVar5 << (0x20 - uVar8 & 0xff) | param_1 >> (uVar8 & 0xff);
          }
          else {
            uVar7 = uVar8 - 0x20;
            if (uVar8 < 0x20 || uVar7 == 0) {
              uVar8 = uVar5 << (-uVar7 & 0xff) | param_1 >> (uVar8 & 0xff);
              param_3 = param_1 << (-uVar7 & 0xff);
              param_2 = 0;
            }
            else {
              uVar8 = uVar5 >> (uVar7 & 0xff);
              param_3 = uVar5 << (0x20 - uVar7 & 0xff);
              if (param_1 != 0) {
                param_3 = param_3 | 1;
              }
              param_2 = 0;
            }
          }
        }
        else {
          param_3 = 1;
          param_2 = 0;
          uVar8 = 0;
        }
        uVar7 = uVar9 & 0xfffeffff;
        if ((uVar9 & 0x10000) != 0) {
          param_2 = param_2 | 0x80000000;
        }
        if (param_3 == 0) {
          if ((uVar9 & 0x40000000) == 0) {
            return uVar8;
          }
          uVar7 = uVar9 & 0x7ffeffff;
        }
        else if ((in_fpscr & 0xc00000) == 0) {
          uVar5 = param_3 & 0x80000000;
          param_3 = param_3 << 1;
          if (uVar5 != 0) {
            if (param_3 == 0) {
              param_3 = (int)uVar9 >> 0x1e;
              if (-1 < (int)param_3) {
                if (param_3 == 0) {
                  param_2 = param_2 + (0xfffffffe < uVar8);
                  uVar8 = uVar8 + 1 & 0xfffffffe;
                }
                goto LAB_08029588;
              }
            }
LAB_08029582:
            bVar18 = 0xfffffffe < uVar8;
            uVar8 = uVar8 + 1;
            param_2 = param_2 + bVar18;
          }
        }
        else {
          if ((int)param_2 < 0) {
            uVar9 = in_fpscr & 0x400000;
          }
          else {
            uVar9 = in_fpscr & 0x800000;
          }
          if (uVar9 == 0) goto LAB_08029582;
        }
LAB_08029588:
        param_4 = in_fpscr | 8;
        param_1 = uVar8;
        dVar15 = uVar7 | 0x40000000;
        in_fpscr = param_4;
      }
      else {
LAB_08028570:
        param_2 = param_2 + 0xa0000000;
        dVar15 = DAT_08028790;
        if (uVar4 != 0 || uVar11 != 0) {
          dVar15 = DAT_08028790 | 0x40000000;
        }
      }
    }
    else {
      uVar11 = (uint)*(byte *)((uVar6 >> 0x18) + 0x8028688);
      uVar11 = uVar11 * (0x1000000 - uVar11 * (uVar6 >> 0x10)) >> 0xf;
      iVar12 = (int)((ulonglong)uVar11 * (ulonglong)param_4);
      iVar10 = -(int)((ulonglong)uVar11 * (ulonglong)param_4 >> 0x20);
      iVar14 = iVar10 + 0x10000;
      if (iVar12 != 0) {
        iVar14 = iVar10 + 0xffff;
      }
      uVar11 = uVar11 * iVar14 + (int)((ulonglong)uVar11 * (ulonglong)(uint)-iVar12 >> 0x20);
      lVar1 = (ulonglong)uVar11 * (ulonglong)param_4 +
              ((ulonglong)uVar11 * (ulonglong)param_3 >> 0x20);
      iVar12 = (int)lVar1;
      iVar10 = -(int)((ulonglong)lVar1 >> 0x20);
      uVar16 = iVar10 + 0x80000000;
      if (iVar12 != 0) {
        uVar16 = iVar10 + 0x7fffffff;
      }
      uVar2 = (ulonglong)uVar11 * (ulonglong)uVar16 +
              ((ulonglong)uVar11 * (ulonglong)(uint)-iVar12 >> 0x20);
      uVar11 = (uint)uVar2;
      uVar13 = (uint)(uVar2 >> 0x20);
      uVar16 = (uint)((ulonglong)uVar4 * (uVar2 & 0xffffffff) >> 0x20);
      uVar17 = (uint)((ulonglong)(uVar5 * 0x800) * (ulonglong)uVar13 >> 0x20);
      uVar2 = (ulonglong)uVar4 * (ulonglong)uVar13 +
              (ulonglong)CONCAT14(CARRY4(uVar16,uVar17),uVar16 + uVar17);
      iVar10 = (int)(uVar2 >> 0x20);
      uVar16 = iVar10 + 0x70000000;
      if (!SCARRY4(iVar10,0x70000000)) {
        uVar8 = uVar7 + 0x3fd0000;
        uVar2 = CONCAT44(iVar10 * 2 + (uint)((uVar2 & 0x80000000) != 0),(int)uVar2 << 1);
      }
      uVar7 = (uint)(uVar2 + 0x80 >> 0x20);
      param_1 = (uint)(uVar2 + 0x80) >> 8 | uVar7 * 0x1000000;
      uVar7 = uVar7 >> 8;
      if ((((in_fpscr & 0xc00000) != 0) ||
          (uVar4 = (int)uVar2 * 0x2000000 + 0x22000000, uVar4 < 0x22000001)) || (0x7f00000 < uVar8))
      {
        param_3 = uVar9 & 0x1fffff | (uVar9 >> 0x15) << 0x15;
        param_4 = uVar6 >> 0xb;
        uVar11 = (uint)((ulonglong)param_1 * (ulonglong)param_3);
        iVar10 = uVar7 * param_3 +
                 param_1 * param_4 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
        if (-1 < (int)uVar16) {
          iVar10 = iVar10 + uVar5 * -0x100000;
        }
        uVar4 = iVar10 + uVar5 * -0x100000;
        if ((int)(uVar4 + (uVar6 >> 0xc) + (uint)CARRY4(uVar11,param_3 >> 1 | param_4 << 0x1f)) < 0)
        {
          bVar18 = CARRY4(uVar11,param_3);
          uVar11 = uVar11 + param_3;
          uVar4 = uVar4 + param_4 + (uint)bVar18;
          bVar18 = 0xfffffffe < param_1;
          param_1 = param_1 + 1;
          uVar7 = uVar7 + bVar18;
        }
        uVar16 = uVar4 | uVar11;
        unaff_lr = 0;
        if (uVar16 == 0) goto LAB_0802862c;
        if ((in_fpscr & 0xc00000) != 0) {
          uVar9 = in_fpscr;
          if ((uVar8 & 1) != 0) {
            uVar9 = in_fpscr << 1;
          }
          if ((uVar9 & 0x800000) == 0) {
            if ((int)uVar4 < 0) {
              bVar18 = CARRY4(uVar11,param_3);
              uVar11 = uVar11 + param_3;
              uVar4 = uVar4 + param_4 + (uint)bVar18;
              bVar18 = 0xfffffffe < param_1;
              param_1 = param_1 + 1;
              uVar7 = uVar7 + bVar18;
            }
          }
          else if (-1 < (int)uVar4) {
            bVar18 = uVar11 < param_3;
            uVar11 = uVar11 - param_3;
            uVar4 = (uVar4 - param_4) - (uint)bVar18;
            bVar18 = param_1 == 0;
            param_1 = param_1 - 1;
            uVar7 = uVar7 - bVar18;
          }
        }
      }
      param_2 = uVar7 + uVar8 * -0x80000000 + (uVar8 & 0xfffffffe) * 0x10;
      dVar15 = DWORD_0802878c;
      if (0x7f00000 < (uVar8 & 0xfffffffe)) {
        if (-1 < (int)uVar8) {
          uVar16 = param_2 + 0x100000;
        }
        if (-1 >= (int)uVar8 || (int)(uVar16 ^ uVar8 << 0x1f) < 0) {
          if ((int)uVar8 < 0) goto LAB_08028660;
          goto LAB_08028570;
        }
      }
    }
  }
  if ((dVar15 & 0x70) == 0) {
    param_3 = param_2;
  }
  uVar7 = dVar15 & 0x30000000;
  if ((uVar7 & ~(in_fpscr << 0x12)) != 0) {
    dVar15 = dVar15 | 0x40000000;
  }
  uVar9 = (dVar15 & 0x7fffffff) >> 0x1a & ~(in_fpscr >> 8);
  if ((uVar7 & in_fpscr << 0x12) != 0) {
    uVar9 = uVar9 & 0xffffffef;
  }
  uVar9 = in_fpscr | uVar9;
  uVar7 = dVar15 | in_fpscr & 0x1c00000;
  uVar8 = dVar15 & 0xf;
  bVar18 = uVar8 == 10 || uVar8 == 8;
  if (uVar8 == 10 || uVar8 == 8) {
    bVar18 = (~uVar7 & 0x20000) == 0;
  }
  else {
    uVar7 = uVar7 | (dVar15 & 0x70) << 3;
  }
  if (bVar18) {
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
          uVar9 = param_2;
          if ((uVar7 & 0x80) == 0) {
            uVar9 = param_1;
          }
          if ((uVar7 & 0x10) == 0) {
            uVar7 = DAT_080297f8 | uVar9 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar9 & 0x80000000;
            uVar7 = DAT_080297f0;
          }
          uVar7 = FUN_08029adc(uVar7,param_2);
          return uVar7;
        }
        if ((uVar7 & 0xc000) != 0) {
          bVar18 = (uVar7 & 0x8000) != 0;
          if (bVar18) {
            param_1 = param_3;
            param_2 = param_4;
          }
          if (bVar18) {
            uVar7 = uVar7 ^ (uVar7 & 0x100) >> 1;
          }
          if ((uVar7 & 0x80) == 0) {
            param_1 = param_1 | 0x400000;
          }
          else {
            param_2 = param_2 | 0x80000;
          }
          uVar7 = FUN_08029adc(param_1,param_2);
          return uVar7;
        }
        uVar8 = DAT_080297f0;
        uVar9 = DAT_080297f4;
        if ((uVar7 & 0x10) == 0) {
          uVar8 = DAT_080297f8;
          uVar9 = param_2;
        }
        uVar7 = FUN_08029adc(uVar8,uVar9);
        return uVar7;
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
      param_3 = param_2 ^ param_4;
    }
    if ((uVar7 & 0xf) == 10) {
      param_3 = 0xffffffff;
    }
    uVar9 = 0;
    uVar8 = uVar7;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    uVar8 = uVar7 & 0xefffffff;
    param_3 = param_2;
    if ((uVar7 & 0x80) == 0) {
      param_3 = param_1;
    }
    param_3 = param_3 & 0x80000000;
    if (param_3 == 0) {
      cVar3 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar3 = (char)((uVar9 << 9) >> 0x18);
    }
    if (cVar3 < '\0') {
      if ((uVar7 & 0x10) == 0) {
        param_1 = DAT_080297ec | param_3;
      }
      else {
        param_2 = DAT_080297e8 | param_3;
        param_1 = DAT_080297e4;
      }
      param_4 = uVar9;
      uVar7 = uVar8;
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
  }
  param_3 = param_3 & 0x80000000;
  if ((uVar8 & 0x10) == 0) {
    param_1 = DAT_080297e0 | param_3;
  }
  else {
    param_2 = DAT_080297dc | param_3;
    param_1 = DAT_080297d8;
  }
  param_4 = uVar9;
  uVar7 = uVar8;
  if ((uVar9 & 0x1000) == 0) {
    return param_1;
  }
LAB_08029cb0:
  uVar9 = FUN_08001d58(param_1,param_2,param_3,param_4);
  if ((uVar7 & 0xf) != 9) {
    return uVar9;
  }
  if ((uVar7 & 0x100000) == 0) {
    return (uint)((uVar7 & uVar9 << 0x10) != 0);
  }
  if ((uVar7 & 0x70000) == 0) {
    return uVar9 << 0x1d;
  }
  if ((uVar9 & 8) == 0) {
    return 2 - uVar9;
  }
  return uVar9;
}

