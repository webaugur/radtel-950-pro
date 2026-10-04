/**
 * @brief fun_08001f8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001f8c, Ghidra name FUN_08001f8c, 510 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08001f8c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r10;
  bool bVar7;
  undefined4 in_stack_0000002c;
  int in_stack_00000030;
  undefined4 in_stack_00000034;
  
code_r0x08001f8c:
  if (param_1 == 0x69) {
    uVar6 = 0;
    unaff_r4[1] = unaff_r5 | 0x40;
    goto joined_r0x08001fe2;
  }
  if (param_1 != 0x6e) {
    return unaff_r10;
  }
  if ((unaff_r5 & 1) == 0) {
    puVar4 = (undefined4 *)*unaff_r4;
    *unaff_r4 = puVar4 + 1;
    piVar5 = (int *)*puVar4;
    if ((int)(unaff_r5 << 0x14) < 0) {
      *(char *)piVar5 = (char)unaff_r6;
    }
    else if ((int)(unaff_r5 << 0x1c) < 0) {
      *(short *)piVar5 = (short)unaff_r6;
    }
    else if ((int)(unaff_r5 << 0x1e) < 0) {
      *piVar5 = unaff_r6;
      piVar5[1] = unaff_r6 >> 0x1f;
    }
    else {
      *piVar5 = unaff_r6;
    }
  }
  do {
    while( true ) {
      iVar2 = (*(code *)unaff_r4[5])(in_stack_0000002c,1);
      if (iVar2 == 0) {
        return unaff_r10;
      }
      if (iVar2 == 0x25) break;
      iVar3 = (*(code *)unaff_r4[8])();
      if (iVar3 == 0) {
        iVar3 = (*(code *)unaff_r4[6])(in_stack_00000034);
        if (iVar3 != iVar2) {
          (*(code *)unaff_r4[7])(in_stack_00000034);
          goto joined_r0x08001fbe;
        }
LAB_08001e88:
        unaff_r6 = unaff_r6 + 1;
      }
      else {
        do {
          (*(code *)unaff_r4[5])(in_stack_0000002c,1);
          iVar2 = (*(code *)unaff_r4[8])();
        } while (iVar2 != 0);
        (*(code *)unaff_r4[5])(in_stack_0000002c,0xffffffff);
        while( true ) {
          (*(code *)unaff_r4[6])(in_stack_00000034);
          iVar2 = (*(code *)unaff_r4[8])();
          if (iVar2 == 0) break;
          unaff_r6 = unaff_r6 + 1;
        }
        (*(code *)unaff_r4[7])(in_stack_00000034);
      }
    }
    iVar3 = 0;
    iVar2 = (*(code *)unaff_r4[5])(in_stack_0000002c,0);
    if (iVar2 == 0x2a) {
      (*(code *)unaff_r4[5])(in_stack_0000002c,1);
    }
    iVar1 = DAT_0800218c;
    unaff_r5 = (uint)(iVar2 == 0x2a);
    while (param_1 = (*(code *)unaff_r4[5])(in_stack_0000002c,1), param_1 - 0x30U < 10) {
      if (iVar1 < iVar3) {
        return unaff_r10;
      }
      iVar3 = param_1 + iVar3 * 10 + -0x30;
      if (iVar3 < 0) {
        return unaff_r10;
      }
      unaff_r5 = unaff_r5 | 0x10;
    }
    if (-1 < (int)(unaff_r5 << 0x1b)) {
      iVar3 = 0x7fffffff;
    }
    if (param_1 == 0x6c) {
      param_1 = (*(code *)unaff_r4[5])(in_stack_0000002c,1);
      if (param_1 != 0x6c) {
        unaff_r5 = unaff_r5 | 4;
        goto LAB_08001f40;
      }
LAB_08001f16:
      unaff_r5 = unaff_r5 | 2;
LAB_08001f38:
      param_1 = (*(code *)unaff_r4[5])(in_stack_0000002c,1);
    }
    else {
      if (param_1 == 0x4c) {
        unaff_r5 = unaff_r5 | 0x20;
        goto LAB_08001f38;
      }
      if (param_1 == 0x68) {
        param_1 = (*(code *)unaff_r4[5])(in_stack_0000002c,1);
        if (param_1 == 0x68) {
          unaff_r5 = unaff_r5 | 0x800;
          goto LAB_08001f38;
        }
        unaff_r5 = unaff_r5 | 8;
      }
      else {
        if (param_1 == 0x6a) goto LAB_08001f16;
        if ((param_1 == 0x74) || (param_1 == 0x7a)) goto LAB_08001f38;
      }
    }
LAB_08001f40:
    unaff_r4[1] = unaff_r5;
    unaff_r4[2] = iVar3;
    if (param_1 == 0x65) goto LAB_08001fc4;
    if (param_1 < 0x66) {
      if (param_1 == 0x58) {
LAB_08002044:
        unaff_r4[1] = unaff_r5 | 0x40;
        if ((int)(unaff_r5 << 0x1e) < 0) goto LAB_08002052;
LAB_08002060:
        uVar6 = 0x10;
        goto LAB_08002064;
      }
      if (param_1 < 0x59) {
        if (param_1 != 0x45) {
          if (param_1 < 0x46) {
            if (param_1 == 0x25) {
              iVar3 = (*(code *)unaff_r4[6])(in_stack_00000034);
              if (iVar3 != 0x25) {
                (*(code *)unaff_r4[7])(in_stack_00000034);
joined_r0x08001fbe:
                if (iVar3 != -1) {
                  return unaff_r10;
                }
                if (unaff_r10 == 0) {
                  return -1;
                }
                return unaff_r10;
              }
              goto LAB_08001e88;
            }
            if (param_1 != 0x41) {
              return unaff_r10;
            }
          }
          else if ((param_1 != 0x46) && (param_1 != 0x47)) {
            return unaff_r10;
          }
        }
LAB_08001fc4:
        iVar2 = thunk_FUN_08001940(0xfffffffe,in_stack_00000034);
      }
      else {
        if (param_1 != 0x5b) {
          if (param_1 == 0x61) goto LAB_08001fc4;
          if (param_1 != 99) {
            if (param_1 != 100) {
              return unaff_r10;
            }
            goto LAB_08002032;
          }
        }
LAB_08002070:
        if (param_1 == 99) {
          if (-1 < (int)(unaff_r5 << 0x1b)) {
            unaff_r4[2] = 1;
          }
        }
        else if (param_1 == 0x5b) {
          iVar2 = (*(code *)unaff_r4[5])(in_stack_0000002c,1,(code *)unaff_r4[5],0);
          bVar7 = iVar2 == 0x5e;
          if (bVar7) {
            iVar2 = (*(code *)unaff_r4[5])(in_stack_0000002c,1);
          }
          if (unaff_r4[4] == 0) {
            iVar3 = 0;
            do {
              *(undefined4 *)(&stack0x0000000c + iVar3 * 4) = 0;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 8);
          }
          do {
            if (iVar2 == 0) {
              return unaff_r10;
            }
            if (unaff_r4[4] == 0) {
              *(uint *)(&stack0x0000000c + ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1b)) >> 5) * 4
                       ) = *(uint *)(&stack0x0000000c +
                                    ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1b)) >> 5) * 4) |
                           1 << (iVar2 % 0x20 & 0xffU);
            }
            iVar2 = (*(code *)unaff_r4[5])(in_stack_0000002c,1);
          } while (iVar2 != 0x5d);
          if (bVar7) {
            iVar2 = 0;
            do {
              *(uint *)(&stack0x0000000c + iVar2 * 4) = ~*(uint *)(&stack0x0000000c + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < 8);
          }
        }
        if (unaff_r4[4] == 0) {
          iVar2 = -2;
        }
        else {
          iVar2 = -2;
        }
      }
    }
    else {
      if (param_1 == 0x6f) {
        uVar6 = 8;
        unaff_r4[1] = unaff_r5 | 0x40;
      }
      else {
        if (param_1 < 0x70) {
          if ((param_1 == 0x66) || (param_1 == 0x67)) goto LAB_08001fc4;
          goto code_r0x08001f8c;
        }
        if (param_1 == 0x70) {
          unaff_r4[1] = unaff_r5 & 0xfffff7f1;
          goto LAB_08002060;
        }
        if (param_1 == 0x73) goto LAB_08002070;
        if (param_1 != 0x75) {
          if (param_1 != 0x78) {
            return unaff_r10;
          }
          goto LAB_08002044;
        }
LAB_08002032:
        uVar6 = 10;
        unaff_r4[1] = unaff_r5 | 0x40;
      }
joined_r0x08001fe2:
      if ((int)(unaff_r5 << 0x1e) < 0) {
LAB_08002052:
        iVar2 = -2;
      }
      else {
LAB_08002064:
        iVar2 = FUN_08000bee(0xfffffffe,in_stack_00000034,uVar6);
      }
    }
    if (iVar2 < 0) {
      if (iVar2 != -1) {
        return unaff_r10;
      }
      if (in_stack_00000030 != 0) {
        return -1;
      }
      return unaff_r10;
    }
    if ((unaff_r5 & 1) == 0) {
      unaff_r10 = unaff_r10 + 1;
    }
    unaff_r6 = unaff_r6 + iVar2;
    in_stack_00000030 = 0;
  } while( true );
}

