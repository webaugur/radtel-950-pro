/**
 * @brief fun_08029876
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08029876, Ghidra name FUN_08029876, 228 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_08029876(uint param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_lr;
  uint *puVar8;
  bool bVar9;
  uint in_fpscr;
  
  puVar8 = (uint *)(unaff_lr + 2U & 0xfffffffc);
  uVar5 = *puVar8;
  bVar9 = 0xfeffffff < param_1 * 2;
  uVar3 = param_1 * 2 + 0x1000000;
  if (uVar3 != 0) {
    bVar9 = 0x7fffff < uVar3;
  }
  if (bVar9) {
    if (-1 < (int)uVar5) {
      bVar9 = 0xfeffffff < param_2 * 2;
      param_4 = param_2 * 2 + 0x1000000;
      if (param_4 != 0) {
        bVar9 = 0x7fffff < param_4;
      }
      if (!bVar9) goto LAB_080298d8;
    }
    if ((param_1 << 1 < 0xff800000) && (((int)uVar5 < 0 || (param_2 << 1 < 0xff800000)))) {
      if (uVar3 == 0) {
        uVar7 = ((int)param_1 >> 0x1f) * -3 + 2;
        if (param_4 == 0) {
          uVar7 = uVar7 + (1 - ((int)param_2 >> 0x1f));
        }
      }
      else {
        uVar7 = param_2 >> 0x1f;
      }
    }
    else {
      uVar7 = 8;
    }
  }
  else {
LAB_080298d8:
    uVar7 = 9;
  }
  uVar7 = uVar7 * 3;
  uVar5 = uVar5 >> (uVar7 & 0xff) & 7;
  switch(uVar5) {
  case 4:
    param_1 = param_2;
  case 5:
    bVar9 = (param_1 & 0x80000000) != 0;
    uVar3 = param_1 * 2;
    if (uVar3 != 0) {
      bVar9 = uVar3 < 0x1000001;
    }
    if (!bVar9 || (uVar3 == 0 || param_1 * -2 == -0x1000000)) {
      return param_1;
    }
    uVar3 = puVar8[1] & 0xfbffffff;
    if ((in_fpscr & 0x1000000) != 0) {
      return param_1 & 0x80000000;
    }
    if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    uVar7 = LZCOUNT(param_1 & 0x7fffffff) - 8;
    param_2 = (param_1 & 0x80000000 | 0x60000000) + uVar7 * -0x800000;
    param_1 = ((param_1 & 0x7fffffff) << (uVar7 & 0xff)) + param_2;
    uVar6 = uVar3 | 0x20000000;
    break;
  case 6:
    if (uVar3 == 0 || 0xffffff < uVar3) {
      param_1 = param_2;
    }
    return param_1;
  case 7:
    uVar5 = puVar8[1];
    if (uVar7 == 0x1b) {
      if (uVar3 == 0 || 0x7fffff < uVar3) {
        uVar5 = uVar5 | 0x8000;
      }
      else {
        uVar5 = uVar5 | 0x4000;
      }
    }
    if ((uVar5 & 0x70) == 0) {
      uVar3 = param_2;
    }
    uVar2 = uVar5 & 0x30000000;
    if ((uVar2 & ~(in_fpscr << 0x12)) != 0) {
      uVar5 = uVar5 | 0x40000000;
    }
    uVar4 = (uVar5 & 0x7fffffff) >> 0x1a & ~(in_fpscr >> 8);
    if ((uVar2 & in_fpscr << 0x12) != 0) {
      uVar4 = uVar4 & 0xffffffef;
    }
    uVar4 = in_fpscr | uVar4;
    uVar6 = uVar5 | in_fpscr & 0x1c00000;
    uVar2 = uVar5 & 0xf;
    bVar9 = uVar2 == 10 || uVar2 == 8;
    if (uVar2 == 10 || uVar2 == 8) {
      bVar9 = (~uVar6 & 0x20000) == 0;
    }
    else {
      uVar6 = uVar6 | (uVar5 & 0x70) << 3;
    }
    if (bVar9) {
      uVar6 = uVar6 | 0xc00000;
    }
    if ((uVar6 & 0x20000000) == 0) {
      if ((uVar6 & 0x10000000) == 0) {
        if ((uVar6 & 0x40000000) != 0) {
          if ((in_fpscr & 0x1000) == 0) {
            return param_1;
          }
          break;
        }
        if ((uVar6 & 0x8000000) == 0) {
          if ((in_fpscr & 0x100) == 0) {
            if ((uVar6 & 0x40) != 0) {
              uVar3 = param_2;
              if ((uVar6 & 0x80) == 0) {
                uVar3 = param_1;
              }
              if ((uVar6 & 0x10) == 0) {
                uVar3 = DAT_080297f8 | uVar3 & 0x80000000;
              }
              else {
                param_2 = DAT_080297f4 | uVar3 & 0x80000000;
                uVar3 = DAT_080297f0;
              }
              uVar3 = FUN_08029adc(uVar3,param_2);
              return uVar3;
            }
            if ((uVar6 & 0xc000) != 0) {
              bVar9 = (uVar6 & 0x8000) != 0;
              if (bVar9) {
                param_1 = uVar3;
                param_2 = uVar7;
              }
              if (bVar9) {
                uVar6 = uVar6 ^ (uVar6 & 0x100) >> 1;
              }
              if ((uVar6 & 0x80) == 0) {
                param_1 = param_1 | 0x400000;
              }
              else {
                param_2 = param_2 | 0x80000;
              }
              uVar3 = FUN_08029adc(param_1,param_2);
              return uVar3;
            }
            uVar5 = DAT_080297f0;
            uVar3 = DAT_080297f4;
            if ((uVar6 & 0x10) == 0) {
              uVar5 = DAT_080297f8;
              uVar3 = param_2;
            }
            uVar3 = FUN_08029adc(uVar5,uVar3);
            return uVar3;
          }
          break;
        }
        if ((in_fpscr & 0x200) != 0) break;
        if ((uVar6 & 0x40) != 0) {
          return 0x80000001;
        }
        if ((uVar6 & 0x10) == 0) {
          uVar3 = uVar3 ^ param_1;
        }
        else {
          uVar3 = param_2 ^ uVar7;
        }
        if ((uVar6 & 0xf) == 10) {
          uVar3 = 0xffffffff;
        }
        uVar4 = 0;
        uVar5 = uVar6;
      }
      else {
        if ((in_fpscr & 0x400) != 0) break;
        uVar5 = uVar6 & 0xefffffff;
        uVar3 = param_2;
        if ((uVar6 & 0x80) == 0) {
          uVar3 = param_1;
        }
        uVar3 = uVar3 & 0x80000000;
        if (uVar3 == 0) {
          cVar1 = (char)(in_fpscr >> 0x10);
        }
        else {
          cVar1 = (char)((uVar4 << 9) >> 0x18);
        }
        if (cVar1 < '\0') {
          if ((uVar6 & 0x10) == 0) {
            param_1 = DAT_080297ec | uVar3;
          }
          else {
            param_2 = DAT_080297e8 | uVar3;
            param_1 = DAT_080297e4;
          }
          uVar7 = uVar4;
          uVar6 = uVar5;
          if ((in_fpscr & 0x1000) == 0) {
            return param_1;
          }
          break;
        }
      }
      uVar3 = uVar3 & 0x80000000;
      if ((uVar5 & 0x10) == 0) {
        param_1 = DAT_080297e0 | uVar3;
      }
      else {
        param_2 = DAT_080297dc | uVar3;
        param_1 = DAT_080297d8;
      }
      uVar7 = uVar4;
      uVar6 = uVar5;
      if ((uVar4 & 0x1000) == 0) {
        return param_1;
      }
    }
    else if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x08029906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(puVar8 + uVar5 + 2))();
    return uVar3;
  }
  uVar3 = FUN_08001d58(param_1,param_2,uVar3,uVar7,uVar6,param_6);
  if ((uVar6 & 0xf) != 9) {
    return uVar3;
  }
  if ((uVar6 & 0x100000) == 0) {
    return (uint)((uVar6 & uVar3 << 0x10) != 0);
  }
  if ((uVar6 & 0x70000) == 0) {
    return uVar3 << 0x1d;
  }
  if ((uVar3 & 8) == 0) {
    return 2 - uVar3;
  }
  return uVar3;
}

