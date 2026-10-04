/**
 * @brief fun_08018744
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018744, Ghidra name FUN_08018744, 3210 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08018744(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  ushort uVar10;
  short sVar11;
  undefined2 uVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  byte *pbVar18;
  undefined4 uVar19;
  ushort *extraout_r1;
  ushort *extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  ushort *extraout_r1_03;
  ushort *extraout_r1_04;
  uint uVar20;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  ushort *extraout_r2;
  ushort *extraout_r2_00;
  ushort *extraout_r2_01;
  ushort *extraout_r2_02;
  uint uVar21;
  uint extraout_r2_03;
  uint extraout_r2_04;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *puVar22;
  undefined4 *extraout_r3_01;
  undefined4 *extraout_r3_02;
  byte *extraout_r3_03;
  undefined4 uVar23;
  ushort *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  
  iVar25 = DAT_08018ab0;
  puVar5 = DAT_08018aac;
  pcVar2 = DAT_0800e06c;
  iVar13 = DAT_0800e068;
  iVar26 = DAT_08007e80;
  iVar16 = DAT_08007e7c;
  uVar20 = *(uint *)(param_1 + 4);
  uVar15 = (uint)*(byte *)(DAT_08018ab0 + 3);
  uVar21 = (uint)*(byte *)(DAT_08018ab0 + 2);
  local_18 = (undefined4 *)param_4;
  if (uVar20 == 0x13) {
    if (uVar15 == 8) {
      iVar16 = FUN_0801853c(1);
      if (iVar16 == 1) {
        uVar21 = FUN_080073a4(7);
        return uVar21;
      }
      uVar21 = FUN_080073a4(1);
      return uVar21;
    }
    FUN_080073a4(1);
    cVar1 = *(char *)(iVar25 + 2);
    if (cVar1 == '\0') {
      uVar21 = FUN_08019b8c(0);
      return uVar21;
    }
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) {
      if ((cVar1 != '\x06') && (cVar1 != '\x03')) {
        uVar21 = FUN_080073a4(0);
        return uVar21;
      }
      *puVar5 = 0xff;
      FUN_080220a0(1);
      uVar21 = FUN_0800ba44(0);
      return uVar21;
    }
  }
  else {
    if ((int)uVar20 < 0x14) {
      if (uVar20 == 7) {
        if ((*(char *)(DAT_0800e064 + 0x19) != '\0') || (*(char *)(DAT_0800e068 + 0x14) == '\x04'))
        {
          uVar21 = FUN_080073a4(0,7,uVar21,param_4);
          return uVar21;
        }
        DAT_0800e06c[0x1d] = '\0';
        uVar23 = DAT_0800e078;
        uVar19 = DAT_0800e074;
        puVar3 = DAT_0800e070;
        if (*(char *)((int)DAT_0800e070 + 0x43) == '\0') {
          FUN_08012ae2(DAT_0800e074,0x80);
          FUN_08012ae2(uVar23,0x20);
        }
        else {
          FUN_08012ae6(DAT_0800e078,0x20);
          FUN_08012ae6(uVar19,0x80);
        }
        FUN_0800da50();
        if (*(char *)(iVar13 + 1) == '\x01') {
          FUN_0800e95c(0);
        }
        FUN_0801b334();
        *(undefined1 *)(iVar13 + 1) = 2;
        if (*pcVar2 == '\x01') {
          pcVar2[4] = '\0';
          pcVar2[5] = '\0';
          *pcVar2 = '\x02';
          uVar21 = FUN_08010fa0();
          return uVar21;
        }
        *pcVar2 = '\x02';
        FUN_0801b70c(1);
        if (*(byte *)((int)puVar3 + 0x43) == 1) {
          if (*(char *)((int)puVar3 + 0x21) == '\x01') {
            *(undefined2 *)(pcVar2 + 2) = puVar3[*(byte *)(puVar3 + 0x21) + 0x12];
          }
          else {
            *(undefined2 *)(pcVar2 + 2) = puVar3[0x11];
          }
          uVar21 = (uint)*(ushort *)(pcVar2 + 2);
          if (uVar21 - 0x208 < 0x4a7) {
            pcVar2[1] = '\x01';
          }
          else if (uVar21 - 0x8fc < 0x6c35) {
            pcVar2[1] = '\x02';
          }
          else if (uVar21 - 0x99 < 0x7f) {
            pcVar2[1] = '\0';
          }
          else {
            pcVar2[1] = '\x02';
            pcVar2[2] = -4;
            pcVar2[3] = '\b';
          }
          pcVar2[0x17] = *(char *)(puVar3 + 0x22);
        }
        else if (*(byte *)((int)puVar3 + 0x43) < 2) {
          if (*(char *)((int)puVar3 + 0x21) == '\x01') {
            *(undefined2 *)(pcVar2 + 2) = puVar3[*(byte *)(puVar3 + 0x10) + 1];
          }
          else {
            *(undefined2 *)(pcVar2 + 2) = *puVar3;
          }
          if (0x1130 < *(ushort *)(pcVar2 + 2) - 0x1900) {
            pcVar2[2] = '\0';
            pcVar2[3] = '\x19';
          }
        }
        else {
          if (*(char *)((int)puVar3 + 0x21) == '\x01') {
            bVar7 = *(byte *)((int)puVar3 + 0x95);
            *(undefined2 *)(pcVar2 + 2) = *(undefined2 *)((int)puVar3 + (uint)bVar7 * 5 + 0x4a);
            pcVar2[0x16] = *(char *)((int)puVar3 + (uint)bVar7 * 5 + 0x4c);
            *(undefined2 *)(pcVar2 + 0x18) = *(undefined2 *)((int)puVar3 + (uint)bVar7 * 5 + 0x4d);
          }
          else {
            *(undefined2 *)(pcVar2 + 2) = *(undefined2 *)((int)puVar3 + 0x45);
            pcVar2[0x16] = *(char *)((int)puVar3 + 0x47);
            *(undefined2 *)(pcVar2 + 0x18) = puVar3[0x24];
          }
          if (0x749a < *(ushort *)(pcVar2 + 2) - 0x96) {
            pcVar2[2] = -0x6a;
            pcVar2[3] = '\0';
          }
          pcVar2[0x17] = *(char *)(puVar3 + 0x4c);
        }
        FUN_08011864();
        FUN_0800eccc();
        FUN_0800efa0(*(undefined2 *)(pcVar2 + 2));
        uVar21 = FUN_08010fa0();
        return uVar21;
      }
      if ((int)uVar20 < 8) {
        if (uVar20 == 2) {
          return uVar15;
        }
        if (uVar20 == 3) {
          uVar21 = FUN_080039f8(1,3,uVar21,param_4);
          return uVar21;
        }
        if (uVar20 == 5) {
          uVar21 = FUN_0800e174();
          return uVar21;
        }
LAB_080187a4:
        if (0x9f < uVar20) {
          return uVar15;
        }
        uVar21 = FUN_080073a4(0,uVar20,uVar21,param_4);
        return uVar21;
      }
      if (uVar20 == 0x10) {
        FUN_08018340();
        iVar16 = DAT_0801734c;
        cVar1 = *(char *)(iVar25 + 2);
        if ((cVar1 == '\x05') || (cVar1 == '\b')) {
          bVar7 = *extraout_r3_03;
          FUN_0800a110();
          iVar16 = DAT_08018504;
          iVar26 = *(int *)(DAT_08018504 + 4);
          *(int *)(DAT_08018504 + 4) = iVar26 + 1;
          *(byte *)(iVar26 + iVar16 + 0x12) = bVar7;
          if ((*(uint *)(iVar16 + 4) == 1) || (*(int *)(iVar16 + 8) + 1U <= *(uint *)(iVar16 + 4)))
          {
            FUN_08000fd2(DAT_08018504 + 0x12,0x40);
            *(undefined4 *)(iVar16 + 4) = 1;
            *(byte *)(iVar16 + 0x12) = bVar7;
            *(undefined4 *)(DAT_08018508 + 3) = 0;
          }
          if (*(char *)(DAT_0801850c + 7) == '\0') {
            FUN_080073a4(0);
            local_20 = (ushort *)extraout_r1_02;
          }
          else {
            FUN_08007e90(*(char *)(*(int *)(iVar16 + 4) + DAT_08018504 + 0x11) + -0x30);
            local_20 = (ushort *)extraout_r1_01;
          }
          iVar13 = DAT_08017b88;
          iVar26 = DAT_08017b08;
          iVar16 = DAT_08017aac;
          if (*(char *)(DAT_08018510 + 2) == '\x03') {
            *(undefined1 *)(*(int *)(DAT_08017aac + 4) + DAT_08017aac + 0x12) = 0;
            FUN_08015ea0(0,0);
            if (*(char *)(iVar16 + 0x11) == -0x56) {
              FUN_0800a1c4(4);
            }
            uVar21 = FUN_0801750c();
            return uVar21;
          }
          if (*(char *)(DAT_08018510 + 2) == '\b') {
            uVar21 = 0;
            uVar20 = *(uint *)(DAT_08017b88 + 4);
            for (uVar15 = 0; uVar15 < uVar20; uVar15 = uVar15 + 1 & 0xff) {
              *(undefined1 *)((int)&local_20 + uVar21) =
                   *(undefined1 *)(DAT_08017b88 + uVar15 + 0x12);
              uVar21 = uVar21 + 1 & 0xff;
              if (uVar21 == 3) {
                uVar21 = 4;
                local_20 = (ushort *)CONCAT13(0x2d,(undefined3)local_20);
              }
            }
            *(undefined1 *)((int)&local_20 + uVar21) = 0;
            FUN_08015ea0(0,0,&local_20);
            if (*(char *)(iVar13 + 0x11) == -0x56) {
              FUN_0800a1c4(4);
            }
            uVar21 = FUN_0801750c();
            return uVar21;
          }
          local_20 = (ushort *)0x0;
          local_1c = (ushort *)0x0;
          local_18 = (undefined4 *)0x0;
          if (*(char *)(DAT_08017b08 + 0x11) == -0x56) {
            FUN_0800a1c4(4);
          }
          iVar16 = 0;
          uVar15 = *(uint *)(iVar26 + 4);
          for (uVar21 = 0; uVar21 < uVar15; uVar21 = uVar21 + 1) {
            iVar13 = iVar16;
            if (uVar21 == 3) {
              iVar13 = iVar16 + 1;
              *(undefined1 *)((int)&local_20 + iVar16) = 0x2e;
            }
            iVar16 = iVar13 + 1;
            *(undefined1 *)((int)&local_20 + iVar13) = *(undefined1 *)(iVar26 + uVar21 + 0x12);
          }
          *(undefined1 *)((int)&local_20 + iVar16) = 0;
          FUN_08015ea0(0,0,&local_20);
          uVar21 = FUN_0801750c();
          return uVar21;
        }
        if (cVar1 == '\t') {
          bVar7 = *extraout_r3_03;
          goto LAB_08018abc;
        }
        if (cVar1 != '\x02') {
          if ((cVar1 == '\x06') || (cVar1 == '\x03')) {
            iVar16 = FUN_080194d4(*(undefined4 *)extraout_r3_03);
            if (iVar16 == 0) {
              FUN_080073a4(0);
              uVar21 = FUN_0800ba44(0);
              return uVar21;
            }
            uVar21 = FUN_080073a4(7);
            return uVar21;
          }
          if ((cVar1 != '\x01') && (cVar1 != '\a')) {
            if (cVar1 != '\0') {
              uVar21 = FUN_080073a4(0);
              return uVar21;
            }
            uVar21 = *extraout_r3_03 - 0x30 & 0xff;
            FUN_08007e90(uVar21);
            FUN_08018340();
            uVar10 = FUN_08012f6c();
            iVar16 = DAT_08018480;
            *(ushort *)(DAT_08018480 + 0x4a) = uVar10;
            if (*(char *)(iVar16 + 0x5e) == '\0') {
              *(undefined2 *)(iVar16 + 0x5b) = 0;
            }
            if (*(uint *)(iVar16 + 0x53) != (uint)*(ushort *)(iVar16 + 0x5b)) {
              *(undefined2 *)(iVar16 + 0x5b) = 0;
            }
            *(undefined1 *)(iVar16 + 0x5e) = 0xf;
            uVar15 = uVar21 + (uint)*(ushort *)(iVar16 + 0x5b) * 10;
            uVar20 = uVar15 & 0xffff;
            *(short *)(iVar16 + 0x5b) = (short)uVar15;
            if (uVar10 < uVar20) {
              if (uVar10 < uVar21) {
                *(undefined4 *)(iVar16 + 0x53) = 0;
              }
              else {
                *(uint *)(iVar16 + 0x53) = uVar21;
              }
            }
            else {
              *(uint *)(iVar16 + 0x53) = uVar20;
            }
            uVar21 = *(uint *)(iVar16 + 0x53);
            if (uVar21 == 0) {
              uVar21 = FUN_080073a4(7);
              return uVar21;
            }
            *(short *)(iVar16 + 0x5b) = (short)uVar21;
            *(undefined4 *)(iVar16 + *(int *)(iVar16 + 8) * 4 + 0xc) = 0;
            *(undefined4 *)(iVar16 + *(int *)(iVar16 + 8) * 4 + 0x20) = 0;
            *(undefined4 *)(iVar16 + *(int *)(iVar16 + 8) * 4 + 0x34) = 0;
            iVar26 = DAT_08018480 + -0xa3;
            *(undefined1 *)(*(int *)(iVar16 + 8) + iVar26) = 0;
            FUN_08022df0(1);
            if ((uVar21 <= *(ushort *)(iVar16 + 0x4a)) && (1 < uVar21)) {
              FUN_08022df0(1);
              while (uVar21 = uVar21 - 1, uVar21 != 0) {
                iVar13 = iVar16 + *(int *)(iVar16 + 8) * 4;
                *(int *)(iVar13 + 0xc) = *(int *)(iVar13 + 0xc) + 1;
                iVar13 = FUN_08022df0(1);
                if (iVar13 == 0) {
                  iVar13 = iVar16 + *(int *)(iVar16 + 8) * 4;
                  if (*(uint *)(iVar13 + 0x20) < 3) {
                    *(uint *)(iVar13 + 0x20) = *(uint *)(iVar13 + 0x20) + 1;
                  }
                  else {
                    *(int *)(iVar13 + 0x34) = *(int *)(iVar13 + 0x34) + 1;
                  }
                  bVar7 = *(byte *)(*(int *)(iVar16 + 8) + iVar26);
                  if (bVar7 < 0xb) {
                    *(byte *)(*(int *)(iVar16 + 8) + iVar26) = bVar7 + 1;
                  }
                }
                else {
                  *(undefined4 *)(iVar16 + *(int *)(iVar16 + 8) * 4 + 0x20) = 0;
                  *(undefined4 *)(iVar16 + *(int *)(iVar16 + 8) * 4 + 0x34) = 0;
                  *(undefined1 *)(*(int *)(iVar16 + 8) + iVar26) = 0;
                }
              }
            }
            iVar16 = DAT_08018484;
            *(undefined1 *)(DAT_08018484 + 2) = 0;
            *(undefined1 *)(iVar16 + 3) = 0;
            uVar21 = FUN_08019a50();
            return uVar21;
          }
          puVar17 = (ushort *)(*extraout_r3_03 - 0x30 & 0xff);
          FUN_08007e90(puVar17);
          FUN_08018340();
          iVar16 = DAT_08018658;
          local_20 = (ushort *)(uint)*(ushort *)(DAT_08018658 + 1);
          *(ushort *)(DAT_08018658 + -6) = *(ushort *)(DAT_08018658 + 1);
          if (*(char *)(iVar16 + 0xe) == '\0') {
            *(undefined2 *)(iVar16 + 0xb) = 0;
          }
          puVar22 = (undefined4 *)(uint)*(byte *)(iVar16 + 0xd);
          if ((puVar22 == (undefined4 *)0x1) &&
             (*(int *)(iVar16 + 3) + 1U != (uint)*(ushort *)(iVar16 + 0xb))) {
            *(undefined2 *)(iVar16 + 0xb) = 0;
          }
          *(undefined1 *)(iVar16 + 0xe) = 0xf;
          local_1c = (ushort *)((uint)(puVar17 + (uint)*(ushort *)(iVar16 + 0xb) * 5) & 0xffff);
          *(short *)(iVar16 + 0xb) = (short)(puVar17 + (uint)*(ushort *)(iVar16 + 0xb) * 5);
          puVar14 = local_20;
          if (puVar22 != (undefined4 *)0x0) {
            puVar14 = (ushort *)((int)local_20 + 1U & 0xffff);
          }
          puVar24 = local_1c;
          if ((puVar14 <= local_1c) && (puVar24 = puVar17, local_20 <= puVar17)) {
            uVar21 = FUN_080073a4(7);
            return uVar21;
          }
          if (puVar22 == (undefined4 *)0x0) {
            *(short *)(iVar16 + 0xb) = (short)puVar24;
            *(ushort **)(iVar16 + 3) = puVar24;
          }
          else {
            if (puVar24 == (ushort *)0x0) {
              uVar21 = FUN_080073a4(7);
              return uVar21;
            }
            *(short *)(iVar16 + 0xb) = (short)puVar24;
            *(int *)(iVar16 + 3) = (int)puVar24 + -1;
          }
          uVar21 = *(uint *)(iVar16 + 3);
          if (uVar21 < 3) {
            *(short *)(iVar16 + 9) = (short)uVar21;
            *(undefined2 *)(iVar16 + -4) = 0;
          }
          else {
            *(undefined2 *)(iVar16 + 9) = 3;
            local_20 = (ushort *)(uVar21 - 3);
            *(short *)(iVar16 + -4) = (short)local_20;
          }
          if (uVar21 == 0) {
            *(undefined2 *)(iVar16 + 9) = 0;
            *(undefined2 *)(iVar16 + -4) = 0;
          }
          goto LAB_08020500;
        }
        bVar7 = *extraout_r3_03;
        uVar21 = bVar7 - 0x30 & 0xff;
        iVar26 = DAT_0801734c + 0x12;
        uVar15 = *(uint *)(DAT_0801734c + 4);
        if ((uVar15 == 0) || (3 < uVar15)) {
          *(undefined4 *)(DAT_0801734c + 4) = 0;
          if ((uVar21 == 0) || (uVar21 - 3 < 3)) {
            uVar21 = FUN_080073a4(7);
            return uVar21;
          }
          if (5 < uVar21) {
            *(undefined4 *)(iVar16 + 4) = 1;
            *(undefined1 *)(iVar16 + 0x12) = 0x30;
            *(int *)(iVar16 + 0xc) = *(int *)(iVar16 + 0xc) + 1;
          }
          *(byte *)(*(int *)(iVar16 + 4) + iVar26) = bVar7;
          *(undefined1 *)(iVar16 + 0x11) = 0xaa;
        }
        else {
          *(byte *)(uVar15 + iVar26) = bVar7;
        }
        *(int *)(iVar16 + 0xc) = *(int *)(iVar16 + 0xc) + 1;
        *(int *)(iVar16 + 4) = *(int *)(iVar16 + 4) + 1;
        if (*(char *)(DAT_08017350 + 7) == '\0') {
          FUN_080073a4(0);
        }
        else {
          FUN_08007e90();
        }
      }
      else {
        if (uVar20 == 0x11) {
          if ((uVar21 == 6) && (*DAT_08018ab8 != '\0')) {
            uVar21 = FUN_0800e528();
            return uVar21;
          }
          iVar16 = FUN_08012fe8();
          FUN_080234f8(*(undefined1 *)(iVar16 + 0x1c),1);
          piVar6 = DAT_080190e0;
          if (*(code **)(iVar16 + 0x10) == (code *)0x0) {
switchD_0801900a_caseD_0:
            iVar16 = DAT_080190e8;
            *(undefined1 *)(DAT_080190e8 + 2) = 0;
            *(undefined1 *)(iVar16 + 3) = 0;
            iVar16 = piVar6[2];
            piVar6[2] = iVar16 + 1;
            piVar6[iVar16 + 4] = 0;
            FUN_08022df0(1);
            piVar6[piVar6[2] + 8] = 0;
            piVar6[piVar6[2] + 0xd] = 0;
            *(undefined1 *)((int)piVar6 + piVar6[2] + -0xa3) = 0;
            uVar21 = FUN_08019a50();
            return uVar21;
          }
          uVar21 = (**(code **)(iVar16 + 0x10))();
          switch(uVar21) {
          case 0:
            goto switchD_0801900a_caseD_0;
          case 1:
            uVar21 = FUN_08019af0();
            return uVar21;
          case 2:
            bVar9 = true;
            break;
          case 3:
            piVar6[piVar6[2] + 3] = 0;
            FUN_08022df0(1);
            piVar6[piVar6[2] + 8] = 0;
            piVar6[piVar6[2] + 0xd] = 0;
            *(undefined1 *)((int)piVar6 + piVar6[2] + -0xa3) = 0;
            uVar21 = FUN_08019a50();
            return uVar21;
          case 4:
            uVar21 = FUN_08019a50();
            return uVar21;
          case 5:
            FUN_0800e95c(1);
            if (*piVar6 != DAT_080190e4) {
              uVar21 = FUN_080073a4(2);
              return uVar21;
            }
            FUN_0801b4c0();
            uVar21 = FUN_080073f8(2);
            return uVar21;
          case 6:
            FUN_08019af0();
            bVar9 = true;
            break;
          default:
            return uVar21;
          case 8:
            FUN_0800da50();
            iVar16 = DAT_0800e168;
            *(undefined1 *)(DAT_0800e168 + 1) = 1;
            FUN_080179a0();
            FUN_0800a1a8();
            puVar22 = DAT_0800e170;
            *DAT_0800e170 = DAT_0800e16c;
            *(undefined1 *)(iVar16 + 2) = 0;
            *(undefined4 *)((int)puVar22 + -0xa3) = 0;
            *(undefined1 *)((int)puVar22 + -0x9f) = 0;
            FUN_08000fd2((int)puVar22 + -0x9e,0x9c);
            *(undefined1 *)(iVar16 + 3) = 8;
            puVar22[2] = 0;
            FUN_08001016(puVar22 + 3,0x14);
            FUN_08001016(puVar22 + 8,0x14);
            FUN_08001016(puVar22 + 0xd,0x14);
            FUN_08022df0(1);
            FUN_08019a50();
            uVar21 = FUN_080234f8(0x4b,6);
            return uVar21;
          case 9:
            FUN_08019af0();
            uVar21 = FUN_08019af0();
            return uVar21;
          }
LAB_080190ec:
          if ((!bVar9) && (pbVar18 = (byte *)FUN_08012fe8(), (int)((uint)*pbVar18 << 0x1b) < 0)) {
            return 1;
          }
          uVar12 = FUN_08012f6c();
          piVar6 = DAT_080191a8;
          *(undefined2 *)((int)DAT_080191a8 + 0x4a) = uVar12;
          iVar16 = FUN_08013020();
          iVar26 = piVar6[2];
          if ((uint)piVar6[iVar26 + 3] < iVar16 - 1U) {
            piVar6[iVar26 + 3] = piVar6[iVar26 + 3] + 1;
            iVar16 = FUN_08022df0(1);
            if (iVar16 == 0) {
              iVar16 = piVar6[2];
              if ((uint)piVar6[iVar16 + 8] < 3) {
                piVar6[iVar16 + 8] = piVar6[iVar16 + 8] + 1;
              }
              else {
                piVar6[iVar16 + 0xd] = piVar6[iVar16 + 0xd] + 1;
              }
              bVar7 = *(byte *)((int)piVar6 + piVar6[2] + -0xa3);
              if (bVar7 < 0xb) {
                *(byte *)((int)piVar6 + piVar6[2] + -0xa3) = bVar7 + 1;
              }
            }
            else {
              piVar6[piVar6[2] + 8] = 0;
              piVar6[piVar6[2] + 0xd] = 0;
              *(undefined1 *)((int)piVar6 + piVar6[2] + -0xa3) = 0;
            }
          }
          else {
            piVar6[iVar26 + 3] = 0;
            FUN_08022df0(1);
            piVar6[piVar6[2] + 8] = 0;
            piVar6[piVar6[2] + 0xd] = 0;
            *(undefined1 *)((int)piVar6 + piVar6[2] + -0xa3) = 0;
          }
          iVar16 = DAT_080191ac;
          *(undefined1 *)(DAT_080191ac + 2) = 0;
          if ((piVar6[2] == 0) && (*piVar6 == DAT_080191b0)) {
            *(undefined1 *)(iVar16 + 3) = 8;
          }
          else {
            *(undefined1 *)(iVar16 + 3) = 0;
          }
          FUN_08019a50();
          return 0;
        }
        if (uVar20 != 0x12) goto LAB_080187a4;
        if (((uVar21 == 6) || (uVar21 == 3)) && (iVar16 = FUN_08006c6c(), iVar16 == 0)) {
          uVar21 = FUN_0800ba44(0);
          return uVar21;
        }
        if (*(char *)(iVar25 + 2) != '\x02') {
          FUN_0800a178();
          FUN_0801b334();
          uVar21 = FUN_08019af0();
          return uVar21;
        }
        iVar16 = FUN_08006cc8();
        if (iVar16 != 0) {
          local_18 = (undefined4 *)0x0;
          FUN_08027990(0xdc,0x50,0x4f,0x1b);
          uVar21 = FUN_08019af0();
          return uVar21;
        }
      }
      iVar16 = DAT_08017a7c;
      local_1c = (ushort *)0x0;
      local_18 = (undefined4 *)0x0;
      if (*(char *)(DAT_08017a7c + 0x11) == -0x56) {
        FUN_080154a4(0x50,0xa0,0xdc,0xf8,1,0);
        FUN_0801caec(0x50,0xdc,0xa0,0xa514,1);
        FUN_0801cbe8(0x50,0xdc,0xf7,0xa514,1);
        FUN_0801caec(0x50,0xf7,0xa0,0xa514,1);
        FUN_0801cbe8(0x9f,0xdc,0xf8,0xa514,1);
        FUN_08015500();
      }
      FUN_08000bca(&local_1c,5,0x2d);
      local_1c = (ushort *)CONCAT13(0x2e,(undefined3)local_1c);
      uVar21 = 0;
      uVar20 = *(uint *)(iVar16 + 4);
      for (uVar15 = 0; uVar15 < uVar20; uVar15 = uVar15 + 1 & 0xff) {
        *(undefined1 *)((int)&local_1c + uVar21) = *(undefined1 *)(iVar16 + uVar15 + 0x12);
        uVar21 = uVar21 + 1 & 0xff;
        if (uVar21 == 3) {
          uVar21 = 4;
        }
      }
      FUN_080154a4(0x57,0x9e,0xde,0xf7,1,0);
      local_20 = (ushort *)0x1;
      FUN_08014f44(0xde,0x57,&local_1c,0x18,0,0xffff);
      uVar21 = FUN_08015500();
      return uVar21;
    }
    if (uVar20 == 0x18) {
      if (uVar21 == 9) {
        bVar7 = 0x23;
LAB_08018abc:
        FUN_0800a110();
        iVar16 = DAT_08018b28;
        if (bVar7 == 0x23) {
          if (*(char *)(DAT_08018b28 + 0x12) == '-') {
            *(undefined1 *)(DAT_08018b28 + 0x12) = 0x2b;
          }
          else {
            *(undefined1 *)(DAT_08018b28 + 0x12) = 0x2d;
          }
          if (*(int *)(iVar16 + 4) == 0) {
            *(undefined4 *)(iVar16 + 4) = 1;
          }
        }
        else {
          if (*(int *)(DAT_08018b28 + 4) == 0) {
            *(undefined4 *)(DAT_08018b28 + 4) = 1;
            *(undefined1 *)(iVar16 + 0x12) = 0x2b;
          }
          iVar26 = *(int *)(iVar16 + 4);
          *(int *)(iVar16 + 4) = iVar26 + 1;
          *(byte *)(iVar26 + iVar16 + 0x12) = bVar7;
          if ((*(uint *)(iVar16 + 4) == 2) || (*(uint *)(iVar16 + 8) < *(uint *)(iVar16 + 4))) {
            pbVar18 = (byte *)(iVar16 + 0x13);
            pbVar18[0] = 0;
            pbVar18[1] = 0;
            pbVar18[2] = 0;
            pbVar18[3] = 0;
            *(undefined4 *)(iVar16 + 0x17) = 0;
            *(undefined2 *)(iVar16 + 0x1b) = 0;
            *(undefined4 *)(iVar16 + 4) = 2;
            *pbVar18 = bVar7;
            *(undefined4 *)(DAT_08018b2c + 3) = 0;
          }
        }
        FUN_08015ea0(0,0,DAT_08017b34);
        if (*(char *)(DAT_08017b34 + -1) == -0x56) {
          FUN_0800a1c4(4);
        }
        uVar21 = FUN_0801750c();
        return uVar21;
      }
      if (uVar21 != 7) {
        FUN_08018340();
        iVar16 = DAT_08008154;
        if (*(char *)(DAT_08008154 + 2) == '\x06') {
          FUN_0800a178();
          iVar26 = DAT_08008158;
          if (*(char *)(DAT_08008158 + 0x10) == '\x03') {
            FUN_08020324(2);
            FUN_0800ba44(0);
          }
          bVar7 = *(char *)(iVar26 + 0x10) + 1;
          *(byte *)(iVar26 + 0x10) = bVar7;
          if ((*(char *)(iVar16 + 3) == '\x04') || (*(char *)(iVar16 + 3) == '\x06')) {
            bVar8 = 3;
          }
          else if (*(char *)(DAT_0800815c + 8) == '\0') {
            bVar8 = 3;
          }
          else {
            bVar8 = 4;
          }
          if (bVar8 <= bVar7) {
            *(undefined1 *)(iVar26 + 0x10) = 0;
          }
          FUN_0800bb38();
          uVar21 = FUN_080073a4(6);
          return uVar21;
        }
        uVar21 = FUN_080073a4(0);
        return uVar21;
      }
      FUN_08018340();
      iVar16 = DAT_0800ad00;
      *(undefined2 *)(DAT_0800ad00 + 0xb) = 0;
      *(undefined2 *)(iVar16 + -6) = *(undefined2 *)(iVar16 + 1);
      uVar21 = *(uint *)(iVar16 + 3);
      if (uVar21 == 0) {
        return 0;
      }
      if (uVar21 < 0x6a) {
        *(uint *)(iVar16 + 3) = uVar21 + 0x69;
        *(undefined2 *)(iVar16 + 9) = 3;
        *(short *)(iVar16 + -4) = (short)(uVar21 + 0x69) + -3;
        FUN_080073a4(2);
        local_20 = extraout_r1;
        local_1c = extraout_r2;
        puVar22 = extraout_r3;
      }
      else {
        uVar21 = uVar21 - 0x69;
        *(uint *)(iVar16 + 3) = uVar21;
        if (uVar21 < 4) {
          *(short *)(iVar16 + 9) = (short)uVar21;
          *(undefined2 *)(iVar16 + -4) = 0;
        }
        else {
          *(undefined2 *)(iVar16 + 9) = 3;
          *(short *)(iVar16 + -4) = (short)uVar21 + -3;
        }
        FUN_080073a4(1);
        local_20 = extraout_r1_00;
        local_1c = extraout_r2_00;
        puVar22 = extraout_r3_00;
      }
      goto LAB_08020500;
    }
    if (0x18 < (int)uVar20) {
      if (uVar20 == 0x24) {
        if (uVar15 == 8) {
          FUN_080073a4(1);
          uVar21 = FUN_08019b8c(0);
          return uVar21;
        }
        uVar21 = FUN_080073a4(0,0x24,uVar21,param_4);
        return uVar21;
      }
      if (uVar20 == 0x25) {
        if (uVar15 != 8) {
          uVar21 = FUN_080073a4(0,0x25,uVar21,param_4);
          return uVar21;
        }
        FUN_080073a4(2);
        bVar9 = false;
        goto LAB_080190ec;
      }
      if (uVar20 == 0xa1) {
        uVar21 = 0;
        do {
          uVar15 = (uint)*(byte *)(iVar16 + uVar21);
          if ((uVar15 != 0) && (uVar20 = *(uint *)(iVar26 + uVar21 * 0x48), 0x10 < uVar20)) {
            iVar25 = iVar26 + uVar21 * 0x48;
            iVar27 = uVar21 * 0x48 + 8;
            iVar13 = *(int *)(iVar25 + 4);
            bVar7 = *(byte *)(iVar13 + iVar26 + iVar27);
            if ((bVar7 < 0x80) && (bVar7 != 2)) {
              *(int *)(iVar25 + 4) = iVar13 + 1;
            }
            else {
              *(int *)(iVar25 + 4) = iVar13 + 2;
            }
            if (uVar20 <= *(uint *)(iVar25 + 4)) {
              *(undefined4 *)(iVar25 + 4) = 0;
            }
            FUN_080203e4(uVar21 + 0x10,0);
            FUN_08000838(s______s_08007e84,0x10,0x10,*(int *)(iVar25 + 4) + iVar26 + iVar27);
            uVar15 = FUN_08022e54(uVar21 & 0xff);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < 4);
        return uVar15;
      }
      goto LAB_080187a4;
    }
    uVar21 = (uint)*DAT_08018ab4;
    if (uVar20 != 0x14) {
      if (uVar20 == 0x15) {
        if (uVar15 == 8) {
          iVar16 = FUN_0801853c(0);
          if (iVar16 == 1) {
            uVar21 = FUN_080073a4(7);
            return uVar21;
          }
          uVar21 = FUN_080073a4(2);
          return uVar21;
        }
        FUN_080073a4(2);
        cVar1 = *(char *)(iVar25 + 2);
        if (cVar1 == '\0') {
          bVar9 = false;
          goto LAB_080190ec;
        }
        if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) {
          if ((cVar1 != '\x06') && (cVar1 != '\x03')) {
            uVar21 = FUN_080073a4(0);
            return uVar21;
          }
          *puVar5 = 0xff;
          FUN_080220a0(0);
          uVar21 = FUN_0800ba44(0);
          return uVar21;
        }
      }
      else {
        if (uVar20 != 0x16) goto LAB_080187a4;
        if (uVar15 == 8) {
          uVar21 = FUN_080073a4(7,0x16,uVar21,param_4);
          return uVar21;
        }
        if (uVar21 == 0) {
          *DAT_08018ab4 = 1;
          FUN_080073a4(2);
          uVar19 = extraout_r1_06;
          uVar21 = extraout_r2_04;
        }
        else {
          uVar19 = 0x16;
        }
        cVar1 = *(char *)(iVar25 + 2);
        if (cVar1 == '\0') {
          bVar9 = false;
          goto LAB_080190ec;
        }
        if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) {
          uVar21 = FUN_080073a4(0,uVar19,uVar21,local_18);
          return uVar21;
        }
      }
      FUN_08018340();
      puVar17 = DAT_080186bc;
      DAT_080186bc[5] = 0;
      puVar22 = (undefined4 *)((int)puVar17 + -0x51);
      *(ushort *)((int)puVar17 + -7) = *puVar17;
      local_1c = (ushort *)((int)puVar17 + -1);
      if (puVar17[4] < 3) {
        puVar17[4] = puVar17[4] + 1;
      }
      else {
        *(short *)((int)puVar17 + -5) = *(short *)((int)puVar17 + -5) + 1;
      }
      local_20 = (ushort *)(*puVar17 - 1);
      if (*(ushort **)(puVar17 + 1) < local_20) {
        *(int *)(puVar17 + 1) = (int)*(ushort **)(puVar17 + 1) + 1;
      }
      else {
        local_1c = puVar17 + 1;
        local_1c[0] = 0;
        local_1c[1] = 0;
        puVar17[4] = 0;
        *(undefined2 *)((int)puVar17 + -5) = 0;
      }
      if (*(char *)(DAT_080186c0 + 2) == '\x02') {
        FUN_0801b334();
        local_20 = extraout_r1_03;
        local_1c = extraout_r2_01;
        puVar22 = extraout_r3_01;
      }
      goto LAB_08020500;
    }
    if (uVar15 == 8) {
      uVar21 = FUN_080073a4(7,0x14,uVar21,param_4);
      return uVar21;
    }
    if (uVar21 == 0) {
      *DAT_08018ab4 = 1;
      FUN_080073a4(1);
      uVar19 = extraout_r1_05;
      uVar21 = extraout_r2_03;
    }
    else {
      uVar19 = 0x14;
    }
    cVar1 = *(char *)(iVar25 + 2);
    if (cVar1 == '\0') {
      uVar21 = FUN_08019b8c(0,uVar19,uVar21,local_18);
      return uVar21;
    }
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) {
      uVar21 = FUN_080073a4(0,uVar19,uVar21,local_18);
      return uVar21;
    }
  }
  FUN_08018340();
  puVar4 = DAT_0801873c;
  *(undefined2 *)((int)DAT_0801873c + 0xb) = 0;
  uVar10 = *(ushort *)((int)puVar4 + 1);
  uVar21 = (uint)uVar10;
  *(ushort *)((int)puVar4 + -6) = uVar10;
  if (uVar21 < 4) {
    local_20 = (ushort *)(uVar21 - 1);
  }
  else {
    local_20 = (ushort *)0x3;
  }
  if (*(int *)((int)puVar4 + 3) == 0) {
    local_1c = (ushort *)(uVar21 - 1);
    puVar22 = (undefined4 *)((int)puVar4 + 3);
    *puVar22 = local_1c;
    *(short *)((int)puVar4 + 9) = (short)local_20;
    if (uVar21 < 5) {
      sVar11 = 0;
    }
    else {
      sVar11 = uVar10 - 4;
    }
    *(short *)(puVar4 + -1) = sVar11;
  }
  else {
    local_1c = (ushort *)(*(int *)((int)puVar4 + 3) + -1);
    *(ushort **)((int)puVar4 + 3) = local_1c;
    puVar22 = puVar4;
    if (*(short *)((int)puVar4 + 9) == 0) {
      if (*(short *)(puVar4 + -1) != 0) {
        *(short *)(puVar4 + -1) = *(short *)(puVar4 + -1) + -1;
      }
    }
    else {
      *(short *)((int)puVar4 + 9) = *(short *)((int)puVar4 + 9) + -1;
    }
  }
  if (*(char *)(DAT_08018740 + 2) == '\x02') {
    FUN_0801b334();
    local_20 = extraout_r1_04;
    local_1c = extraout_r2_02;
    puVar22 = extraout_r3_02;
  }
LAB_08020500:
  puVar4 = DAT_0802063c;
  *DAT_0802063c = 0;
  *(undefined1 *)(puVar4 + 1) = 0;
  pcVar2 = DAT_08020640;
  uVar15 = (uint)*(ushort *)(DAT_08020640 + 9);
  uVar21 = *(uint *)(DAT_08020640 + 3);
  *(undefined1 *)((int)puVar4 + uVar15) = 1;
  local_18 = puVar22;
  while (uVar15 != 0) {
    uVar15 = uVar15 - 1;
    uVar20 = uVar21 - 1;
    if (*pcVar2 == '\0') {
      FUN_08000850(&local_20,&DAT_08020644,*(undefined4 *)(pcVar2 + 3));
      if (*(ushort *)(pcVar2 + 7) == uVar20) {
        uVar19 = 2;
      }
      else {
        uVar19 = 1;
      }
      FUN_08015ea0(uVar15,uVar21 & 0xff,&local_20,uVar19);
      uVar21 = uVar20;
    }
    else if (*pcVar2 == '\x01') {
      if (*(ushort *)(pcVar2 + 7) == uVar20) {
        uVar19 = 2;
      }
      else {
        uVar19 = 1;
      }
      FUN_08015ea0(uVar15,uVar21 & 0xff,*(undefined4 *)(*(int *)(pcVar2 + 0x13) + uVar20 * 4),uVar19
                  );
      uVar21 = uVar20;
    }
    else {
      uVar19 = (**(code **)(pcVar2 + 0xf))(uVar20);
      if (*(ushort *)(pcVar2 + 7) == uVar20) {
        uVar23 = 2;
      }
      else {
        uVar23 = 1;
      }
      FUN_08015ea0(uVar15,uVar21 & 0xff,uVar19,uVar23);
      uVar21 = uVar20;
    }
  }
  uVar21 = *(uint *)(pcVar2 + 3);
  for (uVar15 = (uint)*(ushort *)(pcVar2 + 9); uVar15 < 4; uVar15 = uVar15 + 1) {
    if (uVar21 < *(ushort *)(pcVar2 + 1)) {
      if (*pcVar2 == '\0') {
        FUN_08000850(&local_20,&DAT_08020644,*(undefined4 *)(pcVar2 + 3));
        if (*(ushort *)(pcVar2 + 7) == uVar21) {
          uVar19 = 2;
        }
        else {
          uVar19 = 1;
        }
        FUN_08015ea0(uVar15,uVar21 + 1 & 0xff,&local_20,uVar19);
      }
      else if (*pcVar2 == '\x01') {
        if (*(ushort *)(pcVar2 + 7) == uVar21) {
          uVar19 = 2;
        }
        else {
          uVar19 = 1;
        }
        FUN_08015ea0(uVar15,uVar21 + 1 & 0xff,*(undefined4 *)(*(int *)(pcVar2 + 0x13) + uVar21 * 4),
                     uVar19);
      }
      else {
        uVar19 = (**(code **)(pcVar2 + 0xf))(uVar21);
        if (*(ushort *)(pcVar2 + 7) == uVar21) {
          uVar23 = 2;
        }
        else {
          uVar23 = 1;
        }
        FUN_08015ea0(uVar15,uVar21 + 1 & 0xff,uVar19,uVar23);
      }
      uVar21 = uVar21 + 1;
    }
    else {
      FUN_08015ea0(uVar15,uVar21 + 1 & 0xff,&DAT_08020648,0);
    }
  }
  uVar21 = FUN_0801750c();
  return uVar21;
}

