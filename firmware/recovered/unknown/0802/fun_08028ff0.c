/**
 * @brief fun_08028ff0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028ff0, Ghidra name FUN_08028ff0, 464 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_08028ff0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint unaff_r4;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined4 unaff_lr;
  bool bVar14;
  bool bVar15;
  uint in_fpscr;
  undefined8 uVar16;
  
  uVar12 = param_2 + 0x100000;
  if ((int)uVar12 < 0x200000) {
    puVar13 = DAT_080291e8;
    if ((uVar12 & 0x7fffffff) >> 0x15 == 0) {
      if (((uVar12 & 0x7fffffff) >> 0x14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_08028c58();
      }
      if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
        return param_1;
      }
      if (-1 < (int)param_2) {
        uVar16 = FUN_08028f2a();
        uVar12 = (uint)((ulonglong)uVar16 >> 0x20);
        param_1 = (uint)uVar16;
        goto LAB_0802900c;
      }
    }
  }
  else {
    unaff_r4 = param_2 >> 0x14;
    uVar12 = param_2 & ~(unaff_r4 << 0x14) | 0x100000;
LAB_0802900c:
    uVar7 = param_1;
    if ((unaff_r4 + 0xfd & 1) != 0) {
      uVar7 = param_1 << 1;
      uVar12 = uVar12 * 2 + (uint)((param_1 & 0x80000000) != 0);
    }
    uVar8 = uVar12 << 10 | uVar7 >> 0x16;
    uVar11 = uVar7 << 10;
    uVar10 = (uint)*(byte *)(((uVar12 & 0x3fffff) >> 0x10) + 0x80290f4);
    lVar2 = (ulonglong)uVar10 *
            (ulonglong)(0xc0000000 - ((uVar12 & 0x3fffff) >> 6) * uVar10 * uVar10);
    uVar10 = (uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9;
    lVar2 = (ulonglong)(uVar10 * uVar10) * (ulonglong)uVar8;
    iVar9 = (int)lVar2;
    iVar1 = -(int)((ulonglong)lVar2 >> 0x20);
    uVar12 = iVar1 + 0xc0000000;
    if (iVar9 != 0) {
      uVar12 = iVar1 + 0xbfffffff;
    }
    lVar2 = (ulonglong)uVar10 * (ulonglong)uVar12 +
            ((ulonglong)uVar10 * (ulonglong)(uint)-iVar9 >> 0x20);
    uVar10 = (uint)lVar2 >> 0xf | (int)((ulonglong)lVar2 >> 0x20) << 0x11;
    uVar12 = (uint)((ulonglong)uVar10 * (ulonglong)uVar10 >> 0x20);
    lVar2 = (ulonglong)uVar12 * (ulonglong)uVar8 + ((ulonglong)uVar12 * (ulonglong)uVar11 >> 0x20) +
            ((ulonglong)uVar8 * ((ulonglong)uVar10 * (ulonglong)uVar10 & 0xffffffff) >> 0x20);
    iVar9 = (int)lVar2;
    iVar1 = -(int)((ulonglong)lVar2 >> 0x20);
    uVar12 = iVar1 + 0xc0000000;
    if (iVar9 != 0) {
      uVar12 = iVar1 + 0xbfffffff;
    }
    uVar4 = (ulonglong)uVar10 * (ulonglong)uVar12 +
            ((ulonglong)uVar10 * (ulonglong)(uint)-iVar9 >> 0x20);
    param_4 = (uint)uVar4;
    param_3 = (uint)(uVar4 >> 0x20);
    uVar12 = (uint)((ulonglong)param_3 * (uVar4 & 0xffffffff) >> 0x20);
    uVar3 = (ulonglong)param_3 * (ulonglong)param_3 + (ulonglong)uVar12 + (ulonglong)uVar12;
    uVar12 = (uint)(uVar3 >> 0x20);
    lVar2 = (ulonglong)uVar12 * (ulonglong)uVar8 + ((ulonglong)uVar8 * (uVar3 & 0xffffffff) >> 0x20)
            + ((ulonglong)uVar12 * (ulonglong)uVar11 >> 0x20);
    iVar9 = (int)lVar2;
    iVar1 = -(int)((ulonglong)lVar2 >> 0x20);
    uVar12 = iVar1 + 0x30000000;
    if (iVar9 != 0) {
      uVar12 = iVar1 + 0x2fffffff;
    }
    uVar3 = (ulonglong)param_3 * (ulonglong)uVar12 +
            ((uVar4 & 0xffffffff) * (ulonglong)uVar12 >> 0x20) +
            ((ulonglong)param_3 * (ulonglong)(uint)-iVar9 >> 0x20);
    uVar12 = (uint)(uVar3 >> 0x20);
    lVar2 = (ulonglong)uVar8 * (ulonglong)uVar12 + ((ulonglong)uVar11 * (ulonglong)uVar12 >> 0x20) +
            ((ulonglong)uVar8 * (uVar3 & 0xffffffff) >> 0x20);
    lVar6 = lVar2 + 0x20;
    uVar12 = (uint)((ulonglong)lVar6 >> 0x20);
    param_2 = uVar12 >> 6;
    param_1 = (uint)lVar6 >> 6 | uVar12 * 0x4000000;
    if (((in_fpscr & 0xc00000) != 0) || (((int)lVar2 - 0x1bU & 0x1f) < 0xb)) {
      uVar12 = (uint)((ulonglong)param_1 * (ulonglong)param_1);
      uVar7 = (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_1 * param_2 * 2 +
              uVar7 * -0x100000;
      param_3 = uVar7 | uVar12;
      if (param_3 == 0) {
        return param_1;
      }
      if ((in_fpscr & 0xc00000) == 0) {
        if ((int)uVar7 < 0) {
          if ((int)(uVar7 + param_2 + CARRY4(uVar12,param_1)) < 0) {
            bVar14 = 0xfffffffe < param_1;
            param_1 = param_1 + 1;
            param_2 = param_2 + bVar14;
          }
        }
        else if (-1 < (int)((uVar7 - param_2) - (uint)(uVar12 < param_1))) {
          bVar14 = param_1 == 0;
          param_1 = param_1 - 1;
          param_2 = param_2 - bVar14;
        }
      }
      else if ((in_fpscr & 0x800000) == 0) {
        for (; (int)uVar7 < 0; uVar7 = uVar7 + iVar1 + param_2 + CARRY4(uVar8,param_1)) {
          uVar8 = uVar12 + param_1;
          iVar1 = param_2 + CARRY4(uVar12,param_1);
          bVar14 = 0xfffffffe < param_1;
          param_1 = param_1 + 1;
          param_2 = param_2 + bVar14;
          uVar12 = uVar8 + param_1;
        }
      }
      else {
        while (-1 < (int)uVar7) {
          bVar14 = uVar12 < param_1;
          uVar8 = uVar12 - param_1;
          iVar1 = uVar7 - param_2;
          bVar15 = param_1 == 0;
          param_1 = param_1 - 1;
          param_2 = param_2 - bVar15;
          uVar12 = uVar8 - param_1;
          uVar7 = ((iVar1 - (uint)bVar14) - param_2) - (uint)(uVar8 < param_1);
        }
      }
    }
    param_2 = param_2 + ((unaff_r4 + 0xfd >> 1) + 0x180) * 0x100000;
    puVar13 = &UNK_40000017;
  }
  if (((uint)puVar13 & 0x70) == 0) {
    param_3 = param_2;
  }
  uVar12 = (uint)puVar13 & 0x30000000;
  if ((uVar12 & ~(in_fpscr << 0x12)) != 0) {
    puVar13 = (undefined *)((uint)puVar13 | 0x40000000);
  }
  uVar7 = ((uint)puVar13 & 0x7fffffff) >> 0x1a & ~(in_fpscr >> 8);
  if ((uVar12 & in_fpscr << 0x12) != 0) {
    uVar7 = uVar7 & 0xffffffef;
  }
  uVar7 = in_fpscr | uVar7;
  uVar8 = (uint)puVar13 | in_fpscr & 0x1c00000;
  uVar12 = (uint)puVar13 & 0xf;
  bVar14 = uVar12 == 10 || uVar12 == 8;
  if (uVar12 == 10 || uVar12 == 8) {
    bVar14 = (~uVar8 & 0x20000) == 0;
  }
  else {
    uVar8 = uVar8 | ((uint)puVar13 & 0x70) << 3;
  }
  if (bVar14) {
    uVar8 = uVar8 | 0xc00000;
  }
  if ((uVar8 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    goto LAB_08029cb0;
  }
  if ((uVar8 & 0x10000000) == 0) {
    if ((uVar8 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
    if ((uVar8 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if ((uVar8 & 0x40) != 0) {
          uVar12 = param_2;
          if ((uVar8 & 0x80) == 0) {
            uVar12 = param_1;
          }
          if ((uVar8 & 0x10) == 0) {
            uVar12 = DAT_080297f8 | uVar12 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar12 & 0x80000000;
            uVar12 = DAT_080297f0;
          }
          uVar12 = FUN_08029adc(uVar12,param_2);
          return uVar12;
        }
        if ((uVar8 & 0xc000) != 0) {
          bVar14 = (uVar8 & 0x8000) != 0;
          if (bVar14) {
            param_1 = param_3;
            param_2 = param_4;
          }
          if (bVar14) {
            uVar8 = uVar8 ^ (uVar8 & 0x100) >> 1;
          }
          if ((uVar8 & 0x80) == 0) {
            param_1 = param_1 | 0x400000;
          }
          else {
            param_2 = param_2 | 0x80000;
          }
          uVar12 = FUN_08029adc(param_1,param_2);
          return uVar12;
        }
        uVar7 = DAT_080297f0;
        uVar12 = DAT_080297f4;
        if ((uVar8 & 0x10) == 0) {
          uVar7 = DAT_080297f8;
          uVar12 = param_2;
        }
        uVar12 = FUN_08029adc(uVar7,uVar12);
        return uVar12;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if ((uVar8 & 0x40) != 0) {
      return 0x80000001;
    }
    if ((uVar8 & 0x10) == 0) {
      param_3 = param_3 ^ param_1;
    }
    else {
      param_3 = param_2 ^ param_4;
    }
    if ((uVar8 & 0xf) == 10) {
      param_3 = 0xffffffff;
    }
    uVar7 = 0;
    uVar12 = uVar8;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    uVar12 = uVar8 & 0xefffffff;
    param_3 = param_2;
    if ((uVar8 & 0x80) == 0) {
      param_3 = param_1;
    }
    param_3 = param_3 & 0x80000000;
    if (param_3 == 0) {
      cVar5 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar5 = (char)((uVar7 << 9) >> 0x18);
    }
    if (cVar5 < '\0') {
      if ((uVar8 & 0x10) == 0) {
        param_1 = DAT_080297ec | param_3;
      }
      else {
        param_2 = DAT_080297e8 | param_3;
        param_1 = DAT_080297e4;
      }
      param_4 = uVar7;
      uVar8 = uVar12;
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
  }
  param_3 = param_3 & 0x80000000;
  if ((uVar12 & 0x10) == 0) {
    param_1 = DAT_080297e0 | param_3;
  }
  else {
    param_2 = DAT_080297dc | param_3;
    param_1 = DAT_080297d8;
  }
  param_4 = uVar7;
  uVar8 = uVar12;
  if ((uVar7 & 0x1000) == 0) {
    return param_1;
  }
LAB_08029cb0:
  uVar12 = FUN_08001d58(param_1,param_2,param_3,param_4,uVar8,unaff_lr,uVar8,unaff_lr);
  if ((uVar8 & 0xf) != 9) {
    return uVar12;
  }
  if ((uVar8 & 0x100000) == 0) {
    return (uint)((uVar8 & uVar12 << 0x10) != 0);
  }
  if ((uVar8 & 0x70000) == 0) {
    return uVar12 << 0x1d;
  }
  if ((uVar12 & 8) == 0) {
    return 2 - uVar12;
  }
  return uVar12;
}

