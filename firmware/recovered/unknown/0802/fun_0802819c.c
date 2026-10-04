/**
 * @brief fun_0802819c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802819c, Ghidra name FUN_0802819c, 570 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x080295b8) */
/* WARNING: Removing unreachable block (ram,0x08029cfe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0802819c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  
  if ((_BYTE_ARRAY_080283e0 & (param_2 + 0x100000) * 2) == 0 ||
      (_BYTE_ARRAY_080283e0 & (param_4 + 0x100000) * 2) == 0) {
    if (((_BYTE_ARRAY_080283e0 | 0x200000) & ~(param_2 << 1)) == 0 ||
        ((_BYTE_ARRAY_080283e0 | 0x200000) & ~(param_4 << 1)) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_08028c58();
    }
    if ((int)(param_2 ^ param_4) < 0) {
      param_4 = param_4 ^ 0x80000000;
      bVar13 = param_3 <= param_1;
      uVar5 = param_1 - param_3;
      if (param_2 <= param_4 && (uint)bVar13 <= param_2 - param_4) {
        bVar14 = CARRY4(param_3,uVar5);
        param_3 = param_3 + uVar5;
        uVar8 = (param_2 - param_4) - (uint)!bVar13 ^ 0x80000000;
        param_4 = param_4 + uVar8 + bVar14;
        bVar13 = param_1 < uVar5;
        param_1 = param_1 - uVar5;
        param_2 = (param_2 - uVar8) - (uint)bVar13;
      }
      uVar5 = param_2 >> 0x14;
      if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
        if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
          return param_1;
        }
        goto LAB_080293e6;
      }
      param_2 = param_2 & ~(uVar5 << 0x14);
      if ((uVar5 & 0x7ff) == 0) {
        bVar13 = param_1 < param_3;
        param_1 = param_1 - param_3;
        param_2 = (param_2 - param_4) - (uint)bVar13;
        goto LAB_080293e6;
      }
      uVar8 = -param_3;
      uVar2 = (uVar5 - (param_4 >> 0x14)) - 1;
      uVar4 = -(param_4 & 0x7fffffff);
      if (param_3 != 0) {
        uVar4 = uVar4 - 1;
      }
      goto LAB_08029254;
    }
    uVar5 = param_1 - param_3;
    iVar7 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar13 = CARRY4(param_3,uVar5);
      param_3 = param_3 + uVar5;
      param_4 = param_4 + iVar7 + (uint)bVar13;
      bVar13 = param_1 < uVar5;
      param_1 = param_1 - uVar5;
      param_2 = (param_2 - iVar7) - (uint)bVar13;
    }
    uVar5 = param_2 >> 0x14;
    if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
      if ((uVar5 & 0x7ff) != 0) {
        return param_1;
      }
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        return param_1;
      }
      goto LAB_080293e6;
    }
    param_2 = param_2 & ~(uVar5 << 0x14);
    if ((uVar5 & 0x7ff) == 0) {
      bVar13 = CARRY4(param_1,param_3);
      param_1 = param_1 + param_3;
      param_2 = param_2 + param_4 + bVar13;
      goto LAB_080293e6;
    }
    uVar4 = param_4 & 0x7fffffff;
    uVar8 = (uVar5 - (param_4 >> 0x14)) - 1;
LAB_080281ee:
    if (uVar8 < 0x21) {
      uVar11 = param_3 >> (uVar8 & 0xff);
      uVar2 = param_1 + uVar11;
      uVar12 = uVar4 << (0x20 - uVar8 & 0xff);
      uVar3 = uVar2 + uVar12;
      param_2 = param_2 + (uVar4 >> (uVar8 & 0xff)) + (uint)CARRY4(param_1,uVar11) +
                (uint)CARRY4(uVar2,uVar12);
      uVar8 = 0x20 - uVar8;
      if (param_2 < 0x100000) {
        param_2 = param_2 + uVar5 * 0x100000;
        goto LAB_08028222;
      }
LAB_080282c6:
      uVar2 = (uint)((param_2 + 0x100000 & 1) != 0) << 0x1f | uVar3 >> 1;
      param_3 = param_3 << (uVar8 & 0xff);
      param_2 = (param_2 + 0x100000 >> 1) + uVar5 * 0x100000;
      uVar5 = (uint)((byte)uVar3 & 1);
      uVar8 = (param_3 | param_3 << 1) >> 1;
      param_3 = uVar5 << 0x1f | uVar8;
      if (param_3 == 0) {
        uVar4 = param_2 * 2;
        if (uVar4 < 0xffe00000) {
          return uVar2;
        }
        param_2 = param_2 + 0xa0000000;
        puVar9 = DAT_080283e4;
        goto LAB_08029610;
      }
      if ((in_fpscr & 0xc00000) == 0) {
        if (uVar5 == 0) goto LAB_08028260;
        bVar13 = uVar2 != 0xffffffff;
        uVar2 = uVar2 + 1;
        uVar5 = uVar2;
        if (bVar13) {
          param_3 = uVar8 << 1;
          uVar5 = uVar8;
        }
        if (uVar5 != 0) goto LAB_08028260;
        goto LAB_08028254;
      }
      if ((int)param_2 < 0) {
        uVar5 = in_fpscr & 0x400000;
      }
      else {
        uVar5 = in_fpscr & 0x800000;
      }
      if ((uVar5 == 0) && (bVar13 = 0xfffffffe < uVar2, uVar2 = uVar2 + 1, bVar13)) {
        param_2 = param_2 + 1;
      }
LAB_08028260:
      puVar9 = &UNK_40000011;
      uVar4 = param_2 << 1;
      if (0xffdfffff < uVar4) {
        puVar9 = &UNK_50000011;
        param_2 = param_2 + 0xa0000000;
      }
    }
    else {
      param_3 = uVar4 * 2 + (uint)(param_3 != 0);
      uVar2 = uVar8 - 0x20;
      uVar8 = 0x1f - uVar2;
      if (uVar2 < 0x20) {
        uVar4 = uVar4 >> (uVar2 & 0xff);
        uVar3 = param_1 + uVar4;
      }
      else {
        uVar8 = 0;
        uVar3 = param_1;
      }
      param_2 = param_2 + uVar5 * 0x100000 + (uint)(uVar2 < 0x20 && CARRY4(param_1,uVar4));
      if (uVar5 != param_2 >> 0x14) {
        param_2 = param_2 + uVar5 * -0x100000;
        goto LAB_080282c6;
      }
LAB_08028222:
      param_3 = param_3 << (uVar8 & 0xff);
      if (param_3 == 0) {
        return uVar3;
      }
      uVar2 = uVar3;
      if ((in_fpscr & 0xc00000) == 0) {
        puVar9 = &UNK_40000011;
        if ((int)param_3 < 0) {
          uVar2 = uVar3 + 1;
          uVar5 = uVar2;
          if (uVar3 != 0xffffffff) {
            param_3 = param_3 << 1;
            uVar5 = param_3;
          }
          if (uVar5 == 0) {
LAB_08028254:
            if (uVar2 == 0) {
              param_2 = param_2 + 1;
              uVar2 = 0;
            }
            else {
              uVar2 = uVar2 & 0xfffffffe;
            }
            goto LAB_08028260;
          }
        }
      }
      else {
        if ((int)param_2 < 0) {
          uVar5 = in_fpscr & 0x400000;
        }
        else {
          uVar5 = in_fpscr & 0x800000;
        }
        puVar9 = &UNK_40000011;
        if ((uVar5 == 0) && (uVar2 = uVar3 + 1, uVar3 == 0xffffffff)) {
          param_2 = param_2 + 1;
          goto LAB_08028260;
        }
      }
    }
  }
  else {
    if (-1 < (int)(param_2 ^ param_4)) {
      uVar5 = param_1 - param_3;
      iVar7 = (param_2 - param_4) - (uint)(param_3 > param_1);
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        bVar13 = CARRY4(param_3,uVar5);
        param_3 = param_3 + uVar5;
        param_4 = param_4 + iVar7 + (uint)bVar13;
        bVar13 = param_1 < uVar5;
        param_1 = param_1 - uVar5;
        param_2 = (param_2 - iVar7) - (uint)bVar13;
      }
      uVar5 = param_2 >> 0x14;
      uVar8 = uVar5 - (param_4 >> 0x14);
      param_2 = param_2 & ~(uVar5 << 0x14);
      uVar4 = param_4 & ~((int)_BYTE_ARRAY_080283e0 >> 1) | 0x100000;
      goto LAB_080281ee;
    }
    param_4 = param_4 ^ 0x80000000;
    bVar13 = param_3 <= param_1;
    uVar5 = param_1 - param_3;
    if (param_2 <= param_4 && (uint)bVar13 <= param_2 - param_4) {
      bVar14 = CARRY4(param_3,uVar5);
      param_3 = param_3 + uVar5;
      uVar8 = (param_2 - param_4) - (uint)!bVar13 ^ 0x80000000;
      param_4 = param_4 + uVar8 + bVar14;
      bVar13 = param_1 < uVar5;
      param_1 = param_1 - uVar5;
      param_2 = (param_2 - uVar8) - (uint)bVar13;
    }
    uVar8 = -param_3;
    uVar5 = param_2 >> 0x14;
    uVar2 = uVar5 - (param_4 >> 0x14);
    param_2 = param_2 & ~(uVar5 << 0x14);
    uVar4 = ((int)_BYTE_ARRAY_080283e0 >> 2) - (param_4 & ~((int)_BYTE_ARRAY_080283e0 >> 2));
    if (param_3 != 0) {
      uVar4 = uVar4 - 1;
    }
LAB_08029254:
    if (uVar2 < 0x21) {
      uVar3 = uVar8 >> (uVar2 & 0xff);
      uVar11 = param_1 + uVar3;
      param_2 = param_2 + ((int)uVar4 >> (uVar2 & 0xff)) + (uint)CARRY4(param_1,uVar3);
      uVar12 = uVar4 << (0x20 - uVar2 & 0xff);
      uVar3 = uVar11 + uVar12;
      bVar13 = CARRY4(param_2,(uint)CARRY4(uVar11,uVar12));
      iVar7 = param_2 + CARRY4(uVar11,uVar12);
      uVar2 = 0x20 - uVar2;
joined_r0x08029318:
      if (-1 < iVar7) {
        param_3 = uVar8 << (uVar2 & 0xff);
        bVar13 = param_3 == 0;
        param_2 = iVar7 + uVar5 * 0x100000;
        goto LAB_0802928c;
      }
      param_3 = uVar2 + 1 & 0xff;
      bVar14 = param_3 == 0 && bVar13 || param_3 != 0 && (uVar8 << param_3 - 1 & 0x80000000) != 0;
      param_3 = uVar8 << param_3;
      uVar2 = uVar3 * 2;
      bVar13 = CARRY4(uVar3,uVar3);
      uVar3 = uVar3 * 2 + (uint)bVar14;
      uVar2 = iVar7 * 2 + (uint)(bVar13 || CARRY4(uVar2,(uint)bVar14));
      uVar11 = uVar2 + uVar5 * 0x200000;
      bVar13 = (uVar11 >> 0x14 & 1) != 0;
      if (bVar13 && uVar11 >> 0x15 != 0) {
        bVar13 = param_3 == 0;
        param_2 = uVar2 + uVar5 * 0x100000;
        goto LAB_0802928c;
      }
      if (bVar13) {
        param_2 = ((int)uVar2 >> 1) + uVar5 * 0x100000;
        param_1 = (uint)((uVar2 & 1) != 0) << 0x1f | uVar3 >> 1;
LAB_080293e6:
        if (param_2 << 1 == 0 && param_1 == 0) {
          return param_1;
        }
        if (0x1fffff < param_2 << 1) {
          return param_1;
        }
        uVar5 = FUN_080295ce();
        return uVar5;
      }
      iVar7 = uVar2 + 0x200000;
      if (iVar7 == 0) {
        uVar4 = uVar3 << LZCOUNT(uVar3);
        if (uVar4 == 0) {
          return uVar3;
        }
        iVar6 = ((uVar5 & 0xfffff7ff) - LZCOUNT(uVar3)) + -0x17;
        uVar2 = uVar4 << 0x15;
        uVar4 = uVar4 >> 0xb;
      }
      else {
        uVar8 = LZCOUNT(iVar7) - 0xb;
        iVar6 = ((uVar5 & 0xfffff7ff) - uVar8) + -2;
        uVar4 = iVar7 << (uVar8 & 0xff) | uVar3 >> (0x20 - uVar8 & 0xff);
        uVar2 = uVar3 << (uVar8 & 0xff);
      }
      if (-1 < iVar6) {
        return uVar2;
      }
      param_2 = uVar4 + (uVar5 >> 0xb) * -0x80000000 + iVar6 * 0x100000 + 0x60000000;
      uVar5 = 0x12;
      if ((in_fpscr & 0x1000000) != 0) {
        return 0;
      }
      if ((in_fpscr & 0x800) != 0) {
        puVar10 = &UNK_20000092;
        goto LAB_08029cb0;
      }
      bVar13 = (int)param_2 < 0;
      if (bVar13) {
        uVar5 = 0x10012;
      }
      uVar8 = param_2 & ~((param_2 >> 0x14) << 0x14);
      uVar4 = 0x601 - (param_2 >> 0x14 & 0xfffff7ff);
      if ((int)uVar4 < 0) {
        uVar4 = 0xffffff01;
      }
      uVar3 = uVar8 | 0x100000;
      if (uVar4 < 0x36) {
        if (uVar4 == 0x35) {
          uVar11 = 0;
          param_2 = 0;
          param_3 = 0x80000000;
          if (uVar2 != 0 || (uVar8 & 0xfffff) != 0) {
            param_3 = 0x80000001;
          }
        }
        else if (uVar4 < 0x15) {
          param_3 = uVar2 << (0x20 - uVar4 & 0xff);
          param_2 = uVar3 >> (uVar4 & 0xff);
          uVar11 = uVar3 << (0x20 - uVar4 & 0xff) | uVar2 >> (uVar4 & 0xff);
        }
        else {
          uVar8 = uVar4 - 0x20;
          if (uVar4 < 0x20 || uVar8 == 0) {
            uVar11 = uVar3 << (-uVar8 & 0xff) | uVar2 >> (uVar4 & 0xff);
            param_3 = uVar2 << (-uVar8 & 0xff);
            param_2 = 0;
          }
          else {
            uVar11 = uVar3 >> (uVar8 & 0xff);
            param_3 = uVar3 << (0x20 - uVar8 & 0xff);
            if (uVar2 != 0) {
              param_3 = param_3 | 1;
            }
            param_2 = 0;
          }
        }
      }
      else {
        param_3 = 1;
        param_2 = 0;
        uVar11 = 0;
      }
      if (bVar13) {
        param_2 = param_2 | 0x80000000;
      }
      if (param_3 == 0) {
        return uVar11;
      }
      if ((in_fpscr & 0xc00000) == 0) {
        uVar8 = param_3 & 0x80000000;
        param_3 = param_3 << 1;
        if (uVar8 != 0) {
          if (param_3 != 0) goto LAB_08029582;
          param_3 = 0;
          param_2 = param_2 + (0xfffffffe < uVar11);
          uVar11 = uVar11 + 1 & 0xfffffffe;
        }
      }
      else {
        if ((int)param_2 < 0) {
          uVar8 = in_fpscr & 0x400000;
        }
        else {
          uVar8 = in_fpscr & 0x800000;
        }
        if (uVar8 == 0) {
LAB_08029582:
          bVar13 = 0xfffffffe < uVar11;
          uVar11 = uVar11 + 1;
          param_2 = param_2 + bVar13;
        }
      }
      puVar9 = (undefined *)(uVar5 & 0xfffeffff | 0x40000000);
      uVar4 = in_fpscr | 8;
      uVar2 = uVar11;
      in_fpscr = uVar4;
    }
    else {
      uVar8 = (uint)((uVar8 & 0x7fffffff) != 0) | (uVar4 * 2 + (uint)CARRY4(uVar8,uVar8)) * 2;
      uVar2 = uVar2 - 0x20;
      if (uVar2 < 0x1e) {
        uVar11 = (int)uVar4 >> (uVar2 & 0xff);
        uVar3 = param_1 + uVar11;
        bVar13 = param_2 != 0 || CARRY4(param_2 - 1,(uint)CARRY4(param_1,uVar11));
        iVar7 = (param_2 - 1) + (uint)CARRY4(param_1,uVar11);
        uVar2 = 0x1e - uVar2;
        goto joined_r0x08029318;
      }
      uVar3 = param_1 - 1;
      param_2 = (param_2 + uVar5 * 0x100000) - (uint)(param_1 == 0);
      param_3 = 0xffffffff;
      bVar13 = false;
LAB_0802928c:
      if (bVar13) {
        return uVar3;
      }
      uVar2 = uVar3;
      if ((in_fpscr & 0xc00000) == 0) {
        puVar9 = &UNK_40000012;
        if (((int)param_3 < 0) && (uVar2 = uVar3 + 1, uVar2 == 0 || param_3 == 0x80000000)) {
          if (uVar2 == 0) {
            param_2 = param_2 + 1;
          }
          else {
            uVar2 = uVar2 & 0xfffffffe;
          }
        }
      }
      else {
        if ((int)param_2 < 0) {
          uVar5 = in_fpscr & 0x400000;
        }
        else {
          uVar5 = in_fpscr & 0x800000;
        }
        puVar9 = &UNK_40000012;
        if (uVar5 == 0) {
          uVar2 = uVar3 + 1;
          if (uVar2 == 0) {
            param_2 = param_2 + (0xfffffffe < uVar3);
          }
        }
      }
    }
  }
LAB_08029610:
  uVar8 = param_3;
  if (((uint)puVar9 & 0x70) == 0) {
    uVar8 = param_2;
  }
  if (((uint)puVar9 & 0x30000000 & ~(in_fpscr << 0x12)) != 0) {
    puVar9 = (undefined *)((uint)puVar9 | 0x40000000);
  }
  puVar10 = (undefined *)((uint)puVar9 | in_fpscr & 0x1c00000);
  uVar5 = (uint)puVar9 & 0xf;
  bVar13 = uVar5 == 10 || uVar5 == 8;
  if (uVar5 == 10 || uVar5 == 8) {
    bVar13 = (~(uint)puVar10 & 0x20000) == 0;
  }
  else {
    puVar10 = (undefined *)((uint)puVar10 | ((uint)puVar9 & 0x70) << 3);
  }
  if (bVar13) {
    puVar10 = (undefined *)((uint)puVar10 | 0xc00000);
  }
  if (((uint)puVar10 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return uVar2;
    }
    goto LAB_08029cb0;
  }
  if (((uint)puVar10 & 0x10000000) == 0) {
    if (((uint)puVar10 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return uVar2;
      }
      goto LAB_08029cb0;
    }
    if (((uint)puVar10 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if (((uint)puVar10 & 0x40) != 0) {
          uVar5 = param_2;
          if (((uint)puVar10 & 0x80) == 0) {
            uVar5 = uVar2;
          }
          if (((uint)puVar10 & 0x10) == 0) {
            uVar5 = DAT_080297f8 | uVar5 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar5 & 0x80000000;
            uVar5 = DAT_080297f0;
          }
          uVar5 = FUN_08029adc(uVar5,param_2);
          return uVar5;
        }
        if (((uint)puVar10 & 0xc000) != 0) {
          bVar13 = ((uint)puVar10 & 0x8000) != 0;
          if (bVar13) {
            uVar2 = uVar8;
            param_2 = uVar4;
          }
          if (bVar13) {
            puVar10 = (undefined *)((uint)puVar10 ^ ((uint)puVar10 & 0x100) >> 1);
          }
          if (((uint)puVar10 & 0x80) == 0) {
            uVar2 = uVar2 | 0x400000;
          }
          else {
            param_2 = param_2 | 0x80000;
          }
          uVar5 = FUN_08029adc(uVar2,param_2);
          return uVar5;
        }
        uVar8 = DAT_080297f0;
        uVar5 = DAT_080297f4;
        if (((uint)puVar10 & 0x10) == 0) {
          uVar8 = DAT_080297f8;
          uVar5 = param_2;
        }
        uVar5 = FUN_08029adc(uVar8,uVar5);
        return uVar5;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if (((uint)puVar10 & 0x40) != 0) {
      return 0x80000001;
    }
    if (((uint)puVar10 & 0x10) == 0) {
      uVar8 = uVar8 ^ uVar2;
    }
    else {
      uVar8 = param_2 ^ uVar4;
    }
    if (((uint)puVar10 & 0xf) == 10) {
      uVar8 = 0xffffffff;
    }
    in_fpscr = 0;
    puVar9 = puVar10;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    puVar9 = (undefined *)((uint)puVar10 & 0xefffffff);
    uVar8 = param_2;
    if (((uint)puVar10 & 0x80) == 0) {
      uVar8 = uVar2;
    }
    uVar8 = uVar8 & 0x80000000;
    if (uVar8 == 0) {
      cVar1 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar1 = (char)((in_fpscr << 9) >> 0x18);
    }
    if (cVar1 < '\0') {
      if (((uint)puVar10 & 0x10) == 0) {
        uVar2 = DAT_080297ec | uVar8;
      }
      else {
        param_2 = DAT_080297e8 | uVar8;
        uVar2 = DAT_080297e4;
      }
      puVar10 = puVar9;
      if ((in_fpscr & 0x1000) == 0) {
        return uVar2;
      }
      goto LAB_08029cb0;
    }
  }
  uVar8 = uVar8 & 0x80000000;
  if (((uint)puVar9 & 0x10) == 0) {
    uVar2 = DAT_080297e0 | uVar8;
  }
  else {
    param_2 = DAT_080297dc | uVar8;
    uVar2 = DAT_080297d8;
  }
  puVar10 = puVar9;
  if ((in_fpscr & 0x1000) == 0) {
    return uVar2;
  }
LAB_08029cb0:
  uVar5 = FUN_08001d58(uVar2,param_2,uVar8);
  if (((uint)puVar10 & 0xf) != 9) {
    return uVar5;
  }
  if (((uint)puVar10 & 0x100000) == 0) {
    return (uint)(((uint)puVar10 & uVar5 << 0x10) != 0);
  }
  if (((uint)puVar10 & 0x70000) == 0) {
    return uVar5 << 0x1d;
  }
  if ((uVar5 & 8) == 0) {
    return 2 - uVar5;
  }
  return uVar5;
}

