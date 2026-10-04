/**
 * @brief fun_08028a98
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028a98, Ghidra name FUN_08028a98, 396 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_08028a98(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint extraout_r2;
  uint uVar9;
  uint extraout_r3;
  uint uVar10;
  uint unaff_r5;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint unaff_r6;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 unaff_lr;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint in_fpscr;
  undefined8 uVar20;
  
  uVar17 = DAT_08028c50 & param_2 >> 4;
  bVar19 = uVar17 == 0;
  if (!bVar19) {
    unaff_r5 = DAT_08028c50 & param_4 >> 4;
    bVar19 = unaff_r5 == 0;
  }
  if (!bVar19) {
    bVar19 = uVar17 == DAT_08028c50;
  }
  if (!bVar19) {
    bVar19 = unaff_r5 == DAT_08028c50;
  }
  if (bVar19) {
    uVar9 = DAT_08028c50 & param_4 >> 4;
    if (uVar17 == DAT_08028c50 || uVar9 == DAT_08028c50) {
                    /* WARNING: Subroutine does not return */
      FUN_08028c58();
    }
    bVar1 = (param_2 & 0x7fffffff) == 0;
    bVar19 = param_1 == 0 && bVar1;
    uVar17 = 0;
    if (param_1 != 0 || !bVar1) {
      uVar17 = param_3 | param_4 << 1;
      bVar19 = uVar17 == 0;
    }
    if (bVar19) {
      return 0;
    }
    uVar20 = FUN_08028ec0();
    uVar7 = (uint)((ulonglong)uVar20 >> 0x20);
    param_1 = (uint)uVar20;
    uVar17 = (uVar17 + uVar9) * 0x10000 | (unaff_r6 ^ unaff_r6 << 1) >> 0x1f;
    param_3 = extraout_r2;
    uVar9 = extraout_r3;
  }
  else {
    uVar17 = (uVar17 | (param_2 ^ param_4) >> 0x1f) + unaff_r5;
    uVar7 = param_2 & ~(DAT_08028c50 << 5) | 0x100000;
    uVar9 = param_4 & ~(DAT_08028c50 << 5) | 0x100000;
  }
  lVar2 = (ulonglong)uVar7 * (ulonglong)param_3;
  uVar15 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar3 = (ulonglong)param_1 * (ulonglong)uVar9;
  uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar18 = uVar17 + 0xfc040000;
  lVar5 = lVar2 + lVar3;
  uVar12 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar10 = (uint)((ulonglong)uVar7 * (ulonglong)uVar9);
  uVar16 = (uint)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
  lVar6 = lVar5 + CONCAT44(uVar10,uVar16);
  uVar14 = (uint)lVar6;
  uVar13 = (uint)((ulonglong)lVar6 >> 0x20);
  uVar9 = (int)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x20) +
          (uint)(CARRY4(uVar11,uVar15) ||
                CARRY4(uVar11 + uVar15,(uint)CARRY4((uint)lVar3,(uint)lVar2))) +
          (uint)(CARRY4(uVar12,uVar10) || CARRY4(uVar12 + uVar10,(uint)CARRY4((uint)lVar5,uVar16)));
  if ((int)((ulonglong)param_1 * (ulonglong)param_3) != 0) {
    uVar14 = uVar14 | 1;
  }
  if ((uVar9 & 0x200) == 0) {
    uVar11 = uVar14 << 0xc;
    uVar7 = uVar9 * 0x1000 | uVar13 >> 0x14;
    uVar10 = uVar13 << 0xc | uVar14 >> 0x14;
    iVar8 = -4;
  }
  else {
    uVar11 = uVar14 << 0xb;
    uVar7 = uVar9 * 0x800 | uVar13 >> 0x15;
    uVar10 = uVar13 << 0xb | uVar14 >> 0x15;
    iVar8 = -3;
  }
  uVar12 = iVar8 + ((int)uVar18 >> 0x10);
  uVar7 = uVar7 + uVar12 * 0x100000;
  uVar13 = uVar7 ^ uVar17 * -0x80000000;
  uVar14 = uVar10;
  if (uVar11 == 0) {
    if (uVar12 < 0x7fe) {
      return uVar10;
    }
LAB_08028ba4:
    if (uVar14 == uVar7) {
      uVar7 = 0xc0000000;
    }
    else {
      uVar7 = 0x40000000;
    }
    if (uVar11 == 0) {
      uVar7 = 0;
    }
    if ((int)uVar18 < 0x4000001) {
      uVar13 = uVar13 + 0x60000000;
    }
    if (0x3ffffff < (int)uVar18) {
      uVar13 = uVar13 + 0xa0000000;
    }
    uVar17 = uVar7 | 0x13;
    if (0x3ffffff < (int)uVar18) {
      uVar17 = uVar7 | 0x10000013;
    }
    if ((int)uVar18 < 0x4000001) {
      if ((in_fpscr & 0x1000000) != 0) {
        return 0;
      }
      if ((in_fpscr & 0x800) != 0) {
        uVar7 = uVar17 | 0x20000080;
        uVar9 = in_fpscr;
        goto LAB_08029cb0;
      }
      if ((int)uVar13 < 0) {
        uVar17 = uVar17 | 0x10000;
      }
      uVar9 = uVar13 & ~((uVar13 >> 0x14) << 0x14);
      uVar7 = 0x601 - (uVar13 >> 0x14 & 0xfffff7ff);
      if ((int)uVar7 < 0) {
        uVar7 = 0xffffff01;
      }
      uVar10 = uVar9 | 0x100000;
      if (uVar7 < 0x36) {
        if (uVar7 == 0x35) {
          uVar7 = 0;
          uVar13 = 0;
          uVar12 = 0x80000000;
          if (uVar14 != 0 || (uVar9 & 0xfffff) != 0) {
            uVar12 = 0x80000001;
          }
        }
        else if (uVar7 < 0x15) {
          uVar12 = uVar14 << (0x20 - uVar7 & 0xff);
          uVar13 = uVar10 >> (uVar7 & 0xff);
          uVar7 = uVar10 << (0x20 - uVar7 & 0xff) | uVar14 >> (uVar7 & 0xff);
        }
        else {
          uVar9 = uVar7 - 0x20;
          if (uVar7 < 0x20 || uVar9 == 0) {
            uVar7 = uVar10 << (-uVar9 & 0xff) | uVar14 >> (uVar7 & 0xff);
            uVar12 = uVar14 << (-uVar9 & 0xff);
            uVar13 = 0;
          }
          else {
            uVar7 = uVar10 >> (uVar9 & 0xff);
            uVar12 = uVar10 << (0x20 - uVar9 & 0xff);
            if (uVar14 != 0) {
              uVar12 = uVar12 | 1;
            }
            uVar13 = 0;
          }
        }
      }
      else {
        uVar12 = 1;
        uVar13 = 0;
        uVar7 = 0;
      }
      uVar10 = uVar17 & 0xfffeffff;
      if ((uVar17 & 0x10000) != 0) {
        uVar13 = uVar13 | 0x80000000;
      }
      if (uVar12 == 0) {
        if ((uVar17 & 0x40000000) == 0) {
          return uVar7;
        }
        uVar10 = uVar17 & 0x7ffeffff;
      }
      else if ((in_fpscr & 0xc00000) == 0) {
        uVar9 = uVar12 & 0x80000000;
        uVar12 = uVar12 << 1;
        if (uVar9 != 0) {
          if (uVar12 == 0) {
            uVar12 = (int)uVar17 >> 0x1e;
            if (-1 < (int)uVar12) {
              if (uVar12 == 0) {
                uVar13 = uVar13 + (0xfffffffe < uVar7);
                uVar7 = uVar7 + 1 & 0xfffffffe;
              }
              goto LAB_08029588;
            }
          }
LAB_08029582:
          bVar19 = 0xfffffffe < uVar7;
          uVar7 = uVar7 + 1;
          uVar13 = uVar13 + bVar19;
        }
      }
      else {
        if ((int)uVar13 < 0) {
          uVar17 = in_fpscr & 0x400000;
        }
        else {
          uVar17 = in_fpscr & 0x800000;
        }
        if (uVar17 == 0) goto LAB_08029582;
      }
LAB_08029588:
      uVar9 = in_fpscr | 8;
      uVar14 = uVar7;
      uVar17 = uVar10 | 0x40000000;
      in_fpscr = uVar9;
    }
  }
  else {
    if ((in_fpscr & 0xc00000) == 0) {
      bVar1 = (uVar11 & 0x80000000) != 0;
      uVar17 = uVar11;
      if ((uVar11 & 0x7fffffff) != 0) {
        uVar17 = 0;
      }
      bVar19 = CARRY4(uVar10,(uint)bVar1);
      uVar14 = uVar10 + bVar1 & ~(uVar17 >> 0x1f);
    }
    else {
      uVar17 = uVar17 * -0x80000000;
      bVar19 = (int)uVar17 < 0;
      if (!bVar19) {
        uVar17 = in_fpscr & 0x800000;
      }
      if (bVar19) {
        uVar17 = in_fpscr & 0x400000;
      }
      bVar19 = !bVar19 && (bVar19 && (uVar18 & 2) != 0);
      if (uVar17 == 0) {
        bVar19 = 0xfffffffe < uVar10;
        uVar14 = uVar10 + 1;
      }
    }
    uVar13 = uVar13 + bVar19;
    uVar17 = DAT_08028c54;
    if ((0x7fc < uVar12) && (uVar7 = uVar10, uVar12 != 0x7fd || (uVar13 & 0x100000) != 0))
    goto LAB_08028ba4;
  }
  if ((uVar17 & 0x70) == 0) {
    uVar12 = uVar13;
  }
  uVar7 = uVar17 & 0x30000000;
  if ((uVar7 & ~(in_fpscr << 0x12)) != 0) {
    uVar17 = uVar17 | 0x40000000;
  }
  uVar10 = (uVar17 & 0x7fffffff) >> 0x1a & ~(in_fpscr >> 8);
  if ((uVar7 & in_fpscr << 0x12) != 0) {
    uVar10 = uVar10 & 0xffffffef;
  }
  uVar10 = in_fpscr | uVar10;
  uVar7 = uVar17 | in_fpscr & 0x1c00000;
  uVar11 = uVar17 & 0xf;
  bVar19 = uVar11 == 10 || uVar11 == 8;
  if (uVar11 == 10 || uVar11 == 8) {
    bVar19 = (~uVar7 & 0x20000) == 0;
  }
  else {
    uVar7 = uVar7 | (uVar17 & 0x70) << 3;
  }
  if (bVar19) {
    uVar7 = uVar7 | 0xc00000;
  }
  if ((uVar7 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return uVar14;
    }
    goto LAB_08029cb0;
  }
  if ((uVar7 & 0x10000000) == 0) {
    if ((uVar7 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return uVar14;
      }
      goto LAB_08029cb0;
    }
    if ((uVar7 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if ((uVar7 & 0x40) != 0) {
          uVar17 = uVar13;
          if ((uVar7 & 0x80) == 0) {
            uVar17 = uVar14;
          }
          if ((uVar7 & 0x10) == 0) {
            uVar17 = DAT_080297f8 | uVar17 & 0x80000000;
          }
          else {
            uVar13 = DAT_080297f4 | uVar17 & 0x80000000;
            uVar17 = DAT_080297f0;
          }
          uVar17 = FUN_08029adc(uVar17,uVar13);
          return uVar17;
        }
        if ((uVar7 & 0xc000) != 0) {
          bVar19 = (uVar7 & 0x8000) != 0;
          if (bVar19) {
            uVar14 = uVar12;
            uVar13 = uVar9;
          }
          if (bVar19) {
            uVar7 = uVar7 ^ (uVar7 & 0x100) >> 1;
          }
          if ((uVar7 & 0x80) == 0) {
            uVar14 = uVar14 | 0x400000;
          }
          else {
            uVar13 = uVar13 | 0x80000;
          }
          uVar17 = FUN_08029adc(uVar14,uVar13);
          return uVar17;
        }
        uVar9 = DAT_080297f0;
        uVar17 = DAT_080297f4;
        if ((uVar7 & 0x10) == 0) {
          uVar9 = DAT_080297f8;
          uVar17 = uVar13;
        }
        uVar17 = FUN_08029adc(uVar9,uVar17);
        return uVar17;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if ((uVar7 & 0x40) != 0) {
      return 0x80000001;
    }
    if ((uVar7 & 0x10) == 0) {
      uVar12 = uVar12 ^ uVar14;
    }
    else {
      uVar12 = uVar13 ^ uVar9;
    }
    if ((uVar7 & 0xf) == 10) {
      uVar12 = 0xffffffff;
    }
    uVar10 = 0;
    uVar17 = uVar7;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    uVar17 = uVar7 & 0xefffffff;
    uVar12 = uVar13;
    if ((uVar7 & 0x80) == 0) {
      uVar12 = uVar14;
    }
    uVar12 = uVar12 & 0x80000000;
    if (uVar12 == 0) {
      cVar4 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar4 = (char)((uVar10 << 9) >> 0x18);
    }
    if (cVar4 < '\0') {
      if ((uVar7 & 0x10) == 0) {
        uVar14 = DAT_080297ec | uVar12;
      }
      else {
        uVar13 = DAT_080297e8 | uVar12;
        uVar14 = DAT_080297e4;
      }
      uVar9 = uVar10;
      uVar7 = uVar17;
      if ((in_fpscr & 0x1000) == 0) {
        return uVar14;
      }
      goto LAB_08029cb0;
    }
  }
  uVar12 = uVar12 & 0x80000000;
  if ((uVar17 & 0x10) == 0) {
    uVar14 = DAT_080297e0 | uVar12;
  }
  else {
    uVar13 = DAT_080297dc | uVar12;
    uVar14 = DAT_080297d8;
  }
  uVar9 = uVar10;
  uVar7 = uVar17;
  if ((uVar10 & 0x1000) == 0) {
    return uVar14;
  }
LAB_08029cb0:
  uVar17 = FUN_08001d58(uVar14,uVar13,uVar12,uVar9,uVar7,unaff_lr,uVar7,unaff_lr);
  if ((uVar7 & 0xf) != 9) {
    return uVar17;
  }
  if ((uVar7 & 0x100000) == 0) {
    return (uint)((uVar7 & uVar17 << 0x10) != 0);
  }
  if ((uVar7 & 0x70000) == 0) {
    return uVar17 << 0x1d;
  }
  if ((uVar17 & 8) == 0) {
    return 2 - uVar17;
  }
  return uVar17;
}

