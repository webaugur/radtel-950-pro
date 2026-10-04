/**
 * @brief fun_080291f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080291f8, Ghidra name FUN_080291f8, 852 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x080295b8) */
/* WARNING: Removing unreachable block (ram,0x08029cfe) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_080291f8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  uint in_fpscr;
  
  if ((DAT_08029490 & (param_2 + 0x100000) * 2) == 0 ||
      (DAT_08029490 & (param_4 + 0x100000) * 2) == 0) {
    if (((DAT_08029490 | 0x200000) & ~(param_2 << 1)) == 0 ||
        ((DAT_08029490 | 0x200000) & ~(param_4 << 1)) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_08028c58();
    }
    if ((int)(param_2 ^ param_4) < 0) {
      param_4 = param_4 ^ 0x80000000;
      uVar6 = param_1 - param_3;
      iVar4 = (param_2 - param_4) - (uint)(param_3 > param_1);
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        bVar14 = CARRY4(param_3,uVar6);
        param_3 = param_3 + uVar6;
        param_4 = param_4 + iVar4 + (uint)bVar14;
        bVar14 = param_1 < uVar6;
        param_1 = param_1 - uVar6;
        param_2 = (param_2 - iVar4) - (uint)bVar14;
      }
      uVar6 = param_2 >> 0x14;
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        if ((uVar6 & 0x7ff) != 0) {
          return param_1;
        }
        if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
          return param_1;
        }
        goto LAB_080293e6;
      }
      param_2 = param_2 & ~(uVar6 << 0x14);
      if ((uVar6 & 0x7ff) == 0) {
        bVar14 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + param_4 + bVar14;
        goto LAB_080293e6;
      }
      uVar8 = param_4 & 0x7fffffff;
      uVar5 = (uVar6 - (param_4 >> 0x14)) - 1;
      goto LAB_080281ee;
    }
    bVar14 = param_3 <= param_1;
    uVar6 = param_1 - param_3;
    if (param_2 <= param_4 && (uint)bVar14 <= param_2 - param_4) {
      bVar15 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      uVar8 = (param_2 - param_4) - (uint)!bVar14 ^ 0x80000000;
      param_4 = param_4 + uVar8 + bVar15;
      bVar14 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = (param_2 - uVar8) - (uint)bVar14;
    }
    uVar6 = param_2 >> 0x14;
    if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        return param_1;
      }
      goto LAB_080293e6;
    }
    param_2 = param_2 & ~(uVar6 << 0x14);
    if ((uVar6 & 0x7ff) == 0) {
      bVar14 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = (param_2 - param_4) - (uint)bVar14;
      goto LAB_080293e6;
    }
    uVar5 = -param_3;
    uVar9 = (uVar6 - (param_4 >> 0x14)) - 1;
    uVar8 = -(param_4 & 0x7fffffff);
    if (param_3 != 0) {
      uVar8 = uVar8 - 1;
    }
LAB_08029254:
    if (uVar9 < 0x21) {
      uVar12 = uVar5 >> (uVar9 & 0xff);
      uVar3 = param_1 + uVar12;
      param_2 = param_2 + ((int)uVar8 >> (uVar9 & 0xff)) + (uint)CARRY4(param_1,uVar12);
      uVar13 = uVar8 << (0x20 - uVar9 & 0xff);
      uVar12 = uVar3 + uVar13;
      bVar14 = CARRY4(param_2,(uint)CARRY4(uVar3,uVar13));
      iVar4 = param_2 + CARRY4(uVar3,uVar13);
      uVar9 = 0x20 - uVar9;
joined_r0x08029318:
      if (iVar4 < 0) {
        param_3 = uVar9 + 1 & 0xff;
        bVar15 = param_3 == 0 && bVar14 || param_3 != 0 && (uVar5 << param_3 - 1 & 0x80000000) != 0;
        param_3 = uVar5 << param_3;
        uVar9 = uVar12 * 2;
        bVar14 = CARRY4(uVar12,uVar12);
        uVar12 = uVar12 * 2 + (uint)bVar15;
        uVar9 = iVar4 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar15));
        uVar3 = uVar9 + uVar6 * 0x200000;
        bVar14 = (uVar3 >> 0x14 & 1) != 0;
        if (!bVar14 || uVar3 >> 0x15 == 0) {
          if (bVar14) {
            param_2 = ((int)uVar9 >> 1) + uVar6 * 0x100000;
            param_1 = (uint)((uVar9 & 1) != 0) << 0x1f | uVar12 >> 1;
LAB_080293e6:
            if (param_2 << 1 == 0 && param_1 == 0) {
              return param_1;
            }
            if (param_2 << 1 < 0x200000) {
              uVar6 = FUN_080295ce();
              return uVar6;
            }
            return param_1;
          }
          iVar4 = uVar9 + 0x200000;
          if (iVar4 == 0) {
            uVar8 = uVar12 << LZCOUNT(uVar12);
            if (uVar8 == 0) {
              return uVar12;
            }
            iVar7 = ((uVar6 & 0xfffff7ff) - LZCOUNT(uVar12)) + -0x17;
            uVar3 = uVar8 << 0x15;
            uVar8 = uVar8 >> 0xb;
          }
          else {
            uVar5 = LZCOUNT(iVar4) - 0xb;
            iVar7 = ((uVar6 & 0xfffff7ff) - uVar5) + -2;
            uVar8 = iVar4 << (uVar5 & 0xff) | uVar12 >> (0x20 - uVar5 & 0xff);
            uVar3 = uVar12 << (uVar5 & 0xff);
          }
          if (-1 < iVar7) {
            return uVar3;
          }
          uVar9 = uVar8 + (uVar6 >> 0xb) * -0x80000000 + iVar7 * 0x100000 + 0x60000000;
          uVar6 = 0x12;
          if ((in_fpscr & 0x1000000) != 0) {
            return 0;
          }
          if ((in_fpscr & 0x800) != 0) {
            puVar11 = &UNK_20000092;
            goto LAB_08029cb0;
          }
          bVar14 = (int)uVar9 < 0;
          if (bVar14) {
            uVar6 = 0x10012;
          }
          uVar8 = uVar9 & ~((uVar9 >> 0x14) << 0x14);
          uVar5 = 0x601 - (uVar9 >> 0x14 & 0xfffff7ff);
          if ((int)uVar5 < 0) {
            uVar5 = 0xffffff01;
          }
          uVar12 = uVar8 | 0x100000;
          if (uVar5 < 0x36) {
            if (uVar5 == 0x35) {
              uVar5 = 0;
              uVar9 = 0;
              param_3 = 0x80000000;
              if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
                param_3 = 0x80000001;
              }
            }
            else if (uVar5 < 0x15) {
              param_3 = uVar3 << (0x20 - uVar5 & 0xff);
              uVar9 = uVar12 >> (uVar5 & 0xff);
              uVar5 = uVar12 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
            }
            else {
              uVar8 = uVar5 - 0x20;
              if (uVar5 < 0x20 || uVar8 == 0) {
                uVar5 = uVar12 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
                param_3 = uVar3 << (-uVar8 & 0xff);
                uVar9 = 0;
              }
              else {
                uVar5 = uVar12 >> (uVar8 & 0xff);
                param_3 = uVar12 << (0x20 - uVar8 & 0xff);
                if (uVar3 != 0) {
                  param_3 = param_3 | 1;
                }
                uVar9 = 0;
              }
            }
          }
          else {
            param_3 = 1;
            uVar9 = 0;
            uVar5 = 0;
          }
          if (bVar14) {
            uVar9 = uVar9 | 0x80000000;
          }
          if (param_3 == 0) {
            return uVar5;
          }
          if ((in_fpscr & 0xc00000) == 0) {
            uVar8 = param_3 & 0x80000000;
            param_3 = param_3 << 1;
            if (uVar8 != 0) {
              if (param_3 != 0) goto LAB_08029582;
              param_3 = 0;
              uVar9 = uVar9 + (0xfffffffe < uVar5);
              uVar5 = uVar5 + 1 & 0xfffffffe;
            }
          }
          else {
            if ((int)uVar9 < 0) {
              uVar8 = in_fpscr & 0x400000;
            }
            else {
              uVar8 = in_fpscr & 0x800000;
            }
            if (uVar8 == 0) {
LAB_08029582:
              bVar14 = 0xfffffffe < uVar5;
              uVar5 = uVar5 + 1;
              uVar9 = uVar9 + bVar14;
            }
          }
          uVar8 = in_fpscr | 8;
          uVar3 = uVar5;
          puVar10 = (undefined *)(uVar6 & 0xfffeffff | 0x40000000);
          in_fpscr = uVar8;
          goto LAB_08029610;
        }
        bVar14 = param_3 == 0;
        uVar9 = uVar9 + uVar6 * 0x100000;
      }
      else {
        param_3 = uVar5 << (uVar9 & 0xff);
        bVar14 = param_3 == 0;
        uVar9 = iVar4 + uVar6 * 0x100000;
      }
    }
    else {
      uVar5 = (uint)((uVar5 & 0x7fffffff) != 0) | (uVar8 * 2 + (uint)CARRY4(uVar5,uVar5)) * 2;
      uVar9 = uVar9 - 0x20;
      if (uVar9 < 0x1e) {
        uVar3 = (int)uVar8 >> (uVar9 & 0xff);
        uVar12 = param_1 + uVar3;
        bVar14 = param_2 != 0 || CARRY4(param_2 - 1,(uint)CARRY4(param_1,uVar3));
        iVar4 = (param_2 - 1) + (uint)CARRY4(param_1,uVar3);
        uVar9 = 0x1e - uVar9;
        goto joined_r0x08029318;
      }
      uVar12 = param_1 - 1;
      uVar9 = (param_2 + uVar6 * 0x100000) - (uint)(param_1 == 0);
      param_3 = 0xffffffff;
      bVar14 = false;
    }
    if (bVar14) {
      return uVar12;
    }
    uVar3 = uVar12;
    if ((in_fpscr & 0xc00000) == 0) {
      puVar10 = &UNK_40000012;
      if (((int)param_3 < 0) && (uVar3 = uVar12 + 1, uVar3 == 0 || param_3 == 0x80000000)) {
        if (uVar3 == 0) {
          uVar9 = uVar9 + 1;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
      }
    }
    else {
      if ((int)uVar9 < 0) {
        uVar6 = in_fpscr & 0x400000;
      }
      else {
        uVar6 = in_fpscr & 0x800000;
      }
      puVar10 = &UNK_40000012;
      if (uVar6 == 0) {
        uVar3 = uVar12 + 1;
        if (uVar3 == 0) {
          uVar9 = uVar9 + (0xfffffffe < uVar12);
        }
      }
    }
  }
  else {
    if (-1 < (int)(param_2 ^ param_4)) {
      bVar14 = param_3 <= param_1;
      uVar6 = param_1 - param_3;
      if (param_2 <= param_4 && (uint)bVar14 <= param_2 - param_4) {
        bVar15 = CARRY4(param_3,uVar6);
        param_3 = param_3 + uVar6;
        uVar8 = (param_2 - param_4) - (uint)!bVar14 ^ 0x80000000;
        param_4 = param_4 + uVar8 + bVar15;
        bVar14 = param_1 < uVar6;
        param_1 = param_1 - uVar6;
        param_2 = (param_2 - uVar8) - (uint)bVar14;
      }
      uVar5 = -param_3;
      uVar6 = param_2 >> 0x14;
      uVar9 = uVar6 - (param_4 >> 0x14);
      param_2 = param_2 & ~(uVar6 << 0x14);
      uVar8 = ((int)DAT_08029490 >> 2) - (param_4 & ~((int)DAT_08029490 >> 2));
      if (param_3 != 0) {
        uVar8 = uVar8 - 1;
      }
      goto LAB_08029254;
    }
    param_4 = param_4 ^ 0x80000000;
    uVar6 = param_1 - param_3;
    iVar4 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar14 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      param_4 = param_4 + iVar4 + (uint)bVar14;
      bVar14 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = (param_2 - iVar4) - (uint)bVar14;
    }
    uVar6 = param_2 >> 0x14;
    uVar5 = uVar6 - (param_4 >> 0x14);
    param_2 = param_2 & ~(uVar6 << 0x14);
    uVar8 = param_4 & ~((int)DAT_08029490 >> 1) | 0x100000;
LAB_080281ee:
    if (uVar5 < 0x21) {
      uVar12 = param_3 >> (uVar5 & 0xff);
      uVar9 = param_1 + uVar12;
      uVar13 = uVar8 << (0x20 - uVar5 & 0xff);
      uVar3 = uVar9 + uVar13;
      uVar9 = param_2 + (uVar8 >> (uVar5 & 0xff)) + (uint)CARRY4(param_1,uVar12) +
              (uint)CARRY4(uVar9,uVar13);
      uVar5 = 0x20 - uVar5;
      if (0xfffff < uVar9) goto LAB_080282c6;
      uVar9 = uVar9 + uVar6 * 0x100000;
LAB_08028222:
      param_3 = param_3 << (uVar5 & 0xff);
      if (param_3 == 0) {
        return uVar3;
      }
      if ((in_fpscr & 0xc00000) == 0) {
        puVar10 = &UNK_40000011;
        if (-1 < (int)param_3) goto LAB_08029610;
        bVar14 = uVar3 != 0xffffffff;
        uVar3 = uVar3 + 1;
        uVar6 = uVar3;
        if (bVar14) {
          param_3 = param_3 << 1;
          uVar6 = param_3;
        }
        if (uVar6 != 0) goto LAB_08029610;
LAB_08028254:
        if (uVar3 == 0) {
          uVar9 = uVar9 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
      }
      else {
        if ((int)uVar9 < 0) {
          uVar6 = in_fpscr & 0x400000;
        }
        else {
          uVar6 = in_fpscr & 0x800000;
        }
        puVar10 = &UNK_40000011;
        if ((uVar6 != 0) || (bVar14 = uVar3 != 0xffffffff, uVar3 = uVar3 + 1, bVar14))
        goto LAB_08029610;
        uVar9 = uVar9 + 1;
      }
LAB_08028260:
      puVar10 = &UNK_40000011;
      uVar8 = uVar9 << 1;
      if (0xffdfffff < uVar8) {
        puVar10 = &UNK_50000011;
        uVar9 = uVar9 + 0xa0000000;
      }
    }
    else {
      param_3 = uVar8 * 2 + (uint)(param_3 != 0);
      uVar9 = uVar5 - 0x20;
      uVar5 = 0x1f - uVar9;
      if (uVar9 < 0x20) {
        uVar8 = uVar8 >> (uVar9 & 0xff);
        uVar3 = param_1 + uVar8;
      }
      else {
        uVar5 = 0;
        uVar3 = param_1;
      }
      uVar9 = param_2 + uVar6 * 0x100000 + (uint)(uVar9 < 0x20 && CARRY4(param_1,uVar8));
      if (uVar6 == uVar9 >> 0x14) goto LAB_08028222;
      uVar9 = uVar9 + uVar6 * -0x100000;
LAB_080282c6:
      bVar1 = (byte)uVar3;
      uVar3 = (uint)((uVar9 + 0x100000 & 1) != 0) << 0x1f | uVar3 >> 1;
      param_3 = param_3 << (uVar5 & 0xff);
      uVar9 = (uVar9 + 0x100000 >> 1) + uVar6 * 0x100000;
      uVar6 = (uint)(bVar1 & 1);
      uVar8 = (param_3 | param_3 << 1) >> 1;
      param_3 = uVar6 << 0x1f | uVar8;
      if (param_3 != 0) {
        if ((in_fpscr & 0xc00000) == 0) {
          if (uVar6 != 0) {
            bVar14 = uVar3 != 0xffffffff;
            uVar3 = uVar3 + 1;
            uVar6 = uVar3;
            if (bVar14) {
              param_3 = uVar8 << 1;
              uVar6 = uVar8;
            }
            if (uVar6 == 0) goto LAB_08028254;
          }
        }
        else {
          if ((int)uVar9 < 0) {
            uVar6 = in_fpscr & 0x400000;
          }
          else {
            uVar6 = in_fpscr & 0x800000;
          }
          if ((uVar6 == 0) && (bVar14 = 0xfffffffe < uVar3, uVar3 = uVar3 + 1, bVar14)) {
            uVar9 = uVar9 + 1;
          }
        }
        goto LAB_08028260;
      }
      uVar8 = uVar9 * 2;
      if (uVar8 < 0xffe00000) {
        return uVar3;
      }
      uVar9 = uVar9 + 0xa0000000;
      puVar10 = DAT_080283e4;
    }
  }
LAB_08029610:
  uVar5 = param_3;
  if (((uint)puVar10 & 0x70) == 0) {
    uVar5 = uVar9;
  }
  if (((uint)puVar10 & 0x30000000 & ~(in_fpscr << 0x12)) != 0) {
    puVar10 = (undefined *)((uint)puVar10 | 0x40000000);
  }
  puVar11 = (undefined *)((uint)puVar10 | in_fpscr & 0x1c00000);
  uVar6 = (uint)puVar10 & 0xf;
  bVar14 = uVar6 == 10 || uVar6 == 8;
  if (uVar6 == 10 || uVar6 == 8) {
    bVar14 = (~(uint)puVar11 & 0x20000) == 0;
  }
  else {
    puVar11 = (undefined *)((uint)puVar11 | ((uint)puVar10 & 0x70) << 3);
  }
  if (bVar14) {
    puVar11 = (undefined *)((uint)puVar11 | 0xc00000);
  }
  if (((uint)puVar11 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return uVar3;
    }
    goto LAB_08029cb0;
  }
  if (((uint)puVar11 & 0x10000000) == 0) {
    if (((uint)puVar11 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return uVar3;
      }
      goto LAB_08029cb0;
    }
    if (((uint)puVar11 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if (((uint)puVar11 & 0x40) != 0) {
          uVar6 = uVar9;
          if (((uint)puVar11 & 0x80) == 0) {
            uVar6 = uVar3;
          }
          if (((uint)puVar11 & 0x10) == 0) {
            uVar6 = DAT_080297f8 | uVar6 & 0x80000000;
          }
          else {
            uVar9 = DAT_080297f4 | uVar6 & 0x80000000;
            uVar6 = DAT_080297f0;
          }
          uVar6 = FUN_08029adc(uVar6,uVar9);
          return uVar6;
        }
        if (((uint)puVar11 & 0xc000) == 0) {
          uVar8 = DAT_080297f0;
          uVar6 = DAT_080297f4;
          if (((uint)puVar11 & 0x10) == 0) {
            uVar8 = DAT_080297f8;
            uVar6 = uVar9;
          }
          uVar6 = FUN_08029adc(uVar8,uVar6);
          return uVar6;
        }
        bVar14 = ((uint)puVar11 & 0x8000) != 0;
        if (bVar14) {
          uVar3 = uVar5;
          uVar9 = uVar8;
        }
        if (bVar14) {
          puVar11 = (undefined *)((uint)puVar11 ^ ((uint)puVar11 & 0x100) >> 1);
        }
        if (((uint)puVar11 & 0x80) == 0) {
          uVar3 = uVar3 | 0x400000;
        }
        else {
          uVar9 = uVar9 | 0x80000;
        }
        uVar6 = FUN_08029adc(uVar3,uVar9);
        return uVar6;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if (((uint)puVar11 & 0x40) != 0) {
      return 0x80000001;
    }
    if (((uint)puVar11 & 0x10) == 0) {
      uVar5 = uVar5 ^ uVar3;
    }
    else {
      uVar5 = uVar9 ^ uVar8;
    }
    if (((uint)puVar11 & 0xf) == 10) {
      uVar5 = 0xffffffff;
    }
    in_fpscr = 0;
    puVar10 = puVar11;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    puVar10 = (undefined *)((uint)puVar11 & 0xefffffff);
    uVar5 = uVar9;
    if (((uint)puVar11 & 0x80) == 0) {
      uVar5 = uVar3;
    }
    uVar5 = uVar5 & 0x80000000;
    if (uVar5 == 0) {
      cVar2 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar2 = (char)((in_fpscr << 9) >> 0x18);
    }
    if (cVar2 < '\0') {
      if (((uint)puVar11 & 0x10) == 0) {
        uVar3 = DAT_080297ec | uVar5;
      }
      else {
        uVar9 = DAT_080297e8 | uVar5;
        uVar3 = DAT_080297e4;
      }
      puVar11 = puVar10;
      if ((in_fpscr & 0x1000) == 0) {
        return uVar3;
      }
      goto LAB_08029cb0;
    }
  }
  uVar5 = uVar5 & 0x80000000;
  if (((uint)puVar10 & 0x10) == 0) {
    uVar3 = DAT_080297e0 | uVar5;
  }
  else {
    uVar9 = DAT_080297dc | uVar5;
    uVar3 = DAT_080297d8;
  }
  puVar11 = puVar10;
  if ((in_fpscr & 0x1000) == 0) {
    return uVar3;
  }
LAB_08029cb0:
  uVar6 = FUN_08001d58(uVar3,uVar9,uVar5);
  if (((uint)puVar11 & 0xf) != 9) {
    return uVar6;
  }
  if (((uint)puVar11 & 0x100000) == 0) {
    return (uint)(((uint)puVar11 & uVar6 << 0x10) != 0);
  }
  if (((uint)puVar11 & 0x70000) == 0) {
    return uVar6 << 0x1d;
  }
  if ((uVar6 & 8) != 0) {
    return uVar6;
  }
  return 2 - uVar6;
}

