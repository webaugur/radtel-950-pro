/**
 * @brief fun_08019e78
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019e78, Ghidra name FUN_08019e78, 568 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08019e78(undefined4 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  byte bVar11;
  int extraout_r2;
  bool bVar12;
  uint extraout_r3;
  char *unaff_r4;
  uint unaff_r5;
  uint uVar13;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined1 *unaff_r9;
  int unaff_r11;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  undefined2 uStack00000028;
  char cStack0000002a;
  
  do {
    *(undefined4 *)(unaff_r9 + 0xd) = param_1;
    unaff_r9[10] = unaff_r4[0x2b];
    uVar1 = FUN_08021ac0(unaff_r4 + 0x2f,2);
    unaff_r9[0x21] = uVar1;
    for (uVar10 = 0x32; (uVar10 < unaff_r5 && (unaff_r4[uVar10] != ',')); uVar10 = uVar10 + 1) {
    }
    uVar5 = 0;
    bVar12 = false;
    bVar11 = 0;
    do {
      uVar10 = uVar10 + 1;
      if (unaff_r5 <= uVar10) break;
      if (unaff_r4[uVar10] == '.') {
        bVar12 = true;
      }
      else {
        if (bVar12) {
          bVar11 = bVar11 + 1;
        }
        if (bVar11 < 2) {
          *(char *)(unaff_r11 + uVar5) = unaff_r4[uVar10];
          uVar5 = uVar5 + 1 & 0xff;
        }
      }
    } while (unaff_r4[uVar10] != ',');
    *(undefined4 *)(unaff_r9 + 0x11) = unaff_r7;
    uVar1 = (undefined1)unaff_r7;
    if (2 < uVar5) {
      if (!bVar12) {
        *(undefined1 *)(unaff_r11 + uVar5) = 0x30;
        uVar5 = uVar5 + 1 & 0xff;
      }
      if (5 < uVar5) {
        uVar5 = 5;
      }
      *(undefined1 *)(unaff_r11 + uVar5) = uVar1;
      uVar6 = FUN_08000bb0(&stack0x00000028);
      *(undefined4 *)(unaff_r9 + 0x11) = uVar6;
    }
    unaff_r9[2] = 1;
    *unaff_r9 = 1;
    unaff_r9[1] = 0x3c;
    FUN_0800b8a0();
LAB_08019d20:
    do {
      do {
        do {
          unaff_r4 = unaff_r4 + unaff_r5;
          if (unaff_r8 <= unaff_r5) {
            return 1;
          }
          uVar5 = unaff_r8 - unaff_r5;
          uVar10 = 0;
          for (; (uVar10 < uVar5 && (*unaff_r4 != '$')); unaff_r4 = unaff_r4 + 1) {
            uVar10 = uVar10 + 1;
          }
          if (uVar10 == uVar5) {
            return 0;
          }
          unaff_r8 = uVar5 - uVar10;
        } while (*unaff_r4 != '$');
        uVar10 = 0;
        for (unaff_r5 = 0; unaff_r5 < unaff_r8; unaff_r5 = unaff_r5 + 1) {
          uVar5 = (uint)(byte)unaff_r4[unaff_r5];
          if (uVar5 == 10) {
            uVar10 = unaff_r5 + 1;
            break;
          }
        }
        if (uVar10 != 0) {
          unaff_r5 = uVar10;
        }
        FUN_08008048(unaff_r4[unaff_r5 - 4],uVar5,unaff_r4 + (unaff_r5 - 4));
        uVar10 = FUN_08008048(*(undefined1 *)(extraout_r2 + 1));
        uVar5 = FUN_08007cc4(unaff_r5 - 6 & 0xff,unaff_r4 + 1);
        iVar8 = DAT_0801a0b8;
      } while (uVar5 != (uVar10 & 0xf | (extraout_r3 & 0xf) << 4));
      uStack00000028 = *(undefined2 *)(unaff_r4 + 3);
      cStack0000002a = unaff_r4[5];
      uVar10 = 0;
      do {
        iVar4 = FUN_08000e06(uVar10 * 3 + iVar8,&stack0x00000028,3);
        if (iVar4 == 0) break;
        uVar10 = uVar10 + 1;
      } while (uVar10 < 4);
      if (uVar10 != 0) {
        if (uVar10 == 1) {
          uVar10 = 0;
          for (uVar5 = 7; uVar7 = uVar10, uVar5 < unaff_r5; uVar5 = uVar5 + 1) {
            if (unaff_r4[uVar5] != '.') {
              uVar7 = uVar10 + 1 & 0xff;
              *(char *)(unaff_r11 + uVar10) = unaff_r4[uVar5];
            }
            if (unaff_r4[uVar5] == ',') break;
            uVar10 = uVar7;
          }
          uVar3 = (undefined2)unaff_r7;
          *(undefined2 *)(unaff_r9 + 0x15) = uVar3;
          if (2 < uVar7) {
            uVar2 = FUN_08021ac0(&stack0x00000028,uVar7);
            *(undefined2 *)(unaff_r9 + 0x15) = uVar2;
          }
          uVar7 = uVar7 + 9;
          cVar9 = '\0';
          while ((uVar7 < unaff_r5 &&
                 ((unaff_r4[uVar7] != ',' || (cVar9 = cVar9 + '\x01', cVar9 != '\x03'))))) {
            uVar7 = uVar7 + 1;
          }
          uVar5 = 0;
          for (uVar10 = uVar7 + 1; uVar13 = uVar5, uVar10 < unaff_r5; uVar10 = uVar10 + 1) {
            bVar11 = unaff_r4[uVar10];
            if ((bVar11 != 0x2e) && (bVar11 - 0x30 < 10)) {
              uVar13 = uVar5 + 1 & 0xff;
              *(byte *)(unaff_r11 + uVar5) = bVar11;
            }
            if (unaff_r4[uVar10] == ',') break;
            uVar5 = uVar13;
          }
          *(undefined2 *)(unaff_r9 + 0x17) = uVar3;
          if (2 < uVar13) {
            uVar2 = FUN_08021ac0(&stack0x00000028,uVar13);
            *(undefined2 *)(unaff_r9 + 0x17) = uVar2;
          }
          uVar10 = 0;
          for (uVar5 = uVar7 + 1 + uVar13 + 4; uVar7 = uVar10, uVar5 < unaff_r5; uVar5 = uVar5 + 1)
          {
            bVar11 = unaff_r4[uVar5];
            if ((bVar11 != 0x2e) && (bVar11 - 0x30 < 10)) {
              uVar7 = uVar10 + 1 & 0xff;
              *(byte *)(unaff_r11 + uVar10) = bVar11;
            }
            if (unaff_r4[uVar5] == ',') break;
            uVar10 = uVar7;
          }
          *(undefined2 *)(unaff_r9 + 0x19) = uVar3;
          if (2 < uVar7) {
            uVar3 = FUN_08021ac0(&stack0x00000028);
            *(undefined2 *)(unaff_r9 + 0x19) = uVar3;
          }
        }
        else if (uVar10 == 2) {
          iVar8 = FUN_08027490(unaff_r4,&stack0x00000024,&stack0x00000020,&stack0x0000001c);
          if (iVar8 == 0) {
            unaff_r9[0x22] = uVar1;
          }
          else if (in_stack_00000024 < 2000) {
            unaff_r9[0x1b] = uVar1;
          }
          else {
            unaff_r9[0x1b] = (char)in_stack_00000024 + (char)(in_stack_00000024 / 2000) * '0';
            if (in_stack_00000020 < 0xd) {
              unaff_r9[0x1c] = (char)in_stack_00000020;
              if (in_stack_0000001c < 0x20) {
                unaff_r9[0x1d] = (char)in_stack_0000001c;
                if (in_stack_00000018 < 0x19) {
                  unaff_r9[0x1e] = (char)in_stack_00000018;
                }
                else {
                  unaff_r9[0x1e] = uVar1;
                }
                if (in_stack_00000014 < 0x3d) {
                  unaff_r9[0x1f] = (char)in_stack_00000014;
                }
                else {
                  unaff_r9[0x1f] = uVar1;
                }
                if (_DAT_0801a0bc < in_stack_00000010) {
                  unaff_r9[0x20] = uVar1;
                }
                else {
                  uVar6 = VectorFloatToUnsigned(in_stack_00000010,3);
                  unaff_r9[0x20] = (char)uVar6;
                }
                unaff_r9[0x22] = 1;
                FUN_0800b8a0(unaff_r9[2]);
                FUN_0800b8c4();
              }
              else {
                unaff_r9[0x1d] = uVar1;
              }
            }
            else {
              unaff_r9[0x1c] = uVar1;
            }
          }
        }
        else if (uVar10 == 3) {
          FUN_0800a5a0();
        }
        goto LAB_08019d20;
      }
      iVar8 = 0;
      for (uVar10 = 0; uVar10 < unaff_r5; uVar10 = uVar10 + 1) {
        if ((unaff_r4[uVar10] == ',') && (iVar8 = iVar8 + 1, iVar8 == 6)) {
          uVar10 = uVar10 + 1;
          break;
        }
      }
    } while (unaff_r4[uVar10] != '1');
    uVar1 = FUN_08021ac0(unaff_r4 + 7,2);
    unaff_r9[0x1e] = uVar1;
    uVar1 = FUN_08021ac0(unaff_r4 + 9,2);
    unaff_r9[0x1f] = uVar1;
    uVar1 = FUN_08021ac0(unaff_r4 + 0xb,2);
    unaff_r9[0x20] = uVar1;
    uVar1 = FUN_08021ac0(unaff_r4 + 0x12,2);
    unaff_r9[4] = uVar1;
    uVar1 = FUN_08021ac0(unaff_r4 + 0x14,2);
    unaff_r9[5] = uVar1;
    uVar6 = FUN_08021ac0(unaff_r4 + 0x17,4);
    *(undefined4 *)(unaff_r9 + 6) = uVar6;
    unaff_r9[3] = unaff_r4[0x1d];
    uVar1 = FUN_08021ac0(unaff_r4 + 0x1f,3);
    unaff_r9[0xb] = uVar1;
    uVar1 = FUN_08021ac0(unaff_r4 + 0x22,2);
    unaff_r9[0xc] = uVar1;
    param_1 = FUN_08021ac0(unaff_r4 + 0x25,4);
  } while( true );
}

