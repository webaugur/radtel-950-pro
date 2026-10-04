/**
 * @brief fun_0801267c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801267c, Ghidra name FUN_0801267c, 1078 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801267c(uint param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = DAT_08012a8c;
  if (0x80000000 < param_1) {
    uVar4 = (param_1 & 0x7fffffff) >> 7;
    uVar2 = (param_1 & 0x7f) >> 4;
    switch(uVar4) {
    case 0:
      param_3 = DAT_08012a8c;
      break;
    case 1:
      param_3 = DAT_08012a8c + 1;
      break;
    case 2:
      param_3 = DAT_08012a8c + 2;
      break;
    case 3:
      param_3 = DAT_08012a8c + 3;
      break;
    case 4:
      param_3 = DAT_08012a8c + 4;
      break;
    case 5:
      param_3 = DAT_08012a8c + 5;
    }
    if (uVar2 == 0) {
      *param_3 = *param_3 & 0xfffffff0;
    }
    else if (uVar2 == 1) {
      if (uVar4 == 1) {
        if ((param_1 & 0xf) < 5) {
          *param_3 = *param_3 & 0xffffffcf;
        }
        else {
          *param_3 = *param_3 & 0xffffff3f;
        }
      }
      else {
        *param_3 = *param_3 & 0xffffff0f;
      }
    }
    else if (uVar2 == 2) {
      *param_3 = *param_3 & 0xfffff0ff;
    }
    else if (uVar2 == 3) {
      *param_3 = *param_3 & 0xffff0fff;
    }
    else if (uVar2 == 4) {
      *param_3 = *param_3 & 0xfff0ffff;
    }
    else if (uVar2 == 5) {
      *param_3 = *param_3 & 0xff0fffff;
    }
    else if (uVar2 == 6) {
      *param_3 = *param_3 & 0xf0ffffff;
    }
    else if (uVar2 == 7) {
      *param_3 = *param_3 & 0xfffffff;
    }
    if (param_2 != 1) {
      return;
    }
    *param_3 = *param_3 | (param_1 & 0xf) << (uVar2 << 2);
    return;
  }
  if (param_1 != 0x40000) {
    if ((int)param_1 < 0x40001) {
      if (param_1 == 0x200) {
        DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xfffffcff;
        if (param_2 != 1) {
          return;
        }
        puVar1[-7] = puVar1[-7] | 0x200;
        return;
      }
      if ((int)param_1 < 0x201) {
        if (param_1 == 0x10) {
          DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xffffffcf;
          if (param_2 != 1) {
            return;
          }
          puVar1[-7] = puVar1[-7] | 0x10;
          return;
        }
        if (0x10 < (int)param_1) {
          if (param_1 == 0x30) {
            DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xffffffcf;
            if (param_2 != 1) {
              return;
            }
            puVar1[-7] = puVar1[-7] | 0x30;
            return;
          }
          if (param_1 == 0x40) {
            DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xffffff3f;
            if (param_2 != 1) {
              return;
            }
            puVar1[-7] = puVar1[-7] | 0x40;
            return;
          }
          if (param_1 == 0xc0) {
            DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xffffff3f;
            if (param_2 != 1) {
              return;
            }
            puVar1[-7] = puVar1[-7] | 0xc0;
            return;
          }
          if (param_1 != 0x100) {
            return;
          }
          DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xfffffcff;
          if (param_2 != 1) {
            return;
          }
          puVar1[-7] = puVar1[-7] | 0x100;
          return;
        }
        if (param_1 == 1) {
          DAT_08012a8c[-7] = DAT_08012a8c[-7] & DAT_08012a98;
          if (param_2 != 1) {
            return;
          }
          puVar1[-7] = puVar1[-7] | 1;
          return;
        }
        if (((param_1 != 2) && (param_1 != 4)) && (param_1 != 8)) {
          return;
        }
      }
      else {
        if (param_1 == 0x4000) {
          DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xffff9fff;
          if (param_2 != 1) {
            return;
          }
          puVar1[-7] = puVar1[-7] | 0x4000;
          return;
        }
        if ((int)param_1 < 0x4001) {
          if (param_1 == 0x300) {
            DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xfffffcff;
            if (param_2 != 1) {
              return;
            }
            puVar1[-7] = puVar1[-7] | 0x300;
            return;
          }
          if (param_1 == 0x800) {
            DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xfffff3ff;
            if (param_2 != 1) {
              return;
            }
            puVar1[-7] = puVar1[-7] | 0x800;
            return;
          }
          if (param_1 == 0xc00) {
            DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xfffff3ff;
            if (param_2 != 1) {
              return;
            }
            puVar1[-7] = puVar1[-7] | 0xc00;
            return;
          }
          if (param_1 != 0x1000) {
            return;
          }
        }
        else {
          if (param_1 == 0x6000) {
            DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xffff9fff;
            if (param_2 != 1) {
              return;
            }
            puVar1[-7] = puVar1[-7] | 0x6000;
            return;
          }
          if (((param_1 != 0x8000) && (param_1 != 0x10000)) && (param_1 != 0x20000)) {
            return;
          }
        }
      }
    }
    else {
      if (param_1 == 0x20000000) {
        DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xdfffffff;
        if (param_2 != 1) {
          return;
        }
        puVar1[-7] = puVar1[-7] | 0x20000000;
        return;
      }
      if (0x20000000 < (int)param_1) {
        iVar3 = param_1 - DAT_08012a90;
        if (param_1 != DAT_08012a90) {
          if ((int)param_1 < (int)DAT_08012a90) {
            if (param_1 == 0x40000000) {
              DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xbfffffff;
              if (param_2 != 1) {
                return;
              }
              puVar1[-7] = puVar1[-7] | 0x40000000;
              return;
            }
            iVar3 = param_1 + 0xbfffffe0;
            if (((iVar3 != 0) && (iVar3 != 0x3e0)) && (iVar3 + DAT_08012a94 != 0)) {
              return;
            }
          }
          else {
            if (iVar3 == 0x40000) {
              DAT_08012a8c[-1] = DAT_08012a8c[-1] & 0xffe7ffff;
              if (param_2 != 1) {
                return;
              }
              puVar1[-1] = puVar1[-1] | 0x80000;
              return;
            }
            if (iVar3 == 0xc0000) {
              DAT_08012a8c[-1] = DAT_08012a8c[-1] & 0xffe7ffff;
              if (param_2 != 1) {
                return;
              }
              puVar1[-1] = puVar1[-1] | 0x100000;
              return;
            }
            if (iVar3 == 0x140000) {
              DAT_08012a8c[-1] = DAT_08012a8c[-1] & 0xffe7ffff;
              if (param_2 != 1) {
                return;
              }
              puVar1[-1] = puVar1[-1] | 0x180000;
              return;
            }
            if (iVar3 != 0x1c0000) {
              return;
            }
          }
        }
        DAT_08012a8c[-1] = DAT_08012a8c[-1] & ~(param_1 & 0x3fffff);
        if (param_2 != 1) {
          return;
        }
        puVar1[-1] = puVar1[-1] | param_1 & 0x3fffff;
        return;
      }
      if (param_1 == 0x800000) {
        DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xff7fffff;
        if (param_2 != 1) {
          return;
        }
        puVar1[-7] = puVar1[-7] | 0x800000;
        return;
      }
      if (0x800000 < (int)param_1) {
        if (param_1 == 0x1000000) {
          DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xf8ffffff;
          if (param_2 != 1) {
            return;
          }
          puVar1[-7] = puVar1[-7] | 0x1000000;
          return;
        }
        if (param_1 == 0x2000000) {
          DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xf8ffffff;
          if (param_2 != 1) {
            return;
          }
          puVar1[-7] = puVar1[-7] | 0x2000000;
          return;
        }
        if (param_1 == 0x4000000) {
          DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xf8ffffff;
          if (param_2 != 1) {
            return;
          }
          puVar1[-7] = puVar1[-7] | 0x4000000;
          return;
        }
        if (param_1 != 0x10000000) {
          return;
        }
        DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xefffffff;
        if (param_2 == 1) {
          puVar1[-7] = puVar1[-7] | 0x10000000;
          return;
        }
        return;
      }
      if ((param_1 != 0x80000) && (param_1 != 0x100000)) {
        if (param_1 == 0x200000) {
          DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xffdfffff;
          if (param_2 != 1) {
            return;
          }
          puVar1[-7] = puVar1[-7] | 0x200000;
          return;
        }
        if (param_1 != 0x400000) {
          return;
        }
        DAT_08012a8c[-7] = DAT_08012a8c[-7] & 0xffbfffff;
        if (param_2 == 1) {
          puVar1[-7] = puVar1[-7] | 0x400000;
          return;
        }
        return;
      }
    }
  }
  DAT_08012a8c[-7] = DAT_08012a8c[-7] & ~param_1;
  if (param_2 == 1) {
    puVar1[-7] = puVar1[-7] | param_1;
  }
  return;
}

