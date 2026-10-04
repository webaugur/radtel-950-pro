/**
 * @brief fun_08011ff8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08011ff8, Ghidra name FUN_08011ff8, 1780 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011ff8(byte *param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 uVar16;
  uint uVar17;
  
  puVar10 = DAT_080121f8;
  iVar9 = DAT_080121f0;
  puVar8 = DAT_08011fe8;
  iVar7 = DAT_08010cc0;
  iVar12 = DAT_08010cbc;
  puVar4 = DAT_080109a0;
  puVar6 = DAT_080108c4;
  iVar14 = DAT_080108c0;
  uVar15 = *(uint *)(param_1 + 4);
  if (uVar15 == 0x14) {
    if (*DAT_080121f4 == '\0') {
      *DAT_080121f4 = '\x01';
      FUN_080073a4(6);
      FUN_080207ec(0xc);
    }
    if (*(char *)(iVar9 + 0x1d) == '\0') {
      FUN_08011990();
      return;
    }
    FUN_08010cc4();
    return;
  }
  if ((int)uVar15 < 0x15) {
    if (uVar15 == 0x10) {
      if (*(char *)(DAT_080121fc + 0x21) == '\x01') {
        bVar3 = *param_1;
        *DAT_080109a0 = 0x32;
        iVar14 = puVar4[1];
        puVar4[1] = iVar14 + 1;
        *(byte *)((int)puVar4 + iVar14 + 0x12) = bVar3;
        if ((puVar4[1] == 1) || (2 < (uint)puVar4[1])) {
          if (bVar3 < 0x32) {
            puVar4[1] = 1;
            *(byte *)((int)puVar4 + 0x12) = bVar3;
          }
          else {
            puVar4[1] = 2;
            *(undefined1 *)((int)puVar4 + 0x12) = 0x30;
            *(byte *)((int)puVar4 + 0x13) = bVar3;
          }
        }
        if (*(char *)(DAT_080109a4 + 7) == '\0') {
          FUN_080073a4(0);
        }
        else {
          FUN_08007e90(bVar3 - 0x30);
        }
        if (puVar4[1] == 2) {
          *(undefined1 *)(DAT_080109a0 + 5) = 0;
          uVar15 = FUN_08000d3a();
          FUN_0801b334();
          uVar15 = (uVar15 & 0xff) - 1;
          if ((uVar15 < 0xf) &&
             (iVar12 = FUN_08009384(uVar15 & 0xff), puVar6 = DAT_080109ac, iVar14 = DAT_080109a8,
             iVar12 != 0)) {
            uVar17 = uVar15 & 0xff;
            uVar16 = (undefined1)uVar15;
            if (*(byte *)(DAT_080109a8 + 0x43) == 1) {
              *(undefined1 *)(DAT_080109a8 + 0x42) = uVar16;
              *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(iVar14 + uVar17 * 2 + 0x24);
            }
            else if (*(byte *)(DAT_080109a8 + 0x43) < 2) {
              *(undefined1 *)(DAT_080109a8 + 0x20) = uVar16;
              *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(iVar14 + uVar17 * 2 + 2);
            }
            else {
              *(undefined1 *)(DAT_080109a8 + 0x95) = uVar16;
              iVar14 = uVar17 * 5 + iVar14;
              *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(iVar14 + 0x4a);
              puVar6[0x16] = *(undefined1 *)(iVar14 + 0x4c);
              *(undefined2 *)(puVar6 + 0x18) = *(undefined2 *)(iVar14 + 0x4d);
            }
            *puVar6 = 2;
            *(undefined2 *)(puVar6 + 4) = 10;
            puVar6[0x10] = uVar16;
          }
          else {
            FUN_080234ac(0x48);
          }
          FUN_08010e28();
          return;
        }
        FUN_08000bca(&stack0xfffffff0,2,0x2d);
        uVar17 = *(uint *)(DAT_08011008 + 4);
        for (uVar15 = 0; uVar15 < uVar17; uVar15 = uVar15 + 1) {
          (&stack0xfffffff0)[uVar15] = *(undefined1 *)(DAT_08011008 + uVar15 + 0x12);
        }
        FUN_080154a4(0xc6,0xe4,0x47,0x53,1,0);
        FUN_08014a70(0x47,0xc6,&stack0xfffffff0,0);
        FUN_08015500();
        return;
      }
      bVar3 = *param_1;
      *DAT_08011fe8 = 0x32;
      iVar14 = puVar8[1];
      puVar8[1] = iVar14 + 1;
      *(byte *)((int)puVar8 + iVar14 + 0x12) = bVar3;
      if ((puVar8[1] == 1) || ((uint)puVar8[2] < (uint)puVar8[1])) {
        puVar8[1] = 1;
        *(byte *)((int)puVar8 + 0x12) = bVar3;
      }
      puVar6 = DAT_08011ff0;
      iVar14 = DAT_08011fec;
      uVar15 = 30000;
      if (*(byte *)(DAT_08011fec + 0x43) == 1) {
        if (DAT_08011ff0[1] == '\0') {
          if ((*(byte *)((int)puVar8 + 0x12) == 0x30) || (0x32 < *(byte *)((int)puVar8 + 0x12))) {
            puVar8[1] = 0;
            FUN_080073a4(0);
            return;
          }
          puVar8[2] = 3;
          uVar15 = 0x117;
          uVar17 = 0x99;
        }
        else if (DAT_08011ff0[1] == '\x01') {
          uVar15 = (uint)*(byte *)((int)puVar8 + 0x12);
          if ((uVar15 == 0x30) || (uVar15 - 0x32 < 3)) {
            puVar8[1] = 0;
            FUN_080073a4(0);
            return;
          }
          if (uVar15 == 0x31) {
            puVar8[2] = 4;
          }
          else {
            puVar8[2] = 3;
          }
          uVar15 = 0x6ae;
          uVar17 = 0x208;
        }
        else {
          cVar2 = *(char *)((int)puVar8 + 0x12);
          if (((cVar2 == '0') || (cVar2 == '1')) || (cVar2 == '2')) {
            puVar8[2] = 5;
          }
          else {
            puVar8[2] = 4;
          }
          uVar17 = 0x8fc;
        }
      }
      else if (*(byte *)(DAT_08011fec + 0x43) < 2) {
        uVar15 = (uint)*(byte *)((int)puVar8 + 0x12);
        if ((uVar15 == 0x30) || (uVar15 - 0x32 < 4)) {
          puVar8[1] = 0;
          FUN_080073a4(0);
          return;
        }
        if (uVar15 == 0x31) {
          puVar8[2] = 4;
        }
        else {
          puVar8[2] = 3;
        }
        uVar15 = 0x2a30;
        uVar17 = 0x1900;
      }
      else {
        cVar2 = *(char *)((int)puVar8 + 0x12);
        if (((cVar2 == '0') || (cVar2 == '1')) || (cVar2 == '2')) {
          puVar8[2] = 5;
        }
        else {
          puVar8[2] = 4;
        }
        uVar17 = 0x96;
      }
      if (*(char *)(DAT_08011ff4 + 7) == '\0') {
        FUN_080073a4(0);
      }
      else {
        FUN_08007e90(*(char *)((int)DAT_08011fe8 + puVar8[1] + 0x11) + -0x30);
      }
      if (puVar8[1] != puVar8[2]) {
        FUN_0801100c();
        return;
      }
      *(undefined1 *)((int)DAT_08011fe8 + puVar8[1] + 0x12) = 0;
      uVar13 = FUN_08000d3a();
      FUN_0801b334();
      if (*(char *)(iVar14 + 0x43) == '\0') {
        uVar13 = uVar13 * 10;
      }
      if ((uVar17 <= uVar13) && (uVar13 <= uVar15)) {
        *(short *)(puVar6 + 2) = (short)uVar13;
        *puVar6 = 2;
        *(undefined2 *)(puVar6 + 4) = 10;
        FUN_0801232c();
      }
      FUN_08010e28();
      return;
    }
    if ((int)uVar15 < 0x11) {
      if (uVar15 == 2) {
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
      }
      if (uVar15 == 3) {
        FUN_080039f8(1);
        return;
      }
      if (uVar15 == 5) {
        FUN_0800e174();
        return;
      }
      if (uVar15 == 7) {
LAB_0800e8f4:
        *(undefined1 *)(_DAT_0800e94c + 1) = 0;
        FUN_0801b334();
        FUN_0800da50();
        FUN_080207ec(0xc);
        FUN_0800b980();
        pcVar5 = _DAT_0800e950;
        if (*_DAT_0800e950 != '\x01') {
          FUN_0800ed5c();
          FUN_0800ad06(10);
          FUN_08012ae6(_DAT_0800e954,0x80);
          FUN_08012ae2(_DAT_0800e958,0x20);
        }
        *pcVar5 = '\x02';
        FUN_0800ff84();
        FUN_0801b70c(0);
        FUN_08023510(0x4a,5);
        return;
      }
    }
    else {
      if (uVar15 == 0x11) {
        FUN_080207ec(0xc);
        FUN_0800ed30(1);
        iVar14 = DAT_0800de1c;
        *(undefined1 *)(DAT_0800de1c + 1) = 1;
        FUN_080179a0();
        FUN_0800a1a8();
        FUN_0800da50();
        puVar4 = DAT_0800de24;
        *DAT_0800de24 = DAT_0800de20;
        *(undefined1 *)(iVar14 + 2) = 0;
        *(undefined4 *)((int)puVar4 + -0xa3) = 0;
        *(undefined1 *)((int)puVar4 + -0x9f) = 0;
        FUN_08000fd2((int)puVar4 + -0x9e,0x9c);
        *(undefined1 *)(iVar14 + 3) = 0;
        puVar4[2] = 0;
        *(undefined2 *)(puVar4 + 0x13) = 0;
        FUN_08001016(puVar4 + 3,0x14);
        FUN_08001016(puVar4 + 8,0x14);
        FUN_08022df0(1);
        FUN_08019a50();
        FUN_080073a4(6);
        return;
      }
      if (uVar15 == 0x12) {
        iVar14 = DAT_080121f8[1];
        if (iVar14 != 0) {
          DAT_080121f8[1] = iVar14 + -1;
          *(undefined1 *)((int)puVar10 + iVar14 + 0x11) = 0x20;
          if (puVar10[1] == 0) {
            FUN_08010e28();
            FUN_080073a4(3);
            return;
          }
          *puVar10 = 0x32;
          FUN_0801100c();
          FUN_080073a4(0);
          return;
        }
        goto LAB_0800e8f4;
      }
      if (uVar15 == 0x13) {
        if (*(char *)(DAT_080121f0 + 0x1d) == '\0') {
          FUN_08011990();
          FUN_080073a4(1);
          FUN_080207ec(0xc);
          return;
        }
        FUN_08010cc4();
        FUN_080073f8(1);
        return;
      }
    }
  }
  else {
    if (uVar15 == 0x1c) {
      if (*(char *)(DAT_080108c0 + 0x21) == '\x01') {
        FUN_080073f8(7);
        return;
      }
      bVar3 = *(byte *)(DAT_080108c0 + 0x43);
      if (bVar3 == 0) {
        FUN_080073a4(7);
        return;
      }
      if (bVar3 == 1) {
        if ((byte)DAT_080108c4[1] < 2) {
          DAT_080108c4[1] = DAT_080108c4[1] + 1;
        }
        else {
          DAT_080108c4[1] = 0;
        }
        FUN_08010810();
      }
      else {
        if (bVar3 < 4) {
          *(byte *)(DAT_080108c0 + 0x43) = bVar3 + 1;
        }
        else {
          *(undefined1 *)(DAT_080108c0 + 0x43) = 2;
        }
        FUN_08012200();
        FUN_0800eff0(*(undefined1 *)(iVar14 + 0x43));
        *puVar6 = 2;
        *(undefined2 *)(puVar6 + 4) = 10;
      }
      FUN_080110fc();
      FUN_080073a4(3);
      return;
    }
    if ((int)uVar15 < 0x1d) {
      if (uVar15 == 0x15) {
        if (*(char *)(DAT_080121f0 + 0x1d) == '\0') {
          FUN_08011bec();
          FUN_080073a4(2);
          FUN_080207ec(0xc);
          return;
        }
        FUN_08010d40();
        FUN_080073f8(2);
        return;
      }
      if (uVar15 == 0x16) {
        if (*DAT_080121f4 == '\0') {
          *DAT_080121f4 = '\x01';
          FUN_080073a4(6);
          FUN_080207ec(0xc);
        }
        if (*(char *)(iVar9 + 0x1d) == '\0') {
          FUN_08011bec();
          return;
        }
        FUN_08010d40();
        return;
      }
      if (uVar15 == 0x17) {
        cVar2 = *(char *)(DAT_08010cbc + 0x43);
        if (cVar2 == '\0') {
          FUN_080073a4(7);
          return;
        }
        cVar1 = *(char *)(DAT_08010cc0 + 0x1d);
        if (cVar2 == '\x01') {
          if (cVar1 == '\0') {
            *(undefined1 *)(DAT_08010cc0 + 0x1d) = 1;
          }
          else if (cVar1 == '\x01') {
            *(undefined1 *)(DAT_08010cc0 + 0x1d) = 3;
          }
          else {
            *(undefined1 *)(DAT_08010cc0 + 0x1d) = 0;
          }
        }
        else {
          *(char *)(DAT_08010cc0 + 0x1d) = cVar1 + '\x01';
          if (4 < (byte)(cVar1 + 1U)) {
            *(undefined1 *)(iVar7 + 0x1d) = 0;
          }
        }
        cVar1 = *(char *)(iVar7 + 0x1d);
        if (cVar1 == '\x01') {
          if (cVar2 == '\x01') {
            *(ushort *)(iVar7 + 0x1e) = (ushort)*(byte *)(iVar12 + 0x97);
          }
          else {
            *(ushort *)(iVar7 + 0x1e) = (ushort)*(byte *)(iVar12 + 0x96);
          }
        }
        else if (cVar1 == '\x02') {
          *(ushort *)(iVar7 + 0x1e) = (ushort)*(byte *)(iVar7 + 0x16);
        }
        else if (cVar1 == '\x03') {
          *(ushort *)(iVar7 + 0x1e) = (ushort)*(byte *)(iVar7 + 0x17);
        }
        else if (cVar1 == '\x04') {
          *(undefined2 *)(iVar7 + 0x1e) = *(undefined2 *)(iVar7 + 0x18);
        }
        FUN_08011244(cVar1,(int)*(short *)(iVar7 + 0x1e));
        FUN_080073a4(3);
        FUN_080207ec(0xb);
        return;
      }
      if (uVar15 == 0x18) {
        FUN_080107cc();
        FUN_080073f8(1);
        return;
      }
    }
    else {
      if (uVar15 == 0x1f) {
        FUN_080207ec(0xc);
        FUN_0800ed30(1);
        puVar6 = DAT_08012434;
        puVar11 = DAT_08012430;
        if (*(byte *)((int)DAT_08012430 + 0x43) == 1) {
          if (DAT_08012434[0xf] != '\0') {
            if (*(char *)((int)DAT_08012430 + 0x21) == '\x01') {
              *(undefined1 *)((int)DAT_08012430 + 0x21) = 0;
              *(undefined2 *)(puVar6 + 2) = puVar11[0x11];
            }
            else {
              *(undefined1 *)((int)DAT_08012430 + 0x21) = 1;
              *(undefined2 *)(puVar6 + 2) = puVar11[*(byte *)(puVar11 + 0x21) + 0x12];
            }
          }
        }
        else if (*(byte *)((int)DAT_08012430 + 0x43) < 2) {
          if (DAT_08012434[10] != '\0') {
            if (*(char *)((int)DAT_08012430 + 0x21) == '\x01') {
              *(undefined1 *)((int)DAT_08012430 + 0x21) = 0;
              *(undefined2 *)(puVar6 + 2) = *puVar11;
            }
            else {
              *(undefined1 *)((int)DAT_08012430 + 0x21) = 1;
              *(undefined2 *)(puVar6 + 2) = puVar11[*(byte *)(puVar11 + 0x10) + 1];
            }
          }
        }
        else if (DAT_08012434[0x15] != '\0') {
          if (*(char *)((int)DAT_08012430 + 0x21) == '\x01') {
            *(undefined1 *)((int)DAT_08012430 + 0x21) = 0;
            *(undefined2 *)(puVar6 + 2) = *(undefined2 *)((int)puVar11 + 0x45);
            puVar6[0x16] = *(undefined1 *)((int)puVar11 + 0x47);
            *(undefined2 *)(puVar6 + 0x18) = puVar11[0x24];
          }
          else {
            *(undefined1 *)((int)DAT_08012430 + 0x21) = 1;
            bVar3 = *(byte *)((int)puVar11 + 0x95);
            *(undefined2 *)(puVar6 + 2) = *(undefined2 *)((int)puVar11 + (uint)bVar3 * 5 + 0x4a);
            puVar6[0x16] = *(undefined1 *)((int)puVar11 + (uint)bVar3 * 5 + 0x4c);
            *(undefined2 *)(puVar6 + 0x18) = *(undefined2 *)((int)puVar11 + (uint)bVar3 * 5 + 0x4d);
          }
        }
        FUN_0800ff84();
        if (*(char *)((int)puVar11 + 0x21) == '\x01') {
          uVar16 = 0x3b;
        }
        else {
          uVar16 = 0x3c;
        }
        *puVar6 = 2;
        *(undefined2 *)(puVar6 + 4) = 10;
        FUN_080110fc();
        FUN_080234dc(uVar16);
        return;
      }
      if (uVar15 == 0x24) {
        FUN_08011d3c();
        FUN_080073f8(2);
        FUN_080207ec(0xc);
        return;
      }
      if (uVar15 == 0x25) {
        FUN_08011acc();
        FUN_080073f8(1);
        FUN_080207ec(0xc);
        return;
      }
    }
  }
  if (0x9f < uVar15) {
    return;
  }
  FUN_080073a4(0);
  return;
}

