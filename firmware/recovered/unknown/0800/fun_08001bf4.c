/**
 * @brief fun_08001bf4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001bf4, Ghidra name FUN_08001bf4, 392 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08001bf4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int local_60;
  uint local_5c;
  int iStack_58;
  uint local_54 [8];
  undefined4 *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  
  param_3[3] = param_2;
  param_3[5] = DAT_08001c0c + 0x8001bfc;
  param_3[8] = DAT_08001c10 + 0x8001c02;
  param_3[4] = 0;
  iVar11 = 0;
  iVar8 = 0;
  local_30 = 1;
  local_34 = param_3 + 3;
  local_2c = param_1;
  puStack_28 = param_3;
LAB_08001e34:
  do {
    while( true ) {
      iVar1 = (*(code *)param_3[5])(local_34,1);
      if (iVar1 == 0) {
        return iVar11;
      }
      if (iVar1 == 0x25) break;
      iVar2 = (*(code *)param_3[8])();
      if (iVar2 == 0) {
        iVar2 = (*(code *)param_3[6])(local_2c);
        if (iVar2 != iVar1) {
          (*(code *)param_3[7])(local_2c);
          goto joined_r0x08001e94;
        }
LAB_08001e88:
        iVar8 = iVar8 + 1;
      }
      else {
        do {
          (*(code *)param_3[5])(local_34,1);
          iVar1 = (*(code *)param_3[8])();
        } while (iVar1 != 0);
        (*(code *)param_3[5])(local_34,0xffffffff);
        while( true ) {
          (*(code *)param_3[6])(local_2c);
          iVar1 = (*(code *)param_3[8])();
          if (iVar1 == 0) break;
          iVar8 = iVar8 + 1;
        }
        (*(code *)param_3[7])(local_2c);
      }
    }
    iVar2 = 0;
    iVar1 = (*(code *)param_3[5])(local_34,0);
    if (iVar1 == 0x2a) {
      (*(code *)param_3[5])(local_34,1);
    }
    iVar9 = DAT_0800218c;
    uVar7 = (uint)(iVar1 == 0x2a);
    while (iVar1 = (*(code *)param_3[5])(local_34,1), iVar1 - 0x30U < 10) {
      if (iVar9 < iVar2) {
        return iVar11;
      }
      iVar2 = iVar1 + iVar2 * 10 + -0x30;
      if (iVar2 < 0) {
        return iVar11;
      }
      uVar7 = uVar7 | 0x10;
    }
    if (-1 < (int)(uVar7 << 0x1b)) {
      iVar2 = 0x7fffffff;
    }
    if (iVar1 == 0x6c) {
      iVar1 = (*(code *)param_3[5])(local_34,1);
      if (iVar1 != 0x6c) {
        uVar7 = uVar7 | 4;
        goto LAB_08001f40;
      }
LAB_08001f16:
      uVar7 = uVar7 | 2;
LAB_08001f38:
      iVar1 = (*(code *)param_3[5])(local_34,1);
    }
    else {
      if (iVar1 == 0x4c) {
        uVar7 = uVar7 | 0x20;
        goto LAB_08001f38;
      }
      if (iVar1 == 0x68) {
        iVar1 = (*(code *)param_3[5])(local_34,1);
        if (iVar1 == 0x68) {
          uVar7 = uVar7 | 0x800;
          goto LAB_08001f38;
        }
        uVar7 = uVar7 | 8;
      }
      else {
        if (iVar1 == 0x6a) goto LAB_08001f16;
        if ((iVar1 == 0x74) || (iVar1 == 0x7a)) goto LAB_08001f38;
      }
    }
LAB_08001f40:
    param_3[1] = uVar7;
    param_3[2] = iVar2;
    if (iVar1 == 0x65) goto LAB_08001fc4;
    if (iVar1 < 0x66) {
      if (iVar1 == 0x58) {
LAB_08002044:
        param_3[1] = uVar7 | 0x40;
        if ((int)(uVar7 << 0x1e) < 0) goto LAB_08002052;
LAB_08002060:
        uVar6 = 0x10;
LAB_08002064:
        iVar1 = FUN_08000bee(0xfffffffe,local_2c,uVar6,param_3);
      }
      else if (iVar1 < 0x59) {
        if (iVar1 != 0x45) {
          if (iVar1 < 0x46) {
            if (iVar1 == 0x25) {
              iVar2 = (*(code *)param_3[6])(local_2c);
              if (iVar2 != 0x25) {
                (*(code *)param_3[7])(local_2c);
joined_r0x08001e94:
                if (iVar2 != -1) {
                  return iVar11;
                }
                if (iVar11 == 0) {
                  return -1;
                }
                return iVar11;
              }
              goto LAB_08001e88;
            }
            if (iVar1 != 0x41) {
              return iVar11;
            }
          }
          else if ((iVar1 != 0x46) && (iVar1 != 0x47)) {
            return iVar11;
          }
        }
LAB_08001fc4:
        iVar1 = thunk_FUN_08001940(0xfffffffe,local_2c,&local_60,param_3);
      }
      else {
        if (iVar1 != 0x5b) {
          if (iVar1 == 0x61) goto LAB_08001fc4;
          if (iVar1 != 99) {
            if (iVar1 != 100) {
              return iVar11;
            }
LAB_08002032:
            uVar6 = 10;
            param_3[1] = uVar7 | 0x40;
            goto joined_r0x08001fe2;
          }
        }
LAB_08002070:
        uVar10 = 0;
        iVar2 = 0;
        iVar9 = 0;
        if (iVar1 == 99) {
          if (-1 < (int)(uVar7 << 0x1b)) {
            param_3[2] = 1;
          }
          iVar2 = 1;
        }
        else if (iVar1 == 0x5b) {
          iVar1 = (*(code *)param_3[5])(local_34,1,(code *)param_3[5],0);
          bVar12 = iVar1 == 0x5e;
          if (bVar12) {
            iVar1 = (*(code *)param_3[5])(local_34,1);
          }
          uVar10 = (uint)bVar12;
          if (param_3[4] == 0) {
            iVar5 = 0;
            do {
              local_54[iVar5] = 0;
              iVar5 = iVar5 + 1;
            } while (iVar5 < 8);
          }
          do {
            if (iVar1 == 0) {
              return iVar11;
            }
            if (param_3[4] == 0) {
              local_54[(int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5] =
                   local_54[(int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5] |
                   1 << (iVar1 % 0x20 & 0xffU);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar1 = (*(code *)param_3[5])(local_34,1);
          } while (iVar1 != 0x5d);
          if (uVar10 != 0) {
            iVar1 = 0;
            do {
              local_54[iVar1] = ~local_54[iVar1];
              iVar1 = iVar1 + 1;
            } while (iVar1 < 8);
          }
        }
        if (param_3[4] == 0) {
          iVar1 = -2;
          local_60 = iVar2;
        }
        else {
          iVar1 = -2;
          local_60 = iVar9;
          local_5c = uVar10;
          iStack_58 = iVar2;
        }
      }
LAB_08002160:
      if (iVar1 < 0) {
        if (iVar1 != -1) {
          return iVar11;
        }
        if (local_30 != 0) {
          return -1;
        }
        return iVar11;
      }
      if ((uVar7 & 1) == 0) {
        iVar11 = iVar11 + 1;
      }
      iVar8 = iVar8 + iVar1;
      local_30 = 0;
      goto LAB_08001e34;
    }
    if (iVar1 == 0x6f) {
      uVar6 = 8;
      param_3[1] = uVar7 | 0x40;
joined_r0x08001fe2:
      if (-1 < (int)(uVar7 << 0x1e)) goto LAB_08002064;
LAB_08002052:
      iVar1 = -2;
      goto LAB_08002160;
    }
    if (0x6f < iVar1) {
      if (iVar1 != 0x70) {
        if (iVar1 == 0x73) goto LAB_08002070;
        if (iVar1 == 0x75) goto LAB_08002032;
        if (iVar1 != 0x78) {
          return iVar11;
        }
        goto LAB_08002044;
      }
      param_3[1] = uVar7 & 0xfffff7f1;
      goto LAB_08002060;
    }
    if ((iVar1 == 0x66) || (iVar1 == 0x67)) goto LAB_08001fc4;
    if (iVar1 == 0x69) {
      uVar6 = 0;
      param_3[1] = uVar7 | 0x40;
      goto joined_r0x08001fe2;
    }
    if (iVar1 != 0x6e) {
      return iVar11;
    }
    if ((uVar7 & 1) == 0) {
      puVar3 = (undefined4 *)*param_3;
      *param_3 = puVar3 + 1;
      piVar4 = (int *)*puVar3;
      if ((int)(uVar7 << 0x14) < 0) {
        *(char *)piVar4 = (char)iVar8;
      }
      else if ((int)(uVar7 << 0x1c) < 0) {
        *(short *)piVar4 = (short)iVar8;
      }
      else if ((int)(uVar7 << 0x1e) < 0) {
        *piVar4 = iVar8;
        piVar4[1] = iVar8 >> 0x1f;
      }
      else {
        *piVar4 = iVar8;
      }
    }
  } while( true );
}

