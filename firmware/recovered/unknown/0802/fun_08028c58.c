/**
 * @brief fun_08028c58
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028c58, Ghidra name FUN_08028c58, 240 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_08028c58(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,undefined4 param_6
                 ,uint param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r5;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_lr;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  undefined8 uVar10;
  
  puVar7 = (uint *)(unaff_lr + 2U & 0xfffffffc);
  uVar4 = *puVar7;
  uVar2 = param_2 * 2 + (uint)(param_1 != 0);
  bVar9 = 0xffdfffff < uVar2;
  uVar3 = uVar2 + 0x200000;
  if (uVar2 != 0xffe00000) {
    bVar9 = 0xfffff < uVar3;
  }
  if (bVar9) {
    if (-1 < (int)uVar4) {
      uVar6 = param_4 * 2 + (uint)(param_3 != 0);
      bVar9 = 0xffdfffff < uVar6;
      unaff_r5 = uVar6 + 0x200000;
      if (unaff_r5 != 0) {
        bVar9 = 0xfffff < unaff_r5;
      }
      if (!bVar9) goto LAB_08028cbe;
    }
    if ((param_2 * 2 < 0xfff00000) && (((int)uVar4 < 0 || (param_4 * 2 < 0xfff00000)))) {
      if (uVar2 == 0xffe00000) {
        uVar6 = ((int)param_2 >> 0x1f) * -3 + 2;
        if (unaff_r5 == 0) {
          uVar6 = uVar6 + (1 - ((int)param_4 >> 0x1f));
        }
      }
      else {
        uVar6 = param_4 >> 0x1f;
      }
    }
    else {
      uVar6 = 8;
    }
  }
  else {
LAB_08028cbe:
    uVar6 = 9;
  }
  uVar5 = uVar4 >> (uVar6 * 3 & 0xff) & 7;
  uVar4 = uVar5 - 4;
  switch(uVar5) {
  case 4:
    param_1 = param_3;
    param_2 = param_4;
  case 5:
    bVar9 = CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)(param_1 != 0));
    uVar2 = param_2 * 2 + (uint)(param_1 != 0);
    bVar8 = uVar2 != 0;
    if (bVar8) {
      bVar9 = uVar2 < 0x200001;
    }
    if (bVar9 && (bVar8 && uVar2 != 0x200000)) {
      uVar4 = puVar7[1] & 0xfbffffff;
    }
    if (!bVar9 || (!bVar8 || uVar2 == 0x200000)) {
      return param_1;
    }
    if ((in_fpscr & 0x1000000) != 0) {
      return 0;
    }
    if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    uVar10 = FUN_08028f2a(param_1,param_2);
    param_1 = (uint)uVar10;
    param_2 = ((uint)((ulonglong)uVar10 >> 0x20) | param_7) + (param_5 + 0x5ff) * 0x100000;
    uVar4 = uVar4 | 0x20000080;
    break;
  case 6:
    if (uVar2 == 0xffe00000 || 0x1fffff < uVar3) {
      param_1 = param_3;
    }
    return param_1;
  case 7:
    uVar5 = puVar7[1];
    if (uVar6 * 3 == 0x1b) {
      if (uVar2 == 0xffe00000 || 0xfffff < uVar3) {
        uVar5 = uVar5 | 0x8000;
      }
      else {
        uVar5 = uVar5 | 0x4000;
      }
    }
    if ((uVar5 & 0x70) == 0) {
      param_3 = param_2;
    }
    if ((uVar5 & 0x30000000 & ~(in_fpscr << 0x12)) != 0) {
      uVar5 = uVar5 | 0x40000000;
    }
    uVar4 = uVar5 | in_fpscr & 0x1c00000;
    uVar2 = uVar5 & 0xf;
    bVar9 = uVar2 == 10 || uVar2 == 8;
    if (uVar2 == 10 || uVar2 == 8) {
      bVar9 = (~uVar4 & 0x20000) == 0;
    }
    else {
      uVar4 = uVar4 | (uVar5 & 0x70) << 3;
    }
    if (bVar9) {
      uVar4 = uVar4 | 0xc00000;
    }
    if ((uVar4 & 0x20000000) == 0) {
      if ((uVar4 & 0x10000000) == 0) {
        if ((uVar4 & 0x40000000) != 0) {
          if ((in_fpscr & 0x1000) == 0) {
            return param_1;
          }
          break;
        }
        if ((uVar4 & 0x8000000) == 0) {
          if ((in_fpscr & 0x100) == 0) {
            if ((uVar4 & 0x40) != 0) {
              uVar2 = param_2;
              if ((uVar4 & 0x80) == 0) {
                uVar2 = param_1;
              }
              if ((uVar4 & 0x10) == 0) {
                uVar2 = DAT_080297f8 | uVar2 & 0x80000000;
              }
              else {
                param_2 = DAT_080297f4 | uVar2 & 0x80000000;
                uVar2 = DAT_080297f0;
              }
              uVar2 = FUN_08029adc(uVar2,param_2);
              return uVar2;
            }
            if ((uVar4 & 0xc000) != 0) {
              bVar9 = (uVar4 & 0x8000) != 0;
              if (bVar9) {
                param_1 = param_3;
                param_2 = param_4;
              }
              if (bVar9) {
                uVar4 = uVar4 ^ (uVar4 & 0x100) >> 1;
              }
              if ((uVar4 & 0x80) == 0) {
                param_1 = param_1 | 0x400000;
              }
              else {
                param_2 = param_2 | 0x80000;
              }
              uVar2 = FUN_08029adc(param_1,param_2);
              return uVar2;
            }
            uVar3 = DAT_080297f0;
            uVar2 = DAT_080297f4;
            if ((uVar4 & 0x10) == 0) {
              uVar3 = DAT_080297f8;
              uVar2 = param_2;
            }
            uVar2 = FUN_08029adc(uVar3,uVar2);
            return uVar2;
          }
          break;
        }
        if ((in_fpscr & 0x200) != 0) break;
        if ((uVar4 & 0x40) != 0) {
          return 0x80000001;
        }
        if ((uVar4 & 0x10) == 0) {
          param_4 = param_3 ^ param_1;
        }
        else {
          param_4 = param_2 ^ param_4;
        }
        if ((uVar4 & 0xf) == 10) {
          param_4 = 0xffffffff;
        }
        in_fpscr = 0;
        uVar2 = uVar4;
      }
      else {
        if ((in_fpscr & 0x400) != 0) break;
        uVar2 = uVar4 & 0xefffffff;
        param_4 = param_2;
        if ((uVar4 & 0x80) == 0) {
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
          if ((uVar4 & 0x10) == 0) {
            param_1 = DAT_080297ec | param_4;
          }
          else {
            param_2 = DAT_080297e8 | param_4;
            param_1 = DAT_080297e4;
          }
          uVar4 = uVar2;
          if ((in_fpscr & 0x1000) == 0) {
            return param_1;
          }
          break;
        }
      }
      if ((uVar2 & 0x10) == 0) {
        param_1 = DAT_080297e0 | param_4 & 0x80000000;
      }
      else {
        param_2 = DAT_080297dc | param_4 & 0x80000000;
        param_1 = DAT_080297d8;
      }
      uVar4 = uVar2;
      if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
    }
    else if ((in_fpscr & 0x800) == 0) {
      return param_1;
    }
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x08028cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(puVar7 + uVar5 + 2))();
    return uVar2;
  }
  uVar2 = FUN_08001d58(param_1,param_2);
  if ((uVar4 & 0xf) != 9) {
    return uVar2;
  }
  if ((uVar4 & 0x100000) == 0) {
    return (uint)((uVar4 & uVar2 << 0x10) != 0);
  }
  if ((uVar4 & 0x70000) == 0) {
    return uVar2 << 0x1d;
  }
  if ((uVar2 & 8) == 0) {
    return 2 - uVar2;
  }
  return uVar2;
}

