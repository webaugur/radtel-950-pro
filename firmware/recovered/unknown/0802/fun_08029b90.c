/**
 * @brief fun_08029b90
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08029b90, Ghidra name FUN_08029b90, 396 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029b2c) */
/* WARNING: Removing unreachable block (ram,0x08029b32) */
/* WARNING: Removing unreachable block (ram,0x08029b34) */
/* WARNING: Removing unreachable block (ram,0x08029b36) */
/* WARNING: Removing unreachable block (ram,0x08029b44) */
/* WARNING: Removing unreachable block (ram,0x08029b46) */
/* WARNING: Removing unreachable block (ram,0x08029b48) */
/* WARNING: Removing unreachable block (ram,0x08029cfe) */
/* WARNING: Removing unreachable block (ram,0x080295b8) */
/* WARNING: Removing unreachable block (ram,0x08029b4a) */
/* WARNING: Removing unreachable block (ram,0x08029b5a) */
/* WARNING: Removing unreachable block (ram,0x08029b54) */
/* WARNING: Removing unreachable block (ram,0x08029ae4) */
/* WARNING: Removing unreachable block (ram,0x08029b78) */
/* WARNING: Removing unreachable block (ram,0x08029af4) */
/* WARNING: Removing unreachable block (ram,0x08029af6) */
/* WARNING: Removing unreachable block (ram,0x08029b66) */
/* WARNING: Removing unreachable block (ram,0x08029afc) */
/* WARNING: Removing unreachable block (ram,0x08029b0e) */
/* WARNING: Removing unreachable block (ram,0x08029b10) */
/* WARNING: Removing unreachable block (ram,0x08029b20) */
/* WARNING: Removing unreachable block (ram,0x08029b26) */
/* WARNING: Removing unreachable block (ram,0x08029b2a) */
/* WARNING: Removing unreachable block (ram,0x08028400) */

