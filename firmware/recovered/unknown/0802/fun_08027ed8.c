/**
 * @brief fun_08027ed8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027ed8, Ghidra name FUN_08027ed8, 674 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x080295b8) */
/* WARNING: Removing unreachable block (ram,0x08029cfe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_08027ed8(uint param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  
  uVar5 = (param_2 & 0x7fffffff) + 0xc8000000;
  bVar17 = uVar5 == 0x100000;
  uVar7 = param_2 & 0x80000000;
  if (uVar5 >= 0x100000) {
    bVar17 = uVar5 == 0xfe00000;
  }
  puVar13 = puRam08028194;
  if ((uVar5 < 0x100000 || 0xfe00000 < uVar5) || bVar17) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      return param_2;
    }
    if (uVar5 >> 0x14 != 0xfe) {
LAB_08027fe6:
      if ((int)uVar5 < 0x100000) {
        uVar10 = in_fpscr & 0xefffffff | 0x20000000;
        if ((in_fpscr & 0x800) == 0) {
          if ((in_fpscr & 0xc00000) != 0) {
            if ((int)uVar7 < 0) {
              uVar10 = uVar10 << 1;
            }
            if ((uVar10 & 0x800000) == 0) {
              uVar5 = uVar5 + 0xc000000;
              if ((int)uVar5 < 0) {
                uVar5 = uVar5 & 0xffffff;
              }
              bVar17 = (param_1 & 0x1fffffff) != 0;
              puVar13 = (undefined *)0x88;
              if (bVar17) {
                puVar13 = &DAT_40000088;
              }
              uVar5 = FUN_0802997c((uVar7 | uVar5 << 3) + (param_1 >> 0x1d) + (uint)bVar17,param_2,
                                   puVar13);
              return uVar5;
            }
          }
          uVar5 = uVar5 + 0xc000000;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 & 0xffffff;
          }
          uVar6 = 0x88;
          if ((param_1 & 0x1fffffff) != 0) {
            uVar6 = 0xc0000088;
          }
          uVar5 = FUN_0802997c(uVar7 | uVar5 << 3 | param_1 >> 0x1d,param_2,uVar6);
          return uVar5;
        }
        if (param_2 << 1 < 0x200000) {
          uVar7 = param_2 & 0x7fffffff;
          if (uVar7 == 0) {
            uVar7 = param_1 << LZCOUNT(param_1);
            uVar5 = LZCOUNT(param_1) + 0x15;
            uVar3 = (uVar7 >> 0xb) + uVar5 * -0x100000;
            param_1 = uVar7 << 0x15;
          }
          else {
            uVar5 = LZCOUNT(uVar7) - 0xb;
            uVar3 = param_1 >> (0x20 - uVar5 & 0xff);
            param_1 = param_1 << (uVar5 & 0xff);
            uVar3 = (uVar7 << (uVar5 & 0xff) | uVar3) + uVar5 * -0x100000;
          }
          uVar5 = uVar5 * 0x100000;
          param_2 = uVar3 ^ param_2 & 0x80000000;
          uVar10 = in_fpscr & 0xefffffff | 0x20000000;
        }
        param_2 = param_2 + 0xc000000;
      }
      else {
        if (0xffdfffff < param_2 << 1) {
                    /* WARNING: Subroutine does not return */
          FUN_08028c58();
        }
