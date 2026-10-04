/**
 * @brief fun_080283e8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080283e8, Ghidra name FUN_080283e8, 28 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_080283e8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  
  if ((param_2 & 0x80000) == 0) {
    in_r12 = in_r12 | 0x4000;
  }
  else {
    if ((in_r12 & 0x4f) != 0x48) {
      uVar2 = in_r12 & 0xf;
      if (uVar2 != 9) {
        if (uVar2 == 10) {
          if ((in_r12 & 0x40) != 0) {
            param_1 = 0x80000000;
          }
          return param_1;
        }
        if (uVar2 != 8) {
          return param_1;
        }
        if ((in_r12 & 0x40) == 0) {
          if ((in_r12 & 0x10) != 0) {
            return param_1 << 0x1d;
          }
          return param_2 & 0xff000000 | param_1 >> 0x1d | (param_2 & 0xffffff) << 3;
        }
        if ((in_r12 & 0x10000) == 0) {
          if ((in_r12 & 0x20) == 0) {
            if ((in_r12 & 0x10) == 0) {
              uVar2 = 0x7fffffff;
              param_2 = param_1;
            }
            else {
              uVar2 = 0xffffffff;
            }
            if ((param_2 & 0x80000000) != 0) {
              uVar2 = ~uVar2;
            }
            return uVar2;
          }
          if ((in_r12 & 0x10) != 0) {
            param_1 = param_2;
          }
          uVar2 = 0xffffffff;
          if ((param_1 & 0x80000000) != 0) {
            uVar2 = 0;
          }
          return uVar2;
        }
        return 0;
      }
      uVar2 = 8;
      goto LAB_08029cd4;
    }
    param_3 = 0x48;
  }
  if ((in_r12 & 0x70) == 0) {
    param_3 = param_2;
  }
  uVar2 = in_r12 & 0x30000000;
  if ((uVar2 & ~(in_fpscr << 0x12)) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar3 = (in_r12 & 0x7fffffff) >> 0x1a & ~(in_fpscr >> 8);
  if ((uVar2 & in_fpscr << 0x12) != 0) {
    uVar3 = uVar3 & 0xffffffef;
  }
  uVar3 = in_fpscr | uVar3;
  uVar4 = in_r12 | in_fpscr & 0x1c00000;
  uVar2 = in_r12 & 0xf;
  bVar5 = uVar2 == 10 || uVar2 == 8;
  if (uVar2 == 10 || uVar2 == 8) {
    bVar5 = (~uVar4 & 0x20000) == 0;
    in_r12 = uVar4;
  }
  else {
    in_r12 = uVar4 | (in_r12 & 0x70) << 3;
  }
  if (bVar5) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) == 0) {
        if ((in_r12 & 0x8000000) == 0) {
          if ((in_fpscr & 0x100) == 0) {
            if ((in_r12 & 0x40) != 0) {
              uVar2 = param_2;
              if ((in_r12 & 0x80) == 0) {
                uVar2 = param_1;
              }
              if ((in_r12 & 0x10) == 0) {
                uVar2 = DAT_080297f8 | uVar2 & 0x80000000;
              }
              else {
                param_2 = DAT_080297f4 | uVar2 & 0x80000000;
                uVar2 = DAT_080297f0;
              }
              uVar2 = FUN_08029adc(uVar2,param_2);
              return uVar2;
            }
            if ((in_r12 & 0xc000) != 0) {
              bVar5 = (in_r12 & 0x8000) != 0;
              if (bVar5) {
                param_1 = param_3;
                param_2 = param_4;
              }
              if (bVar5) {
                in_r12 = in_r12 ^ (in_r12 & 0x100) >> 1;
              }
              if ((in_r12 & 0x80) == 0) {
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
            if ((in_r12 & 0x10) == 0) {
              uVar3 = DAT_080297f8;
              uVar2 = param_2;
            }
            uVar2 = FUN_08029adc(uVar3,uVar2);
            return uVar2;
          }
        }
        else if ((in_fpscr & 0x200) == 0) {
          if ((in_r12 & 0x40) != 0) {
            return 0x80000001;
          }
          if ((in_r12 & 0x10) == 0) {
            param_3 = param_3 ^ param_1;
          }
          else {
            param_3 = param_2 ^ param_4;
          }
          if ((in_r12 & 0xf) == 10) {
            param_3 = 0xffffffff;
          }
          uVar3 = 0;
          uVar2 = in_r12;
          goto LAB_08029736;
        }
      }
      else if ((in_fpscr & 0x1000) == 0) {
        return param_1;
      }
    }
    else if ((in_fpscr & 0x400) == 0) {
      uVar2 = in_r12 & 0xefffffff;
      param_3 = param_2;
      if ((in_r12 & 0x80) == 0) {
        param_3 = param_1;
      }
      param_3 = param_3 & 0x80000000;
      if (param_3 == 0) {
        cVar1 = (char)(in_fpscr >> 0x10);
      }
      else {
        cVar1 = (char)((uVar3 << 9) >> 0x18);
      }
      if (cVar1 < '\0') {
        if ((in_r12 & 0x10) == 0) {
          param_1 = DAT_080297ec | param_3;
        }
        else {
          param_2 = DAT_080297e8 | param_3;
          param_1 = DAT_080297e4;
        }
        param_4 = uVar3;
        in_r12 = uVar2;
        if ((in_fpscr & 0x1000) == 0) {
          return param_1;
        }
      }
      else {
LAB_08029736:
        param_3 = param_3 & 0x80000000;
        if ((uVar2 & 0x10) == 0) {
          param_1 = DAT_080297e0 | param_3;
        }
        else {
          param_2 = DAT_080297dc | param_3;
          param_1 = DAT_080297d8;
        }
        param_4 = uVar3;
        in_r12 = uVar2;
        if ((uVar3 & 0x1000) == 0) {
          return param_1;
        }
      }
    }
  }
  else if ((in_fpscr & 0x800) == 0) {
    return param_1;
  }
  uVar2 = FUN_08001d58(param_1,param_2,param_3,param_4,in_r12);
  if ((in_r12 & 0xf) != 9) {
    return uVar2;
  }
LAB_08029cd4:
  if ((in_r12 & 0x100000) == 0) {
    return (uint)((in_r12 & uVar2 << 0x10) != 0);
  }
  if ((in_r12 & 0x70000) != 0) {
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  return uVar2 << 0x1d;
}

