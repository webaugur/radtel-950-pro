/**
 * @brief fun_08019224
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019224, Ghidra name FUN_08019224, 1760 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08019224(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_r1;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 unaff_lr;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  puVar5 = DAT_0801945c;
  pcVar11 = DAT_0800e06c;
  iVar14 = DAT_0800e068;
  iVar6 = DAT_0800ddb8;
  iVar12 = DAT_08019458 + (uint)*(byte *)(DAT_08019458 + 0xfa) * 0x58;
  iVar10 = DAT_0801945c[1];
  switch(*(uint *)(param_1 + 4)) {
  case 2:
    if (*(char *)(DAT_08014714 + 99) == '\0') {
      *(undefined1 *)(DAT_08014714 + 99) = 1;
      FUN_080234ac(0x25);
    }
    else {
      *(undefined1 *)(DAT_08014714 + 99) = 0;
      FUN_080234ac(0x26);
    }
    FUN_0800cf58(1);
    return;
  case 3:
    FUN_080039f8(1);
    return;
  default:
    if (*(uint *)(param_1 + 4) < 0xa0) {
      FUN_080073a4(0);
      return;
    }
    break;
  case 5:
    FUN_0800e174();
    return;
  case 7:
    if ((*(char *)(DAT_0800e064 + 0x19) != '\0') || (*(char *)(DAT_0800e068 + 0x14) == '\x04')) {
      FUN_080073a4(0);
      return;
    }
    DAT_0800e06c[0x1d] = '\0';
    uVar17 = DAT_0800e078;
    uVar15 = DAT_0800e074;
    puVar4 = DAT_0800e070;
    if (*(char *)((int)DAT_0800e070 + 0x43) == '\0') {
      FUN_08012ae2(DAT_0800e074,0x80);
      FUN_08012ae2(uVar17,0x20);
    }
    else {
      FUN_08012ae6(DAT_0800e078,0x20);
      FUN_08012ae6(uVar15,0x80);
    }
    FUN_0800da50();
    if (*(char *)(iVar14 + 1) == '\x01') {
      FUN_0800e95c(0);
    }
    FUN_0801b334();
    *(undefined1 *)(iVar14 + 1) = 2;
    if (*pcVar11 != '\x01') {
      *pcVar11 = '\x02';
      FUN_0801b70c(1);
      if (*(byte *)((int)puVar4 + 0x43) == 1) {
        if (*(char *)((int)puVar4 + 0x21) == '\x01') {
          *(undefined2 *)(pcVar11 + 2) = puVar4[*(byte *)(puVar4 + 0x21) + 0x12];
        }
        else {
          *(undefined2 *)(pcVar11 + 2) = puVar4[0x11];
        }
        uVar13 = (uint)*(ushort *)(pcVar11 + 2);
        if (uVar13 - 0x208 < 0x4a7) {
          pcVar11[1] = '\x01';
        }
        else if (uVar13 - 0x8fc < 0x6c35) {
          pcVar11[1] = '\x02';
        }
        else if (uVar13 - 0x99 < 0x7f) {
          pcVar11[1] = '\0';
        }
        else {
          pcVar11[1] = '\x02';
          pcVar11[2] = -4;
          pcVar11[3] = '\b';
        }
        pcVar11[0x17] = *(char *)(puVar4 + 0x22);
      }
      else if (*(byte *)((int)puVar4 + 0x43) < 2) {
        if (*(char *)((int)puVar4 + 0x21) == '\x01') {
          *(undefined2 *)(pcVar11 + 2) = puVar4[*(byte *)(puVar4 + 0x10) + 1];
        }
        else {
          *(undefined2 *)(pcVar11 + 2) = *puVar4;
        }
        if (0x1130 < *(ushort *)(pcVar11 + 2) - 0x1900) {
          pcVar11[2] = '\0';
          pcVar11[3] = '\x19';
        }
      }
      else {
        if (*(char *)((int)puVar4 + 0x21) == '\x01') {
          bVar2 = *(byte *)((int)puVar4 + 0x95);
          *(undefined2 *)(pcVar11 + 2) = *(undefined2 *)((int)puVar4 + (uint)bVar2 * 5 + 0x4a);
          pcVar11[0x16] = *(char *)((int)puVar4 + (uint)bVar2 * 5 + 0x4c);
          *(undefined2 *)(pcVar11 + 0x18) = *(undefined2 *)((int)puVar4 + (uint)bVar2 * 5 + 0x4d);
        }
        else {
          *(undefined2 *)(pcVar11 + 2) = *(undefined2 *)((int)puVar4 + 0x45);
          pcVar11[0x16] = *(char *)((int)puVar4 + 0x47);
          *(undefined2 *)(pcVar11 + 0x18) = puVar4[0x24];
        }
        if (0x749a < *(ushort *)(pcVar11 + 2) - 0x96) {
          pcVar11[2] = -0x6a;
          pcVar11[3] = '\0';
        }
        pcVar11[0x17] = *(char *)(puVar4 + 0x4c);
      }
      FUN_08011864();
      FUN_0800eccc();
      FUN_0800efa0(*(undefined2 *)(pcVar11 + 2));
      FUN_08010fa0();
      return;
    }
    pcVar11[4] = '\0';
    pcVar11[5] = '\0';
    *pcVar11 = '\x02';
    FUN_08010fa0();
    return;
  case 0xb:
  case 0x19:
    FUN_080229c8();
    FUN_080073a4(3);
    return;
  case 0xc:
    FUN_0800e754();
    return;
  case 0xd:
    FUN_0800da50();
    iVar6 = FUN_08008f30();
    if (iVar6 == 0) {
      FUN_080073a4(7);
      return;
    }
    break;
  case 0x10:
    if (*DAT_08019460 != '\x02') {
      *(undefined1 *)((int)DAT_0801945c + iVar10 + 0x12) = *param_1;
      *puVar5 = 0x32;
      if ((uint)puVar5[1] < 0x40) {
        puVar5[1] = puVar5[1] + 1;
      }
      puVar5 = DAT_0801945c;
      iVar6 = DAT_080085bc;
      if (*(char *)(iVar12 + 0x130) != '\x01') {
        FUN_0801b564();
        FUN_0800bbb4();
        uVar13 = *(byte *)((int)puVar5 + puVar5[1] + 0x11) - 0x30 & 0xff;
        if (*(char *)(DAT_080232fc + 7) == '\0') {
          FUN_080073a4(0);
        }
        else {
          FUN_08008000(uVar13);
        }
        if (puVar5[1] == 6) {
          FUN_0800da50();
          *(undefined1 *)((int)puVar5 + puVar5[1] + 0x12) = 0;
          iVar6 = 0;
          uVar9 = 0;
          do {
            iVar6 = iVar6 * 10 + -0x30 + (uint)*(byte *)((int)puVar5 + uVar9 + 0x12);
            uVar9 = uVar9 + 1 & 0xff;
          } while (uVar9 < 6);
          puVar5[1] = 0;
          iVar14 = DAT_08023304;
          if (uVar13 == 9) {
            uVar13 = -(uint)*(byte *)(DAT_08023300 + 9);
          }
          else {
            uVar13 = (uint)*(byte *)(DAT_08023300 + uVar13);
          }
          iVar10 = uVar13 + iVar6 * 100;
          iVar6 = FUN_0800a07c(iVar10,*(undefined1 *)(DAT_08023304 + 0xfa));
          if (iVar6 == 0) {
            FUN_080234f8(0x48,5);
          }
          else {
            *(int *)(iVar14 + (uint)*(byte *)(iVar14 + 0xfa) * 0x58 + 0x110) = iVar10;
            FUN_08007dc0();
            *(undefined1 *)(iVar14 + (uint)*(byte *)(iVar14 + 0xfa) * 0x24 + 0x2e2) =
                 *(undefined1 *)(iVar14 + 0x10a);
            FUN_080231e8();
          }
          FUN_0801c9a0();
          FUN_0800d1f4();
          return;
        }
        return;
      }
      if (((DAT_0801945c[1] == 1) && (*(char *)(DAT_080085bc + 6) == '\0')) &&
         (pbVar1 = (byte *)((int)DAT_0801945c + 0x12), 0x39 < *pbVar1)) {
        DAT_0801945c[1] = 2;
        *(byte *)((int)puVar5 + 0x13) = *pbVar1;
        *(undefined1 *)((int)puVar5 + 0x12) = 0x30;
      }
      FUN_0800b9a8();
      if (*(char *)(DAT_080085c0 + 7) == '\0') {
        FUN_080073a4(0);
      }
      else {
        FUN_08008000(*(char *)((int)puVar5 + puVar5[1] + 0x11) + -0x30);
      }
      if (((puVar5[1] != 2) || (*(char *)(iVar6 + 6) != '\0')) &&
         ((puVar5[1] != 3 || (*(char *)(iVar6 + 6) == '\0')))) {
        return;
      }
      FUN_0800da50();
      *(undefined1 *)((int)puVar5 + puVar5[1] + 0x12) = 0;
      uVar13 = FUN_08000bb0();
      iVar14 = DAT_080085c4;
      if (*(char *)(iVar6 + 6) == '\0') {
        uVar8 = 99;
        uVar9 = (uint)*(byte *)((uint)*(byte *)(DAT_080085c4 + 0xfa) + DAT_080085bc + 0xd) * 99 +
                uVar13;
      }
      else {
        uVar8 = 0x3de;
        uVar9 = uVar13;
      }
      if (((uVar13 == 0) || (uVar8 < uVar13)) ||
         (iVar6 = FUN_080090ec(uVar9 - 1 & 0xffff,0), iVar6 == 0)) {
        FUN_080073a4(0);
        FUN_0801b334();
      }
      else {
        *(short *)(iVar14 + 0x108) = (short)uVar13 + -1;
        FUN_08008488(0,1);
      }
      FUN_0800af94(1);
      return;
    }
    break;
  case 0x11:
    FUN_0800da50();
    iVar6 = DAT_0800e168;
    *(undefined1 *)(DAT_0800e168 + 1) = 1;
    FUN_080179a0();
    FUN_0800a1a8();
    puVar5 = DAT_0800e170;
    *DAT_0800e170 = DAT_0800e16c;
    *(undefined1 *)(iVar6 + 2) = 0;
    *(undefined4 *)((int)puVar5 + -0xa3) = 0;
    *(undefined1 *)((int)puVar5 + -0x9f) = 0;
    FUN_08000fd2((int)puVar5 + -0x9e,0x9c);
    *(undefined1 *)(iVar6 + 3) = 8;
    puVar5[2] = 0;
    FUN_08001016(puVar5 + 3,0x14);
    FUN_08001016(puVar5 + 8,0x14);
    FUN_08001016(puVar5 + 0xd,0x14);
    FUN_08022df0(1);
    FUN_08019a50();
    FUN_080234f8(0x4b,6);
    return;
  case 0x12:
    iVar6 = DAT_0801945c[1];
    if (*(char *)(iVar12 + 0x130) == '\0') {
      if (iVar10 != 0) {
        DAT_0801945c[1] = iVar6 + -1;
        *(undefined1 *)((int)puVar5 + iVar6 + 0x11) = 0x20;
        if (puVar5[1] != 0) {
          *puVar5 = 0x32;
          FUN_0800bbb4();
          FUN_080073a4(0);
          return;
        }
        FUN_0800da50();
        FUN_0800d1f4();
        FUN_080073a4(3);
        return;
      }
      FUN_080073a4(0);
    }
    else if (iVar10 != 0) {
      DAT_0801945c[1] = iVar6 + -1;
      *(undefined1 *)((int)puVar5 + iVar6 + 0x11) = 0x2d;
      if (puVar5[1] != 0) {
        *puVar5 = 0x32;
        FUN_0800b9a8();
        FUN_080073a4(0);
        return;
      }
      FUN_0800da50();
      FUN_0800af94(1);
      FUN_080073a4(3);
      return;
    }
    FUN_080073a4(0);
    return;
  case 0x13:
    iVar6 = 0;
    goto LAB_08019464;
  case 0x14:
    iVar6 = 1;
LAB_08019464:
    FUN_0801b334();
    pcVar11 = DAT_080194cc;
    if ((iVar6 != 0) && (*DAT_080194cc == '\0')) {
      FUN_0800beb4();
      *pcVar11 = '\x01';
      FUN_080073a4();
    }
    FUN_0800da50();
    if (*(char *)(DAT_080194d0 + (uint)*(byte *)(DAT_080194d0 + 0xfa) * 0x58 + 0x130) == '\x01') {
      FUN_080085c8(0,iVar6);
    }
    else {
      FUN_08023308(0);
    }
    if (iVar6 == 0) {
      iVar6 = FUN_0800a0c0();
      if (iVar6 == 0) {
        FUN_080073a4(1);
      }
      FUN_0800beb4();
      return;
    }
    return;
  case 0x15:
    iVar6 = 0;
    goto LAB_080191b4;
  case 0x16:
    iVar6 = 1;
LAB_080191b4:
    FUN_0801b334();
    pcVar11 = DAT_0801921c;
    if ((iVar6 != 0) && (*DAT_0801921c == '\0')) {
      FUN_0800beb4();
      *pcVar11 = '\x01';
      FUN_080073a4(2);
    }
    FUN_0800da50();
    if (*(char *)(DAT_08019220 + (uint)*(byte *)(DAT_08019220 + 0xfa) * 0x58 + 0x130) == '\x01') {
      FUN_08008404(0,iVar6);
    }
    else {
      FUN_08023084(0);
    }
    if (iVar6 == 0) {
      iVar6 = FUN_0800a0c0();
      if (iVar6 == 0) {
        FUN_080073a4(2);
      }
      FUN_0800beb4();
      return;
    }
    return;
  case 0x17:
    FUN_0801b334();
    FUN_0800da50();
    iVar6 = DAT_0801b6c0;
    iVar14 = DAT_0801b6c0 + (uint)*(byte *)(DAT_0801b6c0 + 0xfa) * 0x58;
    bVar2 = *(byte *)(iVar14 + 0x140);
    iVar14 = FUN_0800a07c(*(undefined4 *)(iVar14 + 0x11c));
    if (iVar14 == 1) {
      uVar13 = (bVar2 + 1) % 3;
      FUN_080073a4(6);
      *(char *)(iVar6 + (uint)*(byte *)(iVar6 + 0xfa) * 0x58 + 0x140) = (char)uVar13;
      if (uVar13 == 1) {
        iVar14 = iVar6 + (uint)*(byte *)(iVar6 + 0xfa) * 0x58;
        *(int *)(iVar14 + 0x128) = iVar14 + 0x11c;
        iVar6 = iVar6 + (uint)*(byte *)(iVar6 + 0xfa) * 0x58;
        *(int *)(iVar6 + 300) = iVar6 + 0x110;
      }
      else if (uVar13 == 2) {
        iVar14 = iVar6 + (uint)*(byte *)(iVar6 + 0xfa) * 0x58;
        *(int *)(iVar14 + 0x128) = iVar14 + 0x110;
        iVar6 = iVar6 + (uint)*(byte *)(iVar6 + 0xfa) * 0x58;
        *(int *)(iVar6 + 300) = iVar6 + 0x110;
      }
      else {
        iVar14 = iVar6 + (uint)*(byte *)(iVar6 + 0xfa) * 0x58;
        *(int *)(iVar14 + 0x128) = iVar14 + 0x110;
        iVar6 = iVar6 + (uint)*(byte *)(iVar6 + 0xfa) * 0x58;
        *(int *)(iVar6 + 300) = iVar6 + 0x11c;
      }
    }
    else {
      FUN_0801b564();
      FUN_080073a4(0);
    }
    FUN_0800b604(0);
    FUN_0800beb4();
    FUN_0801c9a0();
    return;
  case 0x18:
    if ((*(char *)(DAT_0800ddb8 + 1) != '\0') && (*(char *)(DAT_0800ddb8 + 0x14) == '\x04')) {
      FUN_080073a4(0);
      return;
    }
    FUN_0800da50();
    FUN_080073a4(6);
    *(undefined1 *)(iVar6 + 1) = 7;
    FUN_0801b334();
    FUN_0800b4b4();
    FUN_0800cfc0();
    return;
  case 0x1c:
    FUN_0800da50();
    puVar3 = PTR_DAT_0801f44c;
    if (PTR_DAT_0801f448[(uint)(byte)PTR_DAT_0801f448[0xfa] * 0x58 + 0x130] == '\x01') {
      if ((PTR_DAT_0801f44c[0x4a] == -0x5b) && ((byte)PTR_DAT_0801f448[0xfa] == 2)) {
        iVar6 = FUN_0801f150();
        if (iVar6 == 0) {
          FUN_080073a4(7);
          return;
        }
      }
      else {
        iVar6 = FUN_0801f118();
        if (iVar6 == 0) {
          FUN_080073a4(7);
          return;
        }
      }
    }
    else if ((*(short *)PTR_DAT_0801f450 == *(short *)(PTR_DAT_0801f450 + 2)) ||
            (iVar6 = FUN_08009598(*(short *)PTR_DAT_0801f450 * 10,
                                  *(short *)(PTR_DAT_0801f450 + 2) * 10), iVar6 == 1)) {
      FUN_080073a4(7);
      return;
    }
    FUN_0801b334();
    puVar3[1] = 3;
    puVar3 = PTR_DAT_0801f454;
    *PTR_DAT_0801f454 = 1;
    *(undefined2 *)(puVar3 + 2) = 4;
    puVar3[1] = 1;
    FUN_0800b980();
    FUN_08023510(0x27,3);
    FUN_0800c26c();
    FUN_0801f2f8();
    return;
  case 0x1d:
    FUN_0800e95c(0);
    puVar3 = PTR_DAT_0800e51c;
    if ((PTR_DAT_0800e51c[0x62] != '\0') &&
       ((PTR_DAT_0800e51c[0x4a] != -0x5b || (PTR_DAT_0800e520[0xfa] != '\x02')))) {
      FUN_0800da50();
      FUN_080207ec(6);
      FUN_0801acce(0);
      FUN_08015824(0);
      puVar3[1] = 4;
      puVar3 = PTR_DAT_0800e524;
      PTR_DAT_0800e524[8] = 1;
      *puVar3 = 0;
      puVar3[0x15] = 6;
      FUN_0801ac14(0);
      FUN_0801acde(1);
      FUN_0801a9a4(1);
      uVar15 = extraout_r3;
      FUN_0800b604(1);
      FUN_0800a1c4(4);
      iVar6 = DAT_0801f5e4;
      if (*(char *)(DAT_0801f5e4 + 8) == '\x01') {
        iVar14 = 0x56;
      }
      else {
        iVar14 = 0x52;
      }
      FUN_080154a4(0x47,0xa9,0x7c,0xe0,0,0,uVar15,unaff_r4);
      FUN_08027b14(0x7c,0x49,0x5e,100,DAT_0801f5e8);
      FUN_08015500();
      uVar16 = 0xffff;
      FUN_08027a94(0xe4,iVar14,0x10,0x10,DAT_0801f5ec,0);
      uVar15 = 0;
      uVar17 = 0xffff;
      if (*(char *)(iVar6 + 8) == '\x01') {
        pcVar11 = &DAT_0801f5f8;
      }
      else {
        pcVar11 = s_SEARCH_0801f5f0;
      }
      FUN_08014d88(0xe0,iVar14 + 0x10,pcVar11,0x18);
      uVar7 = FUN_0801f808(0);
      FUN_0801f664(uVar7,uVar15,uVar17,uVar16);
      return;
    }
    FUN_080073f8(7);
    return;
  case 0x1e:
    FUN_08021b78(1);
    FUN_0801b334();
    FUN_080073a4(3);
    return;
  case 0x1f:
    FUN_0801b334();
    FUN_08021c04();
    return;
  case 0x23:
    FUN_0800da50();
    if (*(char *)(DAT_0800e480 + 0x38) == '\x01') {
      *(undefined1 *)(DAT_0800e480 + 0x38) = 0;
    }
    iVar6 = DAT_0800e484;
    if (*(char *)(DAT_0800e484 + 1) == '\x01') {
      FUN_0800e95c(0);
    }
    FUN_0801b334();
    *(undefined1 *)(iVar6 + 1) = 0x11;
    *DAT_0800e488 = 1;
    FUN_0800b604(1);
    FUN_0800ca18();
    FUN_0800a1c4(4);
    uVar17 = 0;
    FUN_080154a4(0x37,0xb9,0x86,0xd1,0,0,unaff_r4,unaff_lr);
    uVar15 = DAT_0801a4ec;
    FUN_08027b14(0x86,0x39,0x7e,0x4b);
    FUN_08015500();
    FUN_0801a4f0(0,extraout_r1,uVar15,uVar17);
    return;
  case 0x2e:
    PTR_DAT_080210f0[1] = 0x15;
    FUN_0801b334();
    FUN_0800da50();
    FUN_0801c9a0();
    puVar3 = PTR_DAT_080210f4;
    FUN_080134cc(**(uint **)(PTR_DAT_080210f4 + 0x18) / 10000 & 0xffff);
    FUN_0801acde(PTR_DAT_080210f8[0x10d]);
    FUN_08006d24();
    FUN_08021184(**(undefined4 **)(puVar3 + 0x18));
    puVar3 = PTR_DAT_080210fc;
    FUN_080213b4(PTR_DAT_080210fc[10]);
    FUN_08021074(puVar3[0xb]);
    FUN_08020b74();
    PTR_DAT_08021100[0x28] = 0;
    FUN_080212e4();
    return;
  case 0x2f:
    FUN_08023650();
    return;
  case 0x31:
    FUN_08006e90();
    FUN_080073a4(1);
    return;
  case 0x32:
    FUN_08006e2c();
    FUN_080073a4(2);
    return;
  case 0x33:
    FUN_0800f114(*param_1);
    return;
  case 0x34:
    FUN_0800f114(10);
    return;
  case 0x35:
    if (PTR_DAT_0800dcdc[1] != '\0') {
      PTR_DAT_0800dce0[1] = 0x14;
      puVar3 = PTR_DAT_0800dce4;
      PTR_DAT_0800dce4[1] = 0;
      puVar3[2] = 0;
      puVar3[4] = 0;
      puVar3[3] = 1;
      *puVar3 = 0;
      FUN_080046c0(0,0);
      return;
    }
    FUN_080073a4(7);
    return;
  }
  return;
}