uint FUN_08029b90(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  char in_OV;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  
  uVar8 = 0x7ff;
  uVar5 = param_2 >> 0x14 & 0x7ff;
  bVar10 = uVar5 == 0;
  if (!bVar10) {
    uVar8 = uVar5 ^ 0x7ff;
    bVar10 = uVar8 == 0;
  }
  bVar11 = bVar10;
  if (!bVar10) {
    in_OV = SBORROW4(uVar8,param_3);
    bVar11 = uVar8 == param_3;
  }
  bVar10 = !bVar10 && (int)(uVar8 - param_3) < 0;
  if (!bVar11 && bVar10 == (bool)in_OV) {
    in_OV = SCARRY4(param_3,uVar5);
    bVar10 = (int)(param_3 + uVar5) < 0;
    bVar11 = param_3 + uVar5 == 0;
  }
  if (!bVar11 && bVar10 == (bool)in_OV) {
    return param_1;
  }
  if (uVar5 == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return param_1;
    }
    iVar9 = param_2 << 0xc;
    if (iVar9 == 0) {
      uVar8 = param_1 << LZCOUNT(param_1);
      uVar5 = -(LZCOUNT(param_1) + 0x14);
      param_1 = uVar8 << 0x15;
      param_2 = (param_2 | uVar8 >> 0xb) & 0xffefffff;
    }
    else {
      uVar8 = 0x14 - LZCOUNT(iVar9);
      uVar5 = 0x14 - uVar8;
      param_2 = param_2 & 0x80000000 |
                ((iVar9 << LZCOUNT(iVar9) | param_1 >> (uVar8 & 0xff)) & 0x7fffffff) >> 0xb;
      param_1 = (param_1 << (uVar5 & 0xff)) << 1;
      uVar5 = -uVar5;
    }
LAB_08029bbc:
    bVar11 = SCARRY4(param_3,0xe40);
    bVar10 = param_3 == 0xfffff1c0;
    uVar8 = param_3 + 0xe40;
    if (-0xe40 < (int)param_3) {
      uVar8 = param_3;
      if ((int)param_3 < 0xe40) {
        uVar8 = param_3 + uVar5;
      }
      if (-2 < (int)(uVar8 - 0x800)) {
        param_3 = uVar8 - 0x600;
        uVar4 = uVar8 - 0xdff;
        uVar5 = DAT_08029ca0;
        if ((int)(uVar8 - 0xe00) < -1) {
          param_2 = param_2 | param_3 * 0x100000;
        }
        else {
          param_1 = 0;
          param_2 = param_2 & 0x80000000 | 0x7ff80000;
        }
        goto LAB_08029610;
      }
      if (0 < (int)uVar8) {
        return param_1;
      }
      bVar11 = SCARRY4(uVar8,0x600);
      param_3 = uVar8 + 0x600;
      bVar10 = param_3 == 0;
      uVar8 = param_3;
    }
    if (bVar10 || (int)uVar8 < 0 != bVar11) {
      param_1 = 0;
      param_2 = param_2 & 0x80000000 | 0x7ff80000;
    }
    else {
      param_2 = param_2 | param_3 << 0x14;
    }
    uVar5 = 0x1b;
    if ((in_fpscr & 0x1000000) != 0) {
      return 0;
    }
    if ((in_fpscr & 0x800) != 0) {
      puVar6 = &UNK_2000009b;
      goto LAB_08029cb0;
    }
    bVar10 = (int)param_2 < 0;
    if (bVar10) {
      uVar5 = 0x1001b;
    }
    uVar8 = param_2 & ~((param_2 >> 0x14) << 0x14);
    uVar4 = 0x601 - (param_2 >> 0x14 & 0xfffff7ff);
    if ((int)uVar4 < 0) {
      uVar4 = 0xffffff01;
    }
    uVar3 = uVar8 | 0x100000;
    if (uVar4 < 0x36) {
      if (uVar4 == 0x35) {
        uVar2 = 0;
        param_2 = 0;
        param_3 = 0x80000000;
        if (param_1 != 0 || (uVar8 & 0xfffff) != 0) {
          param_3 = 0x80000001;
        }
      }
      else if (uVar4 < 0x15) {
        param_3 = param_1 << (0x20 - uVar4 & 0xff);
        param_2 = uVar3 >> (uVar4 & 0xff);
        uVar2 = uVar3 << (0x20 - uVar4 & 0xff) | param_1 >> (uVar4 & 0xff);
      }
      else {
        uVar8 = uVar4 - 0x20;
        if (uVar4 < 0x20 || uVar8 == 0) {
          uVar2 = uVar3 << (-uVar8 & 0xff) | param_1 >> (uVar4 & 0xff);
          param_3 = param_1 << (-uVar8 & 0xff);
          param_2 = 0;
        }
        else {
          uVar2 = uVar3 >> (uVar8 & 0xff);
          param_3 = uVar3 << (0x20 - uVar8 & 0xff);
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
      uVar2 = 0;
    }
    if (bVar10) {
      param_2 = param_2 | 0x80000000;
    }
    if (param_3 == 0) {
      return uVar2;
    }
    if ((in_fpscr & 0xc00000) == 0) {
      uVar8 = param_3 & 0x80000000;
      param_3 = param_3 << 1;
      if (uVar8 != 0) {
        if (param_3 != 0) goto LAB_08029582;
        param_3 = 0;
        param_2 = param_2 + (0xfffffffe < uVar2);
        uVar2 = uVar2 + 1 & 0xfffffffe;
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
        bVar10 = 0xfffffffe < uVar2;
        uVar2 = uVar2 + 1;
        param_2 = param_2 + bVar10;
      }
    }
    uVar4 = in_fpscr | 8;
    param_1 = uVar2;
    uVar5 = uVar5 & 0xfffeffff | 0x40000000;
    in_fpscr = uVar4;
  }
  else {
    if (uVar8 != 0) {
      param_2 = param_2 + uVar5 * -0x100000;
      goto LAB_08029bbc;
    }
    uVar4 = param_1 | param_2 << 0xc;
    if (uVar4 == 0) {
      return param_1;
    }
    if ((param_2 & 0x80000) != 0) {
      return param_1;
    }
    uVar5 = 0x400409b;
  }
LAB_08029610:
  if ((uVar5 & 0x70) == 0) {
    param_3 = param_2;
  }
  if ((uVar5 & 0x30000000 & ~(in_fpscr << 0x12)) != 0) {
    uVar5 = uVar5 | 0x40000000;
  }
  puVar6 = (undefined *)(uVar5 | in_fpscr & 0x1c00000);
  uVar8 = uVar5 & 0xf;
  bVar10 = uVar8 == 10 || uVar8 == 8;
  if (uVar8 == 10 || uVar8 == 8) {
    bVar10 = (~(uint)puVar6 & 0x20000) == 0;
  }
  else {
    puVar6 = (undefined *)((uint)puVar6 | (uVar5 & 0x70) << 3);
  }
  if (bVar10) {
    puVar6 = (undefined *)((uint)puVar6 | 0xc00000);
  }
  if (((uint)puVar6 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    goto LAB_08029cb0;
  }
  if (((uint)puVar6 & 0x10000000) == 0) {
    if (((uint)puVar6 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
    if (((uint)puVar6 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if (((uint)puVar6 & 0x40) != 0) {
          uVar5 = param_2;
          if (((uint)puVar6 & 0x80) == 0) {
            uVar5 = param_1;
          }
          if (((uint)puVar6 & 0x10) == 0) {
            uVar5 = DAT_080297f8 | uVar5 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar5 & 0x80000000;
            uVar5 = DAT_080297f0;
          }
          uVar5 = FUN_08029adc(uVar5,param_2);
          return uVar5;
        }
        if (((uint)puVar6 & 0xc000) != 0) {
          bVar10 = ((uint)puVar6 & 0x8000) != 0;
          if (bVar10) {
            param_1 = param_3;
            param_2 = uVar4;
          }
          if (bVar10) {
            puVar6 = (undefined *)((uint)puVar6 ^ ((uint)puVar6 & 0x100) >> 1);
          }
          if (((uint)puVar6 & 0x80) == 0) {
            param_1 = param_1 | 0x400000;
          }
          else {
            param_2 = param_2 | 0x80000;
          }
          uVar5 = FUN_08029adc(param_1,param_2);
          return uVar5;
        }
        uVar8 = DAT_080297f0;
        uVar5 = DAT_080297f4;
        if (((uint)puVar6 & 0x10) == 0) {
          uVar8 = DAT_080297f8;
          uVar5 = param_2;
        }
        uVar5 = FUN_08029adc(uVar8,uVar5);
        return uVar5;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if (((uint)puVar6 & 0x40) != 0) {
      return 0x80000001;
    }
    if (((uint)puVar6 & 0x10) == 0) {
      param_3 = param_3 ^ param_1;
    }
    else {
      param_3 = param_2 ^ uVar4;
    }
    if (((uint)puVar6 & 0xf) == 10) {
      param_3 = 0xffffffff;
    }
    in_fpscr = 0;
    puVar7 = puVar6;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    puVar7 = (undefined *)((uint)puVar6 & 0xefffffff);
    param_3 = param_2;
    if (((uint)puVar6 & 0x80) == 0) {
      param_3 = param_1;
    }
    param_3 = param_3 & 0x80000000;
    if (param_3 == 0) {
      cVar1 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar1 = (char)((in_fpscr << 9) >> 0x18);
    }
    if (cVar1 < '\0') {
      if (((uint)puVar6 & 0x10) == 0) {
        param_1 = DAT_080297ec | param_3;
      }
      else {
        param_2 = DAT_080297e8 | param_3;
        param_1 = DAT_080297e4;
      }
      puVar6 = puVar7;
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
      goto LAB_08029cb0;
    }
  }
  param_3 = param_3 & 0x80000000;
  if (((uint)puVar7 & 0x10) == 0) {
    param_1 = DAT_080297e0 | param_3;
  }
  else {
    param_2 = DAT_080297dc | param_3;
    param_1 = DAT_080297d8;
  }
  puVar6 = puVar7;
  if ((in_fpscr & 0x1000) == 0) {
    return param_1;
  }
LAB_08029cb0:
  uVar5 = FUN_08001d58(param_1,param_2,param_3);
  if (((uint)puVar6 & 0xf) != 9) {
    return uVar5;
  }
  if (((uint)puVar6 & 0x100000) == 0) {
    return (uint)(((uint)puVar6 & uVar5 << 0x10) != 0);
  }
  if (((uint)puVar6 & 0x70000) == 0) {
    return uVar5 << 0x1d;
  }
  if ((uVar5 & 8) == 0) {
    return 2 - uVar5;
  }
  return uVar5;
}

