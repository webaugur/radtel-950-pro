/**
 * @brief fun_08029ca4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08029ca4, Ghidra name thunk_FUN_08001940, 4 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 *
thunk_FUN_08001940(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined1 *puStack_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined1 uStack_68;
  char acStack_67 [23];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  int *piStack_28;
  
  iVar12 = 0;
  uVar6 = param_4[1];
  iVar9 = param_4[2];
  iStack_3c = 0;
  uStack_34 = param_1;
  uStack_30 = param_2;
  puStack_2c = param_3;
  piStack_28 = param_4;
  iVar1 = FUN_080010bc();
  uStack_38 = (uint)*(byte *)((int)*(int **)(iVar1 + 0xc) + **(int **)(iVar1 + 0xc));
  puVar8 = (undefined1 *)0xffffffff;
  do {
    puVar11 = puVar8;
    puVar8 = puVar11 + 1;
    uVar2 = (*(code *)param_4[6])(uStack_30);
    iVar1 = (*(code *)param_4[8])();
  } while (iVar1 != 0);
  if (uVar2 == 0xffffffff) {
    return (undefined1 *)0xffffffff;
  }
  uVar6 = uVar6 & 0xfffff97f;
  if (0 < iVar9) {
    if (uVar2 != 0x2b) {
      if (uVar2 != 0x2d) goto LAB_080019aa;
      uVar6 = uVar6 | 0x400;
    }
    puVar8 = puVar11 + 2;
    uVar2 = (*(code *)param_4[6])(uStack_30);
    iVar9 = iVar9 + -1;
  }
LAB_080019aa:
  if ((int)(uVar6 << 0x15) < 0) {
    uStack_68 = 0x2d;
  }
  else {
    uStack_68 = 0x2b;
  }
  pcVar14 = acStack_67;
  puVar11 = auStack_48;
  if (0 < iVar9) {
    if (((((uVar2 == 0x69) || (uVar2 == 0x49)) || (uVar2 == 0x6e)) || (uVar2 == 0x4e)) &&
       (puStack_78 = puVar8, uStack_74 = uVar6, iStack_70 = iVar9, uStack_6c = uVar2,
       puVar3 = (undefined1 *)thunk_FUN_080026f8(0xfffffffd,uStack_30,puStack_2c,param_4),
       puVar3 != (undefined1 *)0xfffffffd)) {
      return puVar3;
    }
    do {
      if (uVar2 != 0x30) {
        if (((uVar2 == 0x78) || (uVar2 == 0x58)) &&
           ((iStack_3c == 1 &&
            (puStack_78 = puVar8, uStack_74 = uVar6, iStack_70 = iVar9,
            puVar3 = (undefined1 *)thunk_FUN_080023d8(0xfffffffd,uStack_30,puStack_2c,param_4),
            puVar3 != (undefined1 *)0xfffffffd)))) {
          return puVar3;
        }
        break;
      }
      puVar8 = puVar8 + 1;
      uVar2 = (*(code *)param_4[6])(uStack_30);
      iVar9 = iVar9 + -1;
      uVar6 = uVar6 | 0x200;
      *puStack_2c = puVar8;
      iStack_3c = iStack_3c + 1;
    } while (0 < iVar9);
  }
  if (uVar2 == uStack_38) {
    uVar6 = uVar6 | 0x80;
    puVar3 = puVar8;
    while( true ) {
      puVar8 = puVar3 + 1;
      iVar9 = iVar9 + -1;
      uVar2 = (*(code *)param_4[6])(uStack_30);
      if (uVar2 != 0x30) break;
      iVar12 = iVar12 + -1;
      uVar6 = uVar6 | 0x200;
      *puStack_2c = puVar3 + 2;
      puVar3 = puVar8;
    }
  }
  do {
    if (iVar9 < 1) {
LAB_08001b78:
      (*(code *)param_4[7])(uStack_30);
      *pcVar14 = -1;
      *puVar11 = 0xff;
      uStack_50 = 0;
      uStack_4c = 0;
      FUN_08001744(&uStack_50,auStack_48,&uStack_68,iVar12);
      if (-1 < (int)(uVar6 << 0x16)) {
        return (undefined1 *)0xfffffffe;
      }
      if ((uVar6 & 0x24) != 0) {
        if ((uVar6 & 1) != 0) {
          return puVar8;
        }
        piVar4 = (int *)*param_4;
        *param_4 = (int)(piVar4 + 1);
        puVar5 = (undefined4 *)*piVar4;
        *puVar5 = uStack_50;
        puVar5[1] = uStack_4c;
        return puVar8;
      }
      FUN_08025c88(&puStack_78,&uStack_50);
      if ((uVar6 & 1) != 0) {
        return puVar8;
      }
      puVar5 = (undefined4 *)*param_4;
      *param_4 = (int)(puVar5 + 1);
      *(undefined1 **)*puVar5 = puStack_78;
      return puVar8;
    }
    if ((uVar2 == uStack_38) && (-1 < (int)(uVar6 << 0x18))) {
      uVar7 = uVar6 | 0x80;
    }
    else {
      iVar1 = FUN_08025d54(uVar2);
      if (iVar1 == 0) {
        if ((0 < iVar9) && (((uVar2 == 0x65 || (uVar2 == 0x45)) && ((int)(uVar6 << 0x16) < 0)))) {
          iVar10 = iVar9 + -1;
          uVar6 = uVar6 & 0xfffffcff;
          iVar1 = (*(code *)param_4[6])(uStack_30);
          puVar11 = puVar8 + 1;
          if (0 < iVar10) {
            if (iVar1 != 0x2b) {
              if (iVar1 != 0x2d) goto LAB_08001b12;
              uVar6 = uVar6 | 0x100;
            }
            iVar1 = (*(code *)param_4[6])(uStack_30);
            iVar10 = iVar9 + -2;
            puVar11 = puVar8 + 2;
          }
LAB_08001b12:
          puVar8 = puVar11;
          if ((int)(uVar6 << 0x17) < 0) {
            auStack_48[0] = 0x2d;
          }
          else {
            auStack_48[0] = 0x2b;
          }
          puVar11 = auStack_48 + 1;
          puStack_78 = puVar11;
          while ((0 < iVar10 && (iVar9 = FUN_08025d54(iVar1), iVar9 != 0))) {
            iVar10 = iVar10 + -1;
            if (puVar11 < auStack_48 + 9) {
              *puVar11 = (char)(iVar1 - 0x30U);
              if (((iVar1 - 0x30U & 0xff) != 0) || (puStack_78 < puVar11)) {
                puVar11 = puVar11 + 1;
              }
            }
            else {
              iVar12 = DAT_08001be4;
              if (-1 < (int)(uVar6 << 0x17)) {
                iVar12 = 9999;
              }
            }
            puVar8 = puVar8 + 1;
            iVar1 = (*(code *)param_4[6])(uStack_30);
            *puStack_2c = puVar8;
            uVar6 = uVar6 | 0x200;
          }
        }
        goto LAB_08001b78;
      }
      uVar7 = uVar6 | 0x200;
      if (pcVar14 < acStack_67 + 0x12) {
        pcVar13 = pcVar14 + 1;
        *pcVar14 = (char)uVar2 + -0x30;
        pcVar14 = pcVar13;
        if ((int)(uVar6 << 0x18) < 0) {
          iVar12 = iVar12 + -1;
        }
      }
      else if (-1 < (int)(uVar6 << 0x18)) {
        iVar12 = iVar12 + 1;
      }
    }
    iVar9 = iVar9 + -1;
    if ((int)(uVar7 << 0x16) < 0) {
      *puStack_2c = puVar8 + 1;
    }
    puVar8 = puVar8 + 1;
    uVar2 = (*(code *)param_4[6])(uStack_30);
    uVar6 = uVar7;
  } while( true );
}

