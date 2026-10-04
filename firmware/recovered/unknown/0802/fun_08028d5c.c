/**
 * @brief fun_08028d5c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028d5c, Ghidra name FUN_08028d5c, 342 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x080295b8) */
/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_08028d5c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  uint uVar4;
  uint extraout_r3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r6;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  uint in_fpscr;
  undefined8 uVar12;
  
  if ((DAT_08028ebc & ~(param_2 >> 4)) == 0 || (DAT_08028ebc & ~(param_4 >> 4)) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08028c58();
  }
  uVar6 = DAT_08028ebc & param_4 >> 4;
  bVar11 = uVar6 == 0;
  uVar5 = DAT_08028ebc & param_2 >> 4;
  if (SCARRY4(param_2,-0x80000000)) {
    uVar6 = uVar6 | 5;
  }
  if (bVar11 || (param_2 & DAT_08028ebc << 4) == 0) {
    uVar3 = DAT_08028eac;
    if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        return param_1;
      }
      uVar12 = FUN_08028ec0();
      uVar3 = (uint)((ulonglong)uVar12 >> 0x20);
      param_1 = (uint)uVar12;
      uVar5 = uVar5 << 0x10;
      uVar6 = uVar6 << 0x10;
      param_3 = extraout_r2;
      uVar4 = extraout_r3;
      if (unaff_r6 < 0) {
        uVar6 = uVar6 | 5;
      }
      goto LAB_08028d9c;
    }
  }
  else {
    uVar3 = param_2 & ~(DAT_08028ebc << 5) | 0x100000;
    uVar4 = param_4 & ~(DAT_08028ebc << 5) | 0x100000;
LAB_08028d9c:
    uVar7 = uVar6 - 0x10000;
LAB_08028da2:
    if ((int)uVar7 < (int)uVar5) {
LAB_08028da6:
      bVar11 = param_1 < param_3;
      param_1 = param_1 - param_3;
      uVar3 = (uVar3 - uVar4) - (uint)bVar11;
      uVar6 = uVar5 - 0x10000;
      if ((int)uVar3 < 0) {
        bVar11 = param_1 != 0;
        param_1 = -param_1;
        uVar3 = -uVar3;
        if (bVar11) {
          uVar3 = uVar3 - 1;
        }
        uVar7 = uVar7 ^ 1;
      }
      if ((uVar3 & 0x1e0000) == 0) {
        iVar8 = LZCOUNT(uVar3 & 0x7fffffff);
        if (iVar8 == 0x20) {
          iVar8 = LZCOUNT(param_1) + 0x20;
        }
        uVar6 = iVar8 - 0xb;
        uVar5 = uVar5 + uVar6 * -0x10000;
        if (uVar6 < 0x20) {
          uVar3 = (uVar3 & 0x7fffffff) << (uVar6 & 0xff) | param_1 >> (0x20 - uVar6 & 0xff);
          uVar6 = 0x20 - (0x20 - uVar6);
          param_1 = param_1 << (uVar6 & 0xff);
        }
        else {
          uVar3 = param_1 << (iVar8 - 0x2bU & 0xff);
          param_1 = 0;
        }
      }
      else {
        for (; (uVar3 & 0x100000) == 0; uVar3 = uVar3 * 2 + (uint)(uVar2 != 0)) {
          uVar2 = param_1 & 0x80000000;
          param_1 = param_1 << 1;
          uVar5 = uVar5 - 0x10000;
        }
      }
      goto LAB_08028da2;
    }
    if (param_1 == 0 && (uVar3 & 0x7fffffff) == 0) {
      return 0;
    }
    if ((int)uVar5 >> 0x10 < (int)uVar7 >> 0x10) goto LAB_08028e52;
    bVar11 = uVar4 <= uVar3;
    if (uVar3 == uVar4) {
      bVar11 = param_3 <= param_1;
    }
    if (uVar3 != uVar4 || param_1 != param_3) {
      if (!bVar11) goto LAB_08028e52;
      uVar6 = param_3 & 0x80000000;
      param_3 = param_3 << 1;
      uVar4 = uVar4 * 2 + (uint)(uVar6 != 0);
      goto LAB_08028da6;
    }
    if (uVar6 >> 0x10 == uVar5 >> 0x10) {
      uVar7 = uVar7 ^ 1;
    }
LAB_08028e52:
    if (0xffff < (int)uVar5) {
      return param_1;
    }
    param_2 = (uVar3 + (uVar5 - 0x10000) * 0x10 ^ uVar7 << 0x1f) + 0x60000000;
    uVar5 = 0x15;
    if ((in_fpscr & 0x1000000) != 0) {
      return 0;
    }
    if ((in_fpscr & 0x800) != 0) {
      puVar9 = &UNK_20000095;
      goto LAB_08029cb0;
    }
    bVar11 = (int)param_2 < 0;
    if (bVar11) {
      uVar5 = 0x10015;
    }
    uVar6 = param_2 & ~((param_2 >> 0x14) << 0x14);
    uVar3 = 0x601 - (param_2 >> 0x14 & 0xfffff7ff);
    if ((int)uVar3 < 0) {
      uVar3 = 0xffffff01;
    }
    uVar4 = uVar6 | 0x100000;
    if (uVar3 < 0x36) {
      if (uVar3 == 0x35) {
        uVar3 = 0;
        param_2 = 0;
        param_3 = 0x80000000;
        if (param_1 != 0 || (uVar6 & 0xfffff) != 0) {
          param_3 = 0x80000001;
        }
      }
      else if (uVar3 < 0x15) {
        param_3 = param_1 << (0x20 - uVar3 & 0xff);
        param_2 = uVar4 >> (uVar3 & 0xff);
        uVar3 = uVar4 << (0x20 - uVar3 & 0xff) | param_1 >> (uVar3 & 0xff);
      }
      else {
        uVar6 = uVar3 - 0x20;
        if (uVar3 < 0x20 || uVar6 == 0) {
          uVar3 = uVar4 << (-uVar6 & 0xff) | param_1 >> (uVar3 & 0xff);
          param_3 = param_1 << (-uVar6 & 0xff);
          param_2 = 0;
        }
        else {
          uVar3 = uVar4 >> (uVar6 & 0xff);
          param_3 = uVar4 << (0x20 - uVar6 & 0xff);
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
      uVar3 = 0;
    }
    if (bVar11) {
      param_2 = param_2 | 0x80000000;
    }
    if (param_3 == 0) {
      return uVar3;
    }
    if ((in_fpscr & 0xc00000) == 0) {
      uVar6 = param_3 & 0x80000000;
      param_3 = param_3 << 1;
      if (uVar6 != 0) {
        if (param_3 != 0) goto LAB_08029582;
        param_3 = 0;
        param_2 = param_2 + (0xfffffffe < uVar3);
        uVar3 = uVar3 + 1 & 0xfffffffe;
      }
    }
    else {
      if ((int)param_2 < 0) {
        uVar6 = in_fpscr & 0x400000;
      }
      else {
        uVar6 = in_fpscr & 0x800000;
      }
      if (uVar6 == 0) {
LAB_08029582:
        bVar11 = 0xfffffffe < uVar3;
        uVar3 = uVar3 + 1;
        param_2 = param_2 + bVar11;
      }
    }
    param_4 = in_fpscr | 8;
    param_1 = uVar3;
    uVar3 = uVar5 & 0xfffeffff | 0x40000000;
    in_fpscr = param_4;
  }
  if ((uVar3 & 0x70) == 0) {
    param_3 = param_2;
  }
  if ((uVar3 & 0x30000000 & ~(in_fpscr << 0x12)) != 0) {
    uVar3 = uVar3 | 0x40000000;
  }
  puVar9 = (undefined *)(uVar3 | in_fpscr & 0x1c00000);
  uVar5 = uVar3 & 0xf;
  bVar11 = uVar5 == 10 || uVar5 == 8;
  if (uVar5 == 10 || uVar5 == 8) {
    bVar11 = (~(uint)puVar9 & 0x20000) == 0;
  }
  else {
    puVar9 = (undefined *)((uint)puVar9 | (uVar3 & 0x70) << 3);
  }
  if (bVar11) {
    puVar9 = (undefined *)((uint)puVar9 | 0xc00000);
  }
  if (((uint)puVar9 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    goto LAB_08029cb0;
  }
  if (((uint)puVar9 & 0x10000000) == 0) {
    if (((uint)puVar9 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
    if (((uint)puVar9 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if (((uint)puVar9 & 0x40) != 0) {
          uVar5 = param_2;
          if (((uint)puVar9 & 0x80) == 0) {
            uVar5 = param_1;
          }
          if (((uint)puVar9 & 0x10) == 0) {
            uVar5 = DAT_080297f8 | uVar5 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar5 & 0x80000000;
            uVar5 = DAT_080297f0;
          }
          uVar5 = FUN_08029adc(uVar5,param_2);
          return uVar5;
        }
        if (((uint)puVar9 & 0xc000) != 0) {
          bVar11 = ((uint)puVar9 & 0x8000) != 0;
          if (bVar11) {
            param_1 = param_3;
            param_2 = param_4;
          }
          if (bVar11) {
            puVar9 = (undefined *)((uint)puVar9 ^ ((uint)puVar9 & 0x100) >> 1);
          }
          if (((uint)puVar9 & 0x80) == 0) {
            param_1 = param_1 | 0x400000;
          }
          else {
            param_2 = param_2 | 0x80000;
          }
          uVar5 = FUN_08029adc(param_1,param_2);
          return uVar5;
        }
        uVar6 = DAT_080297f0;
        uVar5 = DAT_080297f4;
        if (((uint)puVar9 & 0x10) == 0) {
          uVar6 = DAT_080297f8;
          uVar5 = param_2;
        }
        uVar5 = FUN_08029adc(uVar6,uVar5);
        return uVar5;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if (((uint)puVar9 & 0x40) != 0) {
      return 0x80000001;
    }
    if (((uint)puVar9 & 0x10) == 0) {
      param_4 = param_3 ^ param_1;
    }
    else {
      param_4 = param_2 ^ param_4;
    }
    if (((uint)puVar9 & 0xf) == 10) {
      param_4 = 0xffffffff;
    }
    in_fpscr = 0;
    puVar10 = puVar9;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    puVar10 = (undefined *)((uint)puVar9 & 0xefffffff);
    param_4 = param_2;
    if (((uint)puVar9 & 0x80) == 0) {
      param_4 = param_1;
    }
    param_4 = param_4 & 0x80000000;
    if (param_4 == 0) {
      cVar1 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar1 = (char)((in_fpscr << 9) >> 0x18);
    }
    if (cVar1 < '\0') {
      if (((uint)puVar9 & 0x10) == 0) {
        param_1 = DAT_080297ec | param_4;
      }
      else {
        param_2 = DAT_080297e8 | param_4;
        param_1 = DAT_080297e4;
      }
      puVar9 = puVar10;
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
  }
  if (((uint)puVar10 & 0x10) == 0) {
    param_1 = DAT_080297e0 | param_4 & 0x80000000;
  }
  else {
    param_2 = DAT_080297dc | param_4 & 0x80000000;
    param_1 = DAT_080297d8;
  }
  puVar9 = puVar10;
  if ((in_fpscr & 0x1000) == 0) {
    return param_1;
  }
LAB_08029cb0:
  uVar5 = FUN_08001d58(param_1,param_2);
  if (((uint)puVar9 & 0xf) != 9) {
    return uVar5;
  }
  if (((uint)puVar9 & 0x100000) == 0) {
    return (uint)(((uint)puVar9 & uVar5 << 0x10) != 0);
  }
  if (((uint)puVar9 & 0x70000) == 0) {
    return uVar5 << 0x1d;
  }
  if ((uVar5 & 8) == 0) {
    return 2 - uVar5;
  }
  return uVar5;
}

