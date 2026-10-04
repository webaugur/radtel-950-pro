/**
 * @brief fun_08028fa0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028fa0, Ghidra name FUN_08028fa0, 74 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x080295b8) */
/* WARNING: Removing unreachable block (ram,0x08029cfe) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_08028fa0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  uint in_fpscr;
  
  if ((DAT_08028fec & (param_2 + 0x100000) * 2) == 0 ||
      (DAT_08028fec & (param_4 + 0x100000) * 2) == 0) {
    if (((DAT_08028fec | 0x200000) & ~(param_4 << 1)) == 0 ||
        ((DAT_08028fec | 0x200000) & ~(param_2 << 1)) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_08028c58();
    }
    if ((int)(param_4 ^ param_2) < 0) {
      param_2 = param_2 ^ 0x80000000;
      uVar7 = param_3 - param_1;
      iVar4 = (param_4 - param_2) - (uint)(param_1 > param_3);
      if (param_4 <= param_2 && (uint)(param_1 <= param_3) <= param_4 - param_2) {
        bVar15 = CARRY4(param_1,uVar7);
        param_1 = param_1 + uVar7;
        param_2 = param_2 + iVar4 + (uint)bVar15;
        bVar15 = param_3 < uVar7;
        param_3 = param_3 - uVar7;
        param_4 = (param_4 - iVar4) - (uint)bVar15;
      }
      uVar7 = param_4 >> 0x14;
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        if ((uVar7 & 0x7ff) != 0) {
          return param_3;
        }
        if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
          return param_3;
        }
        goto LAB_080293e6;
      }
      uVar3 = param_4 & ~(uVar7 << 0x14);
      if ((uVar7 & 0x7ff) == 0) {
        bVar15 = CARRY4(param_3,param_1);
        param_3 = param_3 + param_1;
        param_4 = uVar3 + param_2 + bVar15;
        goto LAB_080293e6;
      }
      uVar9 = param_2 & 0x7fffffff;
      uVar6 = (uVar7 - (param_2 >> 0x14)) - 1;
      goto LAB_080281ee;
    }
    bVar15 = param_1 <= param_3;
    uVar7 = param_3 - param_1;
    if (param_4 <= param_2 && (uint)bVar15 <= param_4 - param_2) {
      bVar16 = CARRY4(param_1,uVar7);
      param_1 = param_1 + uVar7;
      uVar3 = (param_4 - param_2) - (uint)!bVar15 ^ 0x80000000;
      param_2 = param_2 + uVar3 + bVar16;
      bVar15 = param_3 < uVar7;
      param_3 = param_3 - uVar7;
      param_4 = (param_4 - uVar3) - (uint)bVar15;
    }
    uVar7 = param_4 >> 0x14;
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        return param_3;
      }
      goto LAB_080293e6;
    }
    uVar3 = param_4 & ~(uVar7 << 0x14);
    if ((uVar7 & 0x7ff) == 0) {
      bVar15 = param_3 < param_1;
      param_3 = param_3 - param_1;
      param_4 = (uVar3 - param_2) - (uint)bVar15;
      goto LAB_080293e6;
    }
    uVar6 = -param_1;
    uVar10 = (uVar7 - (param_2 >> 0x14)) - 1;
    uVar9 = -(param_2 & 0x7fffffff);
    if (param_1 != 0) {
      uVar9 = uVar9 - 1;
    }
LAB_08029254:
    if (uVar10 < 0x21) {
      uVar13 = uVar6 >> (uVar10 & 0xff);
      uVar5 = param_3 + uVar13;
      uVar3 = uVar3 + ((int)uVar9 >> (uVar10 & 0xff)) + (uint)CARRY4(param_3,uVar13);
      uVar14 = uVar9 << (0x20 - uVar10 & 0xff);
      uVar13 = uVar5 + uVar14;
      bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar5,uVar14));
      iVar4 = uVar3 + CARRY4(uVar5,uVar14);
      uVar10 = 0x20 - uVar10;
joined_r0x08029318:
      if (iVar4 < 0) {
        param_1 = uVar10 + 1 & 0xff;
        bVar16 = param_1 == 0 && bVar15 || param_1 != 0 && (uVar6 << param_1 - 1 & 0x80000000) != 0;
        param_1 = uVar6 << param_1;
        uVar3 = uVar13 * 2;
        bVar15 = CARRY4(uVar13,uVar13);
        uVar13 = uVar13 * 2 + (uint)bVar16;
        uVar3 = iVar4 * 2 + (uint)(bVar15 || CARRY4(uVar3,(uint)bVar16));
        uVar10 = uVar3 + uVar7 * 0x200000;
        bVar15 = (uVar10 >> 0x14 & 1) != 0;
        if (!bVar15 || uVar10 >> 0x15 == 0) {
          if (bVar15) {
            param_4 = ((int)uVar3 >> 1) + uVar7 * 0x100000;
            param_3 = (uint)((uVar3 & 1) != 0) << 0x1f | uVar13 >> 1;
LAB_080293e6:
            if (param_4 << 1 == 0 && param_3 == 0) {
              return param_3;
            }
            if (param_4 << 1 < 0x200000) {
              uVar7 = FUN_080295ce();
              return uVar7;
            }
            return param_3;
          }
          iVar4 = uVar3 + 0x200000;
          if (iVar4 == 0) {
            uVar3 = uVar13 << LZCOUNT(uVar13);
            if (uVar3 == 0) {
              return uVar13;
            }
            iVar8 = ((uVar7 & 0xfffff7ff) - LZCOUNT(uVar13)) + -0x17;
            uVar5 = uVar3 << 0x15;
            uVar3 = uVar3 >> 0xb;
          }
          else {
            uVar6 = LZCOUNT(iVar4) - 0xb;
            iVar8 = ((uVar7 & 0xfffff7ff) - uVar6) + -2;
            uVar3 = iVar4 << (uVar6 & 0xff) | uVar13 >> (0x20 - uVar6 & 0xff);
            uVar5 = uVar13 << (uVar6 & 0xff);
          }
          if (-1 < iVar8) {
            return uVar5;
          }
          uVar3 = uVar3 + (uVar7 >> 0xb) * -0x80000000 + iVar8 * 0x100000 + 0x60000000;
          uVar7 = 0x12;
          if ((in_fpscr & 0x1000000) != 0) {
            return 0;
          }
          if ((in_fpscr & 0x800) != 0) {
            puVar12 = &UNK_20000092;
            goto LAB_08029cb0;
          }
          bVar15 = (int)uVar3 < 0;
          if (bVar15) {
            uVar7 = 0x10012;
          }
          uVar9 = uVar3 & ~((uVar3 >> 0x14) << 0x14);
          uVar6 = 0x601 - (uVar3 >> 0x14 & 0xfffff7ff);
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffff01;
          }
          uVar10 = uVar9 | 0x100000;
          if (uVar6 < 0x36) {
            if (uVar6 == 0x35) {
              uVar6 = 0;
              uVar3 = 0;
              param_1 = 0x80000000;
              if (uVar5 != 0 || (uVar9 & 0xfffff) != 0) {
                param_1 = 0x80000001;
              }
            }
            else if (uVar6 < 0x15) {
              param_1 = uVar5 << (0x20 - uVar6 & 0xff);
              uVar3 = uVar10 >> (uVar6 & 0xff);
              uVar6 = uVar10 << (0x20 - uVar6 & 0xff) | uVar5 >> (uVar6 & 0xff);
            }
            else {
              uVar3 = uVar6 - 0x20;
              if (uVar6 < 0x20 || uVar3 == 0) {
                uVar6 = uVar10 << (-uVar3 & 0xff) | uVar5 >> (uVar6 & 0xff);
                param_1 = uVar5 << (-uVar3 & 0xff);
                uVar3 = 0;
              }
              else {
                uVar6 = uVar10 >> (uVar3 & 0xff);
                param_1 = uVar10 << (0x20 - uVar3 & 0xff);
                if (uVar5 != 0) {
                  param_1 = param_1 | 1;
                }
                uVar3 = 0;
              }
            }
          }
          else {
            param_1 = 1;
            uVar3 = 0;
            uVar6 = 0;
          }
          if (bVar15) {
            uVar3 = uVar3 | 0x80000000;
          }
          if (param_1 == 0) {
            return uVar6;
          }
          if ((in_fpscr & 0xc00000) == 0) {
            uVar9 = param_1 & 0x80000000;
            param_1 = param_1 << 1;
            if (uVar9 != 0) {
              if (param_1 != 0) goto LAB_08029582;
              param_1 = 0;
              uVar3 = uVar3 + (0xfffffffe < uVar6);
              uVar6 = uVar6 + 1 & 0xfffffffe;
            }
          }
          else {
            if ((int)uVar3 < 0) {
              uVar9 = in_fpscr & 0x400000;
            }
            else {
              uVar9 = in_fpscr & 0x800000;
            }
            if (uVar9 == 0) {
LAB_08029582:
              bVar15 = 0xfffffffe < uVar6;
              uVar6 = uVar6 + 1;
              uVar3 = uVar3 + bVar15;
            }
          }
          uVar9 = in_fpscr | 8;
          uVar5 = uVar6;
          puVar11 = (undefined *)(uVar7 & 0xfffeffff | 0x40000000);
          in_fpscr = uVar9;
          goto LAB_08029610;
        }
        bVar15 = param_1 == 0;
        uVar3 = uVar3 + uVar7 * 0x100000;
      }
      else {
        param_1 = uVar6 << (uVar10 & 0xff);
        bVar15 = param_1 == 0;
        uVar3 = iVar4 + uVar7 * 0x100000;
      }
    }
    else {
      uVar6 = (uint)((uVar6 & 0x7fffffff) != 0) | (uVar9 * 2 + (uint)CARRY4(uVar6,uVar6)) * 2;
      uVar10 = uVar10 - 0x20;
      if (uVar10 < 0x1e) {
        uVar5 = (int)uVar9 >> (uVar10 & 0xff);
        uVar13 = param_3 + uVar5;
        bVar15 = uVar3 != 0 || CARRY4(uVar3 - 1,(uint)CARRY4(param_3,uVar5));
        iVar4 = (uVar3 - 1) + (uint)CARRY4(param_3,uVar5);
        uVar10 = 0x1e - uVar10;
        goto joined_r0x08029318;
      }
      uVar13 = param_3 - 1;
      uVar3 = (uVar3 + uVar7 * 0x100000) - (uint)(param_3 == 0);
      param_1 = 0xffffffff;
      bVar15 = false;
    }
    if (bVar15) {
      return uVar13;
    }
    uVar5 = uVar13;
    if ((in_fpscr & 0xc00000) == 0) {
      puVar11 = &UNK_40000012;
      if (((int)param_1 < 0) && (uVar5 = uVar13 + 1, uVar5 == 0 || param_1 == 0x80000000)) {
        if (uVar5 == 0) {
          uVar3 = uVar3 + 1;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
      }
    }
    else {
      if ((int)uVar3 < 0) {
        uVar7 = in_fpscr & 0x400000;
      }
      else {
        uVar7 = in_fpscr & 0x800000;
      }
      puVar11 = &UNK_40000012;
      if (uVar7 == 0) {
        uVar5 = uVar13 + 1;
        if (uVar5 == 0) {
          uVar3 = uVar3 + (0xfffffffe < uVar13);
        }
      }
    }
  }
  else {
    uVar3 = param_2 ^ 0x80000000;
    if (-1 < (int)(param_2 ^ param_4)) {
      param_4 = param_4 ^ 0x80000000;
      uVar7 = param_1 - param_3;
      uVar5 = param_3;
      if (uVar3 <= param_4 && (uint)(param_3 <= param_1) <= uVar3 - param_4) {
        uVar5 = param_3 + uVar7;
        uVar9 = (uVar3 - param_4) - (uint)(param_3 > param_1) ^ 0x80000000;
        param_4 = param_4 + uVar9 + CARRY4(param_3,uVar7);
        uVar3 = (uVar3 - uVar9) - (uint)(param_1 < uVar7);
        param_1 = param_1 - uVar7;
      }
      param_3 = param_1;
      uVar6 = -uVar5;
      uVar7 = uVar3 >> 0x14;
      uVar10 = uVar7 - (param_4 >> 0x14);
      uVar3 = uVar3 & ~(uVar7 << 0x14);
      uVar9 = ((int)DAT_08028fec >> 2) - (param_4 & ~((int)DAT_08028fec >> 2));
      if (uVar5 != 0) {
        uVar9 = uVar9 - 1;
      }
      goto LAB_08029254;
    }
    uVar9 = param_1 - param_3;
    iVar4 = (uVar3 - param_4) - (uint)(param_3 > param_1);
    uVar7 = param_1;
    if (uVar3 <= param_4 && (uint)(param_3 <= param_1) <= uVar3 - param_4) {
      param_4 = param_4 + iVar4 + (uint)CARRY4(param_3,uVar9);
      uVar3 = (uVar3 - iVar4) - (uint)(param_1 < uVar9);
      uVar7 = param_1 - uVar9;
      param_3 = param_3 + uVar9;
    }
    param_1 = param_3;
    param_3 = uVar7;
    uVar7 = uVar3 >> 0x14;
    uVar6 = uVar7 - (param_4 >> 0x14);
    uVar3 = uVar3 & ~(uVar7 << 0x14);
    uVar9 = param_4 & ~((int)DAT_08028fec >> 1) | 0x100000;
LAB_080281ee:
    if (uVar6 < 0x21) {
      uVar13 = param_1 >> (uVar6 & 0xff);
      uVar10 = param_3 + uVar13;
      uVar14 = uVar9 << (0x20 - uVar6 & 0xff);
      uVar5 = uVar10 + uVar14;
      uVar3 = uVar3 + (uVar9 >> (uVar6 & 0xff)) + (uint)CARRY4(param_3,uVar13) +
              (uint)CARRY4(uVar10,uVar14);
      uVar6 = 0x20 - uVar6;
      if (0xfffff < uVar3) goto LAB_080282c6;
      uVar3 = uVar3 + uVar7 * 0x100000;
LAB_08028222:
      param_1 = param_1 << (uVar6 & 0xff);
      if (param_1 == 0) {
        return uVar5;
      }
      if ((in_fpscr & 0xc00000) == 0) {
        puVar11 = &UNK_40000011;
        if (-1 < (int)param_1) goto LAB_08029610;
        bVar15 = uVar5 != 0xffffffff;
        uVar5 = uVar5 + 1;
        uVar7 = uVar5;
        if (bVar15) {
          param_1 = param_1 << 1;
          uVar7 = param_1;
        }
        if (uVar7 != 0) goto LAB_08029610;
LAB_08028254:
        if (uVar5 == 0) {
          uVar3 = uVar3 + 1;
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
      }
      else {
        if ((int)uVar3 < 0) {
          uVar7 = in_fpscr & 0x400000;
        }
        else {
          uVar7 = in_fpscr & 0x800000;
        }
        puVar11 = &UNK_40000011;
        if ((uVar7 != 0) || (bVar15 = uVar5 != 0xffffffff, uVar5 = uVar5 + 1, bVar15))
        goto LAB_08029610;
        uVar3 = uVar3 + 1;
      }
LAB_08028260:
      puVar11 = &UNK_40000011;
      uVar9 = uVar3 << 1;
      if (0xffdfffff < uVar9) {
        puVar11 = &UNK_50000011;
        uVar3 = uVar3 + 0xa0000000;
      }
    }
    else {
      param_1 = uVar9 * 2 + (uint)(param_1 != 0);
      uVar10 = uVar6 - 0x20;
      uVar6 = 0x1f - uVar10;
      if (uVar10 < 0x20) {
        uVar9 = uVar9 >> (uVar10 & 0xff);
        uVar5 = param_3 + uVar9;
      }
      else {
        uVar6 = 0;
        uVar5 = param_3;
      }
      uVar3 = uVar3 + uVar7 * 0x100000 + (uint)(uVar10 < 0x20 && CARRY4(param_3,uVar9));
      if (uVar7 == uVar3 >> 0x14) goto LAB_08028222;
      uVar3 = uVar3 + uVar7 * -0x100000;
LAB_080282c6:
      bVar1 = (byte)uVar5;
      uVar5 = (uint)((uVar3 + 0x100000 & 1) != 0) << 0x1f | uVar5 >> 1;
      param_1 = param_1 << (uVar6 & 0xff);
      uVar3 = (uVar3 + 0x100000 >> 1) + uVar7 * 0x100000;
      uVar7 = (uint)(bVar1 & 1);
      uVar9 = (param_1 | param_1 << 1) >> 1;
      param_1 = uVar7 << 0x1f | uVar9;
      if (param_1 != 0) {
        if ((in_fpscr & 0xc00000) == 0) {
          if (uVar7 != 0) {
            bVar15 = uVar5 != 0xffffffff;
            uVar5 = uVar5 + 1;
            uVar7 = uVar5;
            if (bVar15) {
              param_1 = uVar9 << 1;
              uVar7 = uVar9;
            }
            if (uVar7 == 0) goto LAB_08028254;
          }
        }
        else {
          if ((int)uVar3 < 0) {
            uVar7 = in_fpscr & 0x400000;
          }
          else {
            uVar7 = in_fpscr & 0x800000;
          }
          if ((uVar7 == 0) && (bVar15 = 0xfffffffe < uVar5, uVar5 = uVar5 + 1, bVar15)) {
            uVar3 = uVar3 + 1;
          }
        }
        goto LAB_08028260;
      }
      uVar9 = uVar3 * 2;
      if (uVar9 < 0xffe00000) {
        return uVar5;
      }
      uVar3 = uVar3 + 0xa0000000;
      puVar11 = DAT_080283e4;
    }
  }
LAB_08029610:
  uVar6 = param_1;
  if (((uint)puVar11 & 0x70) == 0) {
    uVar6 = uVar3;
  }
  if (((uint)puVar11 & 0x30000000 & ~(in_fpscr << 0x12)) != 0) {
    puVar11 = (undefined *)((uint)puVar11 | 0x40000000);
  }
  puVar12 = (undefined *)((uint)puVar11 | in_fpscr & 0x1c00000);
  uVar7 = (uint)puVar11 & 0xf;
  bVar15 = uVar7 == 10 || uVar7 == 8;
  if (uVar7 == 10 || uVar7 == 8) {
    bVar15 = (~(uint)puVar12 & 0x20000) == 0;
  }
  else {
    puVar12 = (undefined *)((uint)puVar12 | ((uint)puVar11 & 0x70) << 3);
  }
  if (bVar15) {
    puVar12 = (undefined *)((uint)puVar12 | 0xc00000);
  }
  if (((uint)puVar12 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return uVar5;
    }
    goto LAB_08029cb0;
  }
  if (((uint)puVar12 & 0x10000000) == 0) {
    if (((uint)puVar12 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return uVar5;
      }
      goto LAB_08029cb0;
    }
    if (((uint)puVar12 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if (((uint)puVar12 & 0x40) != 0) {
          uVar7 = uVar3;
          if (((uint)puVar12 & 0x80) == 0) {
            uVar7 = uVar5;
          }
          if (((uint)puVar12 & 0x10) == 0) {
            uVar7 = DAT_080297f8 | uVar7 & 0x80000000;
          }
          else {
            uVar3 = DAT_080297f4 | uVar7 & 0x80000000;
            uVar7 = DAT_080297f0;
          }
          uVar7 = FUN_08029adc(uVar7,uVar3);
          return uVar7;
        }
        if (((uint)puVar12 & 0xc000) == 0) {
          uVar9 = DAT_080297f0;
          uVar7 = DAT_080297f4;
          if (((uint)puVar12 & 0x10) == 0) {
            uVar9 = DAT_080297f8;
            uVar7 = uVar3;
          }
          uVar7 = FUN_08029adc(uVar9,uVar7);
          return uVar7;
        }
        bVar15 = ((uint)puVar12 & 0x8000) != 0;
        if (bVar15) {
          uVar5 = uVar6;
          uVar3 = uVar9;
        }
        if (bVar15) {
          puVar12 = (undefined *)((uint)puVar12 ^ ((uint)puVar12 & 0x100) >> 1);
        }
        if (((uint)puVar12 & 0x80) == 0) {
          uVar5 = uVar5 | 0x400000;
        }
        else {
          uVar3 = uVar3 | 0x80000;
        }
        uVar7 = FUN_08029adc(uVar5,uVar3);
        return uVar7;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if (((uint)puVar12 & 0x40) != 0) {
      return 0x80000001;
    }
    if (((uint)puVar12 & 0x10) == 0) {
      uVar6 = uVar6 ^ uVar5;
    }
    else {
      uVar6 = uVar3 ^ uVar9;
    }
    if (((uint)puVar12 & 0xf) == 10) {
      uVar6 = 0xffffffff;
    }
    in_fpscr = 0;
    puVar11 = puVar12;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    puVar11 = (undefined *)((uint)puVar12 & 0xefffffff);
    uVar6 = uVar3;
    if (((uint)puVar12 & 0x80) == 0) {
      uVar6 = uVar5;
    }
    uVar6 = uVar6 & 0x80000000;
    if (uVar6 == 0) {
      cVar2 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar2 = (char)((in_fpscr << 9) >> 0x18);
    }
    if (cVar2 < '\0') {
      if (((uint)puVar12 & 0x10) == 0) {
        uVar5 = DAT_080297ec | uVar6;
      }
      else {
        uVar3 = DAT_080297e8 | uVar6;
        uVar5 = DAT_080297e4;
      }
      puVar12 = puVar11;
      if ((in_fpscr & 0x1000) == 0) {
        return uVar5;
      }
      goto LAB_08029cb0;
    }
  }
  uVar6 = uVar6 & 0x80000000;
  if (((uint)puVar11 & 0x10) == 0) {
    uVar5 = DAT_080297e0 | uVar6;
  }
  else {
    uVar3 = DAT_080297dc | uVar6;
    uVar5 = DAT_080297d8;
  }
  puVar12 = puVar11;
  if ((in_fpscr & 0x1000) == 0) {
    return uVar5;
  }
LAB_08029cb0:
  uVar7 = FUN_08001d58(uVar5,uVar3,uVar6);
  if (((uint)puVar12 & 0xf) != 9) {
    return uVar7;
  }
  if (((uint)puVar12 & 0x100000) == 0) {
    return (uint)(((uint)puVar12 & uVar7 << 0x10) != 0);
  }
  if (((uint)puVar12 & 0x70000) == 0) {
    return uVar7 << 0x1d;
  }
  if ((uVar7 & 8) != 0) {
    return uVar7;
  }
  return 2 - uVar7;
}