LAB_08027ff6:
        uVar7 = param_2 & 0x80000000;
        if ((in_fpscr & 0x400) == 0) {
          uVar3 = uVar7 | 0x7f800000;
          puVar13 = puRam08028198;
          goto LAB_08029610;
        }
        uVar10 = in_fpscr & 0xdfffffff | 0x10000000;
        param_2 = param_2 + 0xf4000000;
      }
      uVar7 = param_1;
      if ((uVar10 & 0xc00000) == 0) {
        uVar3 = uVar10 & 0x30000000;
        puVar14 = (undefined *)(uVar3 | 0x88);
        uVar10 = uVar5;
        if (((param_1 & 0x1fffffff) != 0) &&
           (puVar14 = (undefined *)(uVar3 | 0xc0000088), (param_1 & 0x10000000) != 0)) {
          uVar7 = param_1 + 0x20000000;
          param_2 = param_2 + (0xdfffffff < param_1);
          uVar10 = param_1 << 4;
          if (uVar10 == 0) {
            uVar7 = uVar7 & 0xdfffffff;
          }
          if (param_1 != uVar7) {
            puVar14 = (undefined *)(uVar3 | 0x40000088);
          }
        }
      }
      else {
        uVar3 = uVar10 & 0x30000000;
        uVar5 = param_1 * 8;
        puVar14 = (undefined *)(uVar3 | 0x88);
        if (uVar5 != 0) {
          puVar14 = (undefined *)(uVar3 | 0xc0000088);
          if ((int)param_2 < 0) {
            uVar10 = uVar10 << 1;
          }
          if ((uVar10 & 0x800000) == 0) {
            uVar7 = param_1 + 0x20000000;
            param_2 = param_2 + (0xdfffffff < param_1);
            puVar14 = (undefined *)(uVar3 | 0x40000088);
            if (uVar7 == 0) {
              uVar4 = (int)(param_2 * 4) >> 0x20;
              if ((_BYTE_ARRAY_080283e0 & (param_2 + 0x100000) * 2) == 0 ||
                  (_BYTE_ARRAY_080283e0 & (uVar5 + 0x100000) * 2) == 0) {
                if (((_BYTE_ARRAY_080283e0 | 0x200000) & ~(param_2 * 2)) == 0 ||
                    ((_BYTE_ARRAY_080283e0 | 0x200000) & ~(param_1 << 4)) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_08028c58();
                }
                if ((int)(param_2 ^ uVar5) < 0) {
                  uVar5 = uVar5 ^ 0x80000000;
                  bVar17 = uVar10 <= uVar4;
                  uVar7 = uVar4 - uVar10;
                  if (param_2 <= uVar5 && (uint)bVar17 <= param_2 - uVar5) {
                    bVar18 = CARRY4(uVar10,uVar7);
                    uVar10 = uVar10 + uVar7;
                    uVar3 = (param_2 - uVar5) - (uint)!bVar17 ^ 0x80000000;
                    uVar5 = uVar5 + uVar3 + bVar18;
                    bVar17 = uVar4 < uVar7;
                    uVar4 = uVar4 - uVar7;
                    param_2 = (param_2 - uVar3) - (uint)bVar17;
                  }
                  uVar8 = param_2 >> 0x14;
                  if (uVar10 == 0 && (uVar5 & 0xfffff) == 0) {
                    if (uVar4 == 0 && (param_2 & 0x7fffffff) == 0) {
                      return uVar4;
                    }
                    goto LAB_080293e6;
                  }
                  param_2 = param_2 & ~(uVar8 << 0x14);
                  if ((uVar8 & 0x7ff) == 0) {
                    bVar17 = uVar4 < uVar10;
                    uVar4 = uVar4 - uVar10;
                    param_2 = (param_2 - uVar5) - (uint)bVar17;
                    goto LAB_080293e6;
                  }
                  bVar17 = uVar10 != 0;
                  uVar10 = -uVar10;
                  uVar12 = (uVar8 - (uVar5 >> 0x14)) - 1;
                  uVar7 = -(uVar5 & 0x7fffffff);
                  if (bVar17) {
                    uVar7 = uVar7 - 1;
                  }
                  goto LAB_08029254;
                }
                uVar7 = uVar4 - uVar10;
                iVar11 = (param_2 + param_1 * -8) - (uint)(uVar10 > uVar4);
                if (param_2 <= uVar5 && (uint)(uVar10 <= uVar4) <= param_2 + param_1 * -8) {
                  bVar17 = CARRY4(uVar10,uVar7);
                  uVar10 = uVar10 + uVar7;
                  uVar5 = uVar5 + iVar11 + (uint)bVar17;
                  bVar17 = uVar4 < uVar7;
                  uVar4 = uVar4 - uVar7;
                  param_2 = (param_2 - iVar11) - (uint)bVar17;
                }
                uVar8 = param_2 >> 0x14;
                if (uVar10 == 0 && (uVar5 & 0x7fffffff) == 0) {
                  if ((uVar8 & 0x7ff) != 0) {
                    return uVar4;
                  }
                  if (uVar4 == 0 && (param_2 & 0x7fffffff) == 0) {
                    return uVar4;
                  }
                  goto LAB_080293e6;
                }
                param_2 = param_2 & ~(uVar8 << 0x14);
                if ((uVar8 & 0x7ff) == 0) {
                  bVar17 = CARRY4(uVar4,uVar10);
                  uVar4 = uVar4 + uVar10;
                  param_2 = param_2 + uVar5 + bVar17;
                  goto LAB_080293e6;
                }
                uVar7 = uVar5 & 0x7fffffff;
                uVar12 = (uVar8 - (uVar5 >> 0x14)) - 1;
              }
              else {
                if ((int)(param_2 ^ uVar5) < 0) {
                  uVar5 = uVar5 ^ 0x80000000;
                  bVar17 = uVar10 <= uVar4;
                  uVar7 = uVar4 - uVar10;
                  if (param_2 <= uVar5 && (uint)bVar17 <= param_2 - uVar5) {
                    bVar18 = CARRY4(uVar10,uVar7);
                    uVar10 = uVar10 + uVar7;
                    uVar3 = (param_2 - uVar5) - (uint)!bVar17 ^ 0x80000000;
                    uVar5 = uVar5 + uVar3 + bVar18;
                    bVar17 = uVar4 < uVar7;
                    uVar4 = uVar4 - uVar7;
                    param_2 = (param_2 - uVar3) - (uint)bVar17;
                  }
                  bVar17 = uVar10 != 0;
                  uVar10 = -uVar10;
                  uVar8 = param_2 >> 0x14;
                  uVar12 = uVar8 - (uVar5 >> 0x14);
                  param_2 = param_2 & ~(uVar8 << 0x14);
                  uVar7 = ((int)_BYTE_ARRAY_080283e0 >> 2) -
                          (uVar5 & ~((int)_BYTE_ARRAY_080283e0 >> 2));
                  if (bVar17) {
                    uVar7 = uVar7 - 1;
                  }
LAB_08029254:
                  if (uVar12 < 0x21) {
                    uVar3 = uVar10 >> (uVar12 & 0xff);
                    uVar5 = uVar4 + uVar3;
                    param_2 = param_2 + ((int)uVar7 >> (uVar12 & 0xff)) + (uint)CARRY4(uVar4,uVar3);
                    uVar4 = uVar7 << (0x20 - uVar12 & 0xff);
                    uVar3 = uVar5 + uVar4;
                    bVar17 = CARRY4(param_2,(uint)CARRY4(uVar5,uVar4));
                    iVar11 = param_2 + CARRY4(uVar5,uVar4);
                    uVar12 = 0x20 - uVar12;
joined_r0x08029318:
                    if (iVar11 < 0) {
                      uVar5 = uVar12 + 1 & 0xff;
                      bVar18 = uVar5 == 0 && bVar17 ||
                               uVar5 != 0 && (uVar10 << uVar5 - 1 & 0x80000000) != 0;
                      uVar5 = uVar10 << uVar5;
                      uVar4 = uVar3 * 2;
                      bVar17 = CARRY4(uVar3,uVar3);
                      uVar3 = uVar3 * 2 + (uint)bVar18;
                      uVar4 = iVar11 * 2 + (uint)(bVar17 || CARRY4(uVar4,(uint)bVar18));
                      uVar12 = uVar4 + uVar8 * 0x200000;
                      bVar17 = (uVar12 >> 0x14 & 1) != 0;
                      if (!bVar17 || uVar12 >> 0x15 == 0) {
                        if (bVar17) {
                          param_2 = ((int)uVar4 >> 1) + uVar8 * 0x100000;
                          uVar4 = (uint)((uVar4 & 1) != 0) << 0x1f | uVar3 >> 1;
LAB_080293e6:
                          if (param_2 << 1 == 0 && uVar4 == 0) {
                            return uVar4;
                          }
                          if (param_2 << 1 < 0x200000) {
                            uVar5 = FUN_080295ce();
                            return uVar5;
                          }
                          return uVar4;
                        }
                        iVar11 = uVar4 + 0x200000;
                        if (iVar11 == 0) {
                          uVar5 = uVar3 << LZCOUNT(uVar3);
                          if (uVar5 == 0) {
                            return uVar3;
                          }
                          iVar9 = ((uVar8 & 0xfffff7ff) - LZCOUNT(uVar3)) + -0x17;
                          uVar7 = uVar5 << 0x15;
                          uVar5 = uVar5 >> 0xb;
                        }
                        else {
                          uVar10 = LZCOUNT(iVar11) - 0xb;
                          iVar9 = ((uVar8 & 0xfffff7ff) - uVar10) + -2;
                          uVar5 = iVar11 << (uVar10 & 0xff) | uVar3 >> (0x20 - uVar10 & 0xff);
                          uVar7 = uVar3 << (uVar10 & 0xff);
                        }
                        if (-1 < iVar9) {
                          return uVar7;
                        }
                        param_2 = uVar5 + (uVar8 >> 0xb) * -0x80000000 + iVar9 * 0x100000 +
                                  0x60000000;
                        uVar4 = 0x12;
                        if ((in_fpscr & 0x1000000) != 0) {
                          return 0;
                        }
                        if ((in_fpscr & 0x800) != 0) {
                          puVar14 = &UNK_20000092;
                          uVar3 = uVar7;
                          goto LAB_08029cb0;
                        }
                        bVar17 = (int)param_2 < 0;
                        if (bVar17) {
                          uVar4 = 0x10012;
                        }
                        uVar10 = param_2 & ~((param_2 >> 0x14) << 0x14);
                        uVar3 = 0x601 - (param_2 >> 0x14 & 0xfffff7ff);
                        if ((int)uVar3 < 0) {
                          uVar3 = 0xffffff01;
                        }
                        uVar8 = uVar10 | 0x100000;
                        if (uVar3 < 0x36) {
                          if (uVar3 == 0x35) {
                            uVar3 = 0;
                            param_2 = 0;
                            uVar5 = 0x80000000;
                            if (uVar7 != 0 || (uVar10 & 0xfffff) != 0) {
                              uVar5 = 0x80000001;
                            }
                          }
                          else if (uVar3 < 0x15) {
                            uVar5 = uVar7 << (0x20 - uVar3 & 0xff);
                            param_2 = uVar8 >> (uVar3 & 0xff);
                            uVar3 = uVar8 << (0x20 - uVar3 & 0xff) | uVar7 >> (uVar3 & 0xff);
                          }
                          else {
                            uVar5 = uVar3 - 0x20;
                            if (uVar3 < 0x20 || uVar5 == 0) {
                              uVar3 = uVar8 << (-uVar5 & 0xff) | uVar7 >> (uVar3 & 0xff);
                              uVar5 = uVar7 << (-uVar5 & 0xff);
                              param_2 = 0;
                            }
                            else {
                              uVar3 = uVar8 >> (uVar5 & 0xff);
                              uVar5 = uVar8 << (0x20 - uVar5 & 0xff);
                              if (uVar7 != 0) {
                                uVar5 = uVar5 | 1;
                              }
                              param_2 = 0;
                            }
                          }
                        }
                        else {
                          uVar5 = 1;
                          param_2 = 0;
                          uVar3 = 0;
                        }
                        if (bVar17) {
                          param_2 = param_2 | 0x80000000;
                        }
                        if (uVar5 == 0) {
                          return uVar3;
                        }
                        if ((in_fpscr & 0xc00000) == 0) {
                          uVar7 = uVar5 & 0x80000000;
                          uVar5 = uVar5 << 1;
                          if (uVar7 != 0) {
                            if (uVar5 != 0) goto LAB_08029582;
                            uVar5 = 0;
                            param_2 = param_2 + (0xfffffffe < uVar3);
                            uVar3 = uVar3 + 1 & 0xfffffffe;
                          }
                        }
                        else {
                          if ((int)param_2 < 0) {
                            uVar7 = in_fpscr & 0x400000;
                          }
                          else {
                            uVar7 = in_fpscr & 0x800000;
                          }
                          if (uVar7 == 0) {
LAB_08029582:
                            bVar17 = 0xfffffffe < uVar3;
                            uVar3 = uVar3 + 1;
                            param_2 = param_2 + bVar17;
                          }
                        }
                        uVar7 = in_fpscr | 8;
                        puVar13 = (undefined *)(uVar4 & 0xfffeffff | 0x40000000);
                        in_fpscr = uVar7;
                        goto LAB_08029610;
                      }
                      bVar17 = uVar5 == 0;
                      param_2 = uVar4 + uVar8 * 0x100000;
                    }
                    else {
                      uVar5 = uVar10 << (uVar12 & 0xff);
                      bVar17 = uVar5 == 0;
                      param_2 = iVar11 + uVar8 * 0x100000;
                    }
                  }
                  else {
                    uVar10 = (uint)((uVar10 & 0x7fffffff) != 0) |
                             (uVar7 * 2 + (uint)CARRY4(uVar10,uVar10)) * 2;
                    uVar12 = uVar12 - 0x20;
                    if (uVar12 < 0x1e) {
                      uVar5 = (int)uVar7 >> (uVar12 & 0xff);
                      uVar3 = uVar4 + uVar5;
                      bVar17 = param_2 != 0 || CARRY4(param_2 - 1,(uint)CARRY4(uVar4,uVar5));
                      iVar11 = (param_2 - 1) + (uint)CARRY4(uVar4,uVar5);
                      uVar12 = 0x1e - uVar12;
                      goto joined_r0x08029318;
                    }
                    uVar3 = uVar4 - 1;
                    param_2 = (param_2 + uVar8 * 0x100000) - (uint)(uVar4 == 0);
                    uVar5 = 0xffffffff;
                    bVar17 = false;
                  }
                  if (bVar17) {
                    return uVar3;
                  }
                  if ((in_fpscr & 0xc00000) == 0) {
                    puVar13 = &UNK_40000012;
                    if (((int)uVar5 < 0) && (uVar3 = uVar3 + 1, uVar3 == 0 || uVar5 == 0x80000000))
                    {
                      if (uVar3 == 0) {
                        param_2 = param_2 + 1;
                      }
                      else {
                        uVar3 = uVar3 & 0xfffffffe;
                      }
                    }
                  }
                  else {
                    if ((int)param_2 < 0) {
                      uVar10 = in_fpscr & 0x400000;
                    }
                    else {
                      uVar10 = in_fpscr & 0x800000;
                    }
                    puVar13 = &UNK_40000012;
                    if (uVar10 == 0) {
                      bVar17 = 0xfffffffe < uVar3;
                      uVar3 = uVar3 + 1;
                      if (uVar3 == 0) {
                        param_2 = param_2 + bVar17;
                      }
                    }
                  }
                  goto LAB_08029610;
                }
                uVar7 = uVar4 - uVar10;
                iVar11 = (param_2 + param_1 * -8) - (uint)(uVar10 > uVar4);
                if (param_2 <= uVar5 && (uint)(uVar10 <= uVar4) <= param_2 + param_1 * -8) {
                  bVar17 = CARRY4(uVar10,uVar7);
                  uVar10 = uVar10 + uVar7;
                  uVar5 = uVar5 + iVar11 + (uint)bVar17;
                  bVar17 = uVar4 < uVar7;
                  uVar4 = uVar4 - uVar7;
                  param_2 = (param_2 - iVar11) - (uint)bVar17;
                }
                uVar8 = param_2 >> 0x14;
                uVar12 = uVar8 - (uVar5 >> 0x14);
                param_2 = param_2 & ~(uVar8 << 0x14);
                uVar7 = uVar5 & ~((int)_BYTE_ARRAY_080283e0 >> 1) | 0x100000;
              }
              if (uVar12 < 0x21) {
                uVar15 = uVar10 >> (uVar12 & 0xff);
                uVar5 = uVar4 + uVar15;
                uVar16 = uVar7 << (0x20 - uVar12 & 0xff);
                uVar3 = uVar5 + uVar16;
                param_2 = param_2 + (uVar7 >> (uVar12 & 0xff)) + (uint)CARRY4(uVar4,uVar15) +
                          (uint)CARRY4(uVar5,uVar16);
                uVar12 = 0x20 - uVar12;
                if (0xfffff < param_2) goto LAB_080282c6;
                param_2 = param_2 + uVar8 * 0x100000;
LAB_08028222:
                uVar5 = uVar10 << (uVar12 & 0xff);
                if (uVar5 == 0) {
                  return uVar3;
                }
                if ((in_fpscr & 0xc00000) == 0) {
                  puVar13 = &UNK_40000011;
                  if (-1 < (int)uVar5) goto LAB_08029610;
                  bVar17 = uVar3 != 0xffffffff;
                  uVar3 = uVar3 + 1;
                  uVar10 = uVar3;
                  if (bVar17) {
                    uVar5 = uVar5 << 1;
                    uVar10 = uVar5;
                  }
                  if (uVar10 != 0) goto LAB_08029610;
LAB_08028254:
                  if (uVar3 == 0) {
                    param_2 = param_2 + 1;
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = uVar3 & 0xfffffffe;
                  }
                }
                else {
                  if ((int)param_2 < 0) {
                    uVar10 = in_fpscr & 0x400000;
                  }
                  else {
                    uVar10 = in_fpscr & 0x800000;
                  }
                  puVar13 = &UNK_40000011;
                  if ((uVar10 != 0) || (bVar17 = uVar3 != 0xffffffff, uVar3 = uVar3 + 1, bVar17))
                  goto LAB_08029610;
                  param_2 = param_2 + 1;
                }
              }
              else {
                uVar10 = uVar7 * 2 + (uint)(uVar10 != 0);
                uVar5 = uVar12 - 0x20;
                uVar12 = 0x1f - uVar5;
                if (uVar5 < 0x20) {
                  uVar7 = uVar7 >> (uVar5 & 0xff);
                  uVar3 = uVar4 + uVar7;
                }
                else {
                  uVar12 = 0;
                  uVar3 = uVar4;
                }
                param_2 = param_2 + uVar8 * 0x100000 + (uint)(uVar5 < 0x20 && CARRY4(uVar4,uVar7));
                if (uVar8 == param_2 >> 0x14) goto LAB_08028222;
                param_2 = param_2 + uVar8 * -0x100000;
LAB_080282c6:
                bVar1 = (byte)uVar3;
                uVar3 = (uint)((param_2 + 0x100000 & 1) != 0) << 0x1f | uVar3 >> 1;
                uVar10 = uVar10 << (uVar12 & 0xff);
                param_2 = (param_2 + 0x100000 >> 1) + uVar8 * 0x100000;
                uVar7 = (uint)(bVar1 & 1);
                uVar10 = (uVar10 | uVar10 << 1) >> 1;
                uVar5 = uVar7 << 0x1f | uVar10;
                if (uVar5 == 0) {
                  uVar7 = param_2 * 2;
                  if (uVar7 < 0xffe00000) {
                    return uVar3;
                  }
                  param_2 = param_2 + 0xa0000000;
                  puVar13 = DAT_080283e4;
                  goto LAB_08029610;
                }
                if ((in_fpscr & 0xc00000) == 0) {
                  if (uVar7 != 0) {
                    bVar17 = uVar3 != 0xffffffff;
                    uVar3 = uVar3 + 1;
                    uVar7 = uVar3;
                    if (bVar17) {
                      uVar5 = uVar10 << 1;
                      uVar7 = uVar10;
                    }
                    if (uVar7 == 0) goto LAB_08028254;
                  }
                }
                else {
                  if ((int)param_2 < 0) {
                    uVar7 = in_fpscr & 0x400000;
                  }
                  else {
                    uVar7 = in_fpscr & 0x800000;
                  }
                  if ((uVar7 == 0) && (bVar17 = 0xfffffffe < uVar3, uVar3 = uVar3 + 1, bVar17)) {
                    param_2 = param_2 + 1;
                  }
                }
              }
              uVar7 = param_2 << 1;
              puVar13 = &UNK_40000011;
              if (0xffdfffff < uVar7) {
                param_2 = param_2 + 0xa0000000;
                puVar13 = &UNK_50000011;
              }
              goto LAB_08029610;
            }
          }
        }
      }
      uVar3 = uVar7 & 0xe0000000;
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0xc00000) == 0) {
      if ((param_1 & 0x1fffffff) == 0) goto LAB_08027ef0;
      uVar3 = uVar5 * 8 + (param_1 >> 0x1d) + (uint)((param_1 & 0x10000000) != 0);
      if ((param_1 & 0xfffffff) == 0) {
        uVar5 = param_1 << 3;
        uVar3 = uVar3 & ~((param_1 & 0x1fffffff) >> 0x1c);
      }
      if ((uVar3 & 0x800000) != 0) {
        uVar5 = (param_2 & 0x7fffffff) + 0xc8000000;
        goto LAB_08027fe6;
      }
      uVar3 = uVar3 | uVar7;
    }
    else {
      uVar7 = param_2 & 0x80000000;
      uVar3 = (uVar7 | uVar5 * 8) + (param_1 >> 0x1d);
      if ((param_1 & 0x1fffffff) == 0) {
        return uVar3;
      }
      uVar10 = in_fpscr;
      if ((int)uVar7 < 0) {
        uVar10 = in_fpscr << 1;
      }
      uVar5 = uVar3;
      if (((uVar10 & 0x800000) == 0) && (uVar3 = uVar3 + 1, uVar5 = uVar3, (uVar3 & 0x800000) != 0))
      {
        uVar5 = param_2 & 0x7fffffff;
        goto LAB_08027ff6;
      }
    }
  }
  else {
LAB_08027ef0:
    if ((in_fpscr & 0xc00000) == 0) {
      uVar10 = param_1 << 3;
      uVar5 = uVar7 | uVar5 * 8;
      uVar3 = uVar5 + (param_1 >> 0x1d);
      if (uVar10 == 0) {
        return uVar3;
      }
      bVar17 = (uVar10 & 0x80000000) != 0;
      uVar3 = uVar3 + bVar17;
      if (((uVar10 & 0x7fffffff) == 0) && (bVar17)) {
        uVar3 = uVar3 & 0xfffffffe;
      }
    }
    else {
      uVar7 = param_2 & 0x80000000;
      uVar5 = uVar7 | uVar5 * 8;
      uVar3 = uVar5 + (param_1 >> 0x1d);
      if ((param_1 & 0x1fffffff) == 0) {
        return uVar3;
      }
      uVar10 = in_fpscr;
      if ((int)uVar7 < 0) {
        uVar10 = in_fpscr << 1;
      }
      if ((uVar10 & 0x800000) == 0) {
        uVar3 = uVar3 + 1;
      }
    }
  }
