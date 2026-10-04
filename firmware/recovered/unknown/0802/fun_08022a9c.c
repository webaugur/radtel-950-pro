/**
 * @brief fun_08022a9c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022a9c, Ghidra name FUN_08022a9c, 436 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_08022a9c(void)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  byte bVar11;
  int extraout_r2;
  bool bVar12;
  uint extraout_r3;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar2 = DAT_08022ad4;
  if (DAT_08022ad4[2] != 1) {
    return DAT_08022ad4[2];
  }
  uVar5 = *DAT_08022ad4;
  if (0x200 < *DAT_08022ad4) {
    uVar5 = 0x200;
  }
  FUN_08000f6e(DAT_08022ad4 + -0x80,DAT_08022ad4 + 3,uVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar1 = DAT_0801a0b4;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (*(char *)(DAT_0801a0b0 + 1) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar14 = 0;
    pcVar13 = DAT_08022ad8;
    while (pcVar13 = pcVar13 + uVar14, uVar14 < uVar5) {
      uVar10 = uVar5 - uVar14;
      uVar5 = 0;
      for (; (uVar5 < uVar10 && (*pcVar13 != '$')); pcVar13 = pcVar13 + 1) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 == uVar10) {
        return 0;
      }
      uVar5 = uVar10 - uVar5;
      if (*pcVar13 == '$') {
        uVar15 = 0;
        for (uVar14 = 0; uVar14 < uVar5; uVar14 = uVar14 + 1) {
          uVar10 = (uint)(byte)pcVar13[uVar14];
          if (uVar10 == 10) {
            uVar15 = uVar14 + 1;
            break;
          }
        }
        if (uVar15 != 0) {
          uVar14 = uVar15;
        }
        FUN_08008048(pcVar13[uVar14 - 4],uVar10,pcVar13 + (uVar14 - 4));
        uVar10 = FUN_08008048(*(undefined1 *)(extraout_r2 + 1));
        uVar15 = FUN_08007cc4(uVar14 - 6 & 0xff,pcVar13 + 1);
        iVar8 = DAT_0801a0b8;
        if (uVar15 == (uVar10 & 0xf | (extraout_r3 & 0xf) << 4)) {
          local_30 = CONCAT13(local_30._3_1_,*(undefined3 *)(pcVar13 + 3));
          uVar10 = 0;
          do {
            iVar6 = FUN_08000e06(uVar10 * 3 + iVar8,&local_30,3);
            if (iVar6 == 0) break;
            uVar10 = uVar10 + 1;
          } while (uVar10 < 4);
          if (uVar10 == 0) {
            iVar8 = 0;
            for (uVar10 = 0; uVar10 < uVar14; uVar10 = uVar10 + 1) {
              if ((pcVar13[uVar10] == ',') && (iVar8 = iVar8 + 1, iVar8 == 6)) {
                uVar10 = uVar10 + 1;
                break;
              }
            }
            if (pcVar13[uVar10] == '1') {
              uVar3 = FUN_08021ac0(pcVar13 + 7,2);
              puVar1[0x1e] = uVar3;
              uVar3 = FUN_08021ac0(pcVar13 + 9,2);
              puVar1[0x1f] = uVar3;
              uVar3 = FUN_08021ac0(pcVar13 + 0xb,2);
              puVar1[0x20] = uVar3;
              uVar3 = FUN_08021ac0(pcVar13 + 0x12,2);
              puVar1[4] = uVar3;
              uVar3 = FUN_08021ac0(pcVar13 + 0x14,2);
              puVar1[5] = uVar3;
              uVar17 = FUN_08021ac0(pcVar13 + 0x17,4);
              *(undefined4 *)(puVar1 + 6) = uVar17;
              puVar1[3] = pcVar13[0x1d];
              uVar3 = FUN_08021ac0(pcVar13 + 0x1f,3);
              puVar1[0xb] = uVar3;
              uVar3 = FUN_08021ac0(pcVar13 + 0x22,2);
              puVar1[0xc] = uVar3;
              uVar17 = FUN_08021ac0(pcVar13 + 0x25,4);
              *(undefined4 *)(puVar1 + 0xd) = uVar17;
              puVar1[10] = pcVar13[0x2b];
              uVar3 = FUN_08021ac0(pcVar13 + 0x2f,2);
              puVar1[0x21] = uVar3;
              for (uVar10 = 0x32; (uVar10 < uVar14 && (pcVar13[uVar10] != ',')); uVar10 = uVar10 + 1
                  ) {
              }
              uVar15 = 0;
              bVar12 = false;
              bVar11 = 0;
              do {
                uVar10 = uVar10 + 1;
                if (uVar14 <= uVar10) break;
                if (pcVar13[uVar10] == '.') {
                  bVar12 = true;
                }
                else {
                  if (bVar12) {
                    bVar11 = bVar11 + 1;
                  }
                  if (bVar11 < 2) {
                    *(char *)((int)&local_30 + uVar15) = pcVar13[uVar10];
                    uVar15 = uVar15 + 1 & 0xff;
                  }
                }
              } while (pcVar13[uVar10] != ',');
              *(undefined4 *)(puVar1 + 0x11) = 0;
              if (2 < uVar15) {
                if (!bVar12) {
                  *(undefined1 *)((int)&local_30 + uVar15) = 0x30;
                  uVar15 = uVar15 + 1 & 0xff;
                }
                if (5 < uVar15) {
                  uVar15 = 5;
                }
                *(undefined1 *)((int)&local_30 + uVar15) = 0;
                uVar17 = FUN_08000bb0(&local_30);
                *(undefined4 *)(puVar1 + 0x11) = uVar17;
              }
              puVar1[2] = 1;
              *puVar1 = 1;
              puVar1[1] = 0x3c;
              FUN_0800b8a0();
            }
          }
          else if (uVar10 == 1) {
            uVar10 = 0;
            for (uVar15 = 7; uVar7 = uVar10, uVar15 < uVar14; uVar15 = uVar15 + 1) {
              if (pcVar13[uVar15] != '.') {
                uVar7 = uVar10 + 1 & 0xff;
                *(char *)((int)&local_30 + uVar10) = pcVar13[uVar15];
              }
              if (pcVar13[uVar15] == ',') break;
              uVar10 = uVar7;
            }
            *(undefined2 *)(puVar1 + 0x15) = 0;
            if (2 < uVar7) {
              uVar4 = FUN_08021ac0(&local_30,uVar7);
              *(undefined2 *)(puVar1 + 0x15) = uVar4;
            }
            uVar7 = uVar7 + 9;
            cVar9 = '\0';
            while ((uVar7 < uVar14 &&
                   ((pcVar13[uVar7] != ',' || (cVar9 = cVar9 + '\x01', cVar9 != '\x03'))))) {
              uVar7 = uVar7 + 1;
            }
            uVar15 = 0;
            for (uVar10 = uVar7 + 1; uVar16 = uVar15, uVar10 < uVar14; uVar10 = uVar10 + 1) {
              bVar11 = pcVar13[uVar10];
              if ((bVar11 != 0x2e) && (bVar11 - 0x30 < 10)) {
                uVar16 = uVar15 + 1 & 0xff;
                *(byte *)((int)&local_30 + uVar15) = bVar11;
              }
              if (pcVar13[uVar10] == ',') break;
              uVar15 = uVar16;
            }
            *(undefined2 *)(puVar1 + 0x17) = 0;
            if (2 < uVar16) {
              uVar4 = FUN_08021ac0(&local_30,uVar16);
              *(undefined2 *)(puVar1 + 0x17) = uVar4;
            }
            uVar10 = 0;
            for (uVar15 = uVar7 + 1 + uVar16 + 4; uVar7 = uVar10, uVar15 < uVar14;
                uVar15 = uVar15 + 1) {
              bVar11 = pcVar13[uVar15];
              if ((bVar11 != 0x2e) && (bVar11 - 0x30 < 10)) {
                uVar7 = uVar10 + 1 & 0xff;
                *(byte *)((int)&local_30 + uVar10) = bVar11;
              }
              if (pcVar13[uVar15] == ',') break;
              uVar10 = uVar7;
            }
            *(undefined2 *)(puVar1 + 0x19) = 0;
            if (2 < uVar7) {
              uVar4 = FUN_08021ac0(&local_30);
              *(undefined2 *)(puVar1 + 0x19) = uVar4;
            }
          }
          else if (uVar10 == 2) {
            iVar8 = FUN_08027490(pcVar13,&iStack_34,&iStack_38,&iStack_3c,&iStack_40,&iStack_44,
                                 &iStack_48);
            if (iVar8 == 0) {
              puVar1[0x22] = 0;
            }
            else if (iStack_34 < 2000) {
              puVar1[0x1b] = 0;
            }
            else {
              puVar1[0x1b] = (char)iStack_34 + (char)(iStack_34 / 2000) * '0';
              if (iStack_38 < 0xd) {
                puVar1[0x1c] = (char)iStack_38;
                if (iStack_3c < 0x20) {
                  puVar1[0x1d] = (char)iStack_3c;
                  if (iStack_40 < 0x19) {
                    puVar1[0x1e] = (char)iStack_40;
                  }
                  else {
                    puVar1[0x1e] = 0;
                  }
                  if (iStack_44 < 0x3d) {
                    puVar1[0x1f] = (char)iStack_44;
                  }
                  else {
                    puVar1[0x1f] = 0;
                  }
                  if (_DAT_0801a0bc < iStack_48) {
                    puVar1[0x20] = 0;
                  }
                  else {
                    uVar17 = VectorFloatToUnsigned(iStack_48,3);
                    puVar1[0x20] = (char)uVar17;
                  }
                  puVar1[0x22] = 1;
                  FUN_0800b8a0(puVar1[2]);
                  FUN_0800b8c4();
                }
                else {
                  puVar1[0x1d] = 0;
                }
              }
              else {
                puVar1[0x1c] = 0;
              }
            }
          }
          else if (uVar10 == 3) {
            FUN_0800a5a0();
          }
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