LAB_08029610:
  uVar10 = uVar5;
  if (((uint)puVar13 & 0x70) == 0) {
    uVar10 = param_2;
  }
  if (((uint)puVar13 & 0x30000000 & ~(in_fpscr << 0x12)) != 0) {
    puVar13 = (undefined *)((uint)puVar13 | 0x40000000);
  }
  puVar14 = (undefined *)((uint)puVar13 | in_fpscr & 0x1c00000);
  uVar5 = (uint)puVar13 & 0xf;
  bVar17 = uVar5 == 10 || uVar5 == 8;
  if (uVar5 == 10 || uVar5 == 8) {
    bVar17 = (~(uint)puVar14 & 0x20000) == 0;
  }
  else {
    puVar14 = (undefined *)((uint)puVar14 | ((uint)puVar13 & 0x70) << 3);
  }
  if (bVar17) {
    puVar14 = (undefined *)((uint)puVar14 | 0xc00000);
  }
  if (((uint)puVar14 & 0x20000000) != 0) {
    if ((in_fpscr & 0x800) == 0) {
      return uVar3;
    }
    goto LAB_08029cb0;
  }
  if (((uint)puVar14 & 0x10000000) == 0) {
    if (((uint)puVar14 & 0x40000000) != 0) {
      if ((in_fpscr & 0x1000) == 0) {
        return uVar3;
      }
      goto LAB_08029cb0;
    }
    if (((uint)puVar14 & 0x8000000) == 0) {
      if ((in_fpscr & 0x100) == 0) {
        if (((uint)puVar14 & 0x40) != 0) {
          uVar5 = param_2;
          if (((uint)puVar14 & 0x80) == 0) {
            uVar5 = uVar3;
          }
          if (((uint)puVar14 & 0x10) == 0) {
            uVar5 = DAT_080297f8 | uVar5 & 0x80000000;
          }
          else {
            param_2 = DAT_080297f4 | uVar5 & 0x80000000;
            uVar5 = DAT_080297f0;
          }
          uVar5 = FUN_08029adc(uVar5,param_2);
          return uVar5;
        }
        if (((uint)puVar14 & 0xc000) == 0) {
          uVar7 = DAT_080297f0;
          uVar5 = DAT_080297f4;
          if (((uint)puVar14 & 0x10) == 0) {
            uVar7 = DAT_080297f8;
            uVar5 = param_2;
          }
          uVar5 = FUN_08029adc(uVar7,uVar5);
          return uVar5;
        }
        bVar17 = ((uint)puVar14 & 0x8000) != 0;
        if (bVar17) {
          uVar3 = uVar10;
          param_2 = uVar7;
        }
        if (bVar17) {
          puVar14 = (undefined *)((uint)puVar14 ^ ((uint)puVar14 & 0x100) >> 1);
        }
        if (((uint)puVar14 & 0x80) == 0) {
          uVar3 = uVar3 | 0x400000;
        }
        else {
          param_2 = param_2 | 0x80000;
        }
        uVar5 = FUN_08029adc(uVar3,param_2);
        return uVar5;
      }
      goto LAB_08029cb0;
    }
    if ((in_fpscr & 0x200) != 0) goto LAB_08029cb0;
    if (((uint)puVar14 & 0x40) != 0) {
      return 0x80000001;
    }
    if (((uint)puVar14 & 0x10) == 0) {
      uVar10 = uVar10 ^ uVar3;
    }
    else {
      uVar10 = param_2 ^ uVar7;
    }
    if (((uint)puVar14 & 0xf) == 10) {
      uVar10 = 0xffffffff;
    }
    in_fpscr = 0;
    puVar13 = puVar14;
  }
  else {
    if ((in_fpscr & 0x400) != 0) goto LAB_08029cb0;
    puVar13 = (undefined *)((uint)puVar14 & 0xefffffff);
    uVar10 = param_2;
    if (((uint)puVar14 & 0x80) == 0) {
      uVar10 = uVar3;
    }
    uVar10 = uVar10 & 0x80000000;
    if (uVar10 == 0) {
      cVar2 = (char)(in_fpscr >> 0x10);
    }
    else {
      cVar2 = (char)((in_fpscr << 9) >> 0x18);
    }
    if (cVar2 < '\0') {
      if (((uint)puVar14 & 0x10) == 0) {
        uVar3 = DAT_080297ec | uVar10;
      }
      else {
        param_2 = DAT_080297e8 | uVar10;
        uVar3 = DAT_080297e4;
      }
      puVar14 = puVar13;
      if ((in_fpscr & 0x1000) == 0) {
        return uVar3;
      }
      goto LAB_08029cb0;
    }
  }
  uVar10 = uVar10 & 0x80000000;
  if (((uint)puVar13 & 0x10) == 0) {
    uVar3 = DAT_080297e0 | uVar10;
  }
  else {
    param_2 = DAT_080297dc | uVar10;
    uVar3 = DAT_080297d8;
  }
  puVar14 = puVar13;
  if ((in_fpscr & 0x1000) == 0) {
    return uVar3;
  }
LAB_08029cb0:
  uVar5 = FUN_08001d58(uVar3,param_2,uVar10);
  if (((uint)puVar14 & 0xf) != 9) {
    return uVar5;
  }
  if (((uint)puVar14 & 0x100000) == 0) {
    return (uint)(((uint)puVar14 & uVar5 << 0x10) != 0);
  }
  if (((uint)puVar14 & 0x70000) == 0) {
    return uVar5 << 0x1d;
  }
  if ((uVar5 & 8) != 0) {
    return uVar5;
  }
  return 2 - uVar5;
}

