/**
 * @brief fun_0800a77c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a77c, Ghidra name FUN_0800a77c, 1460 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800a77c(void)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  pcVar8 = DAT_08023644;
  pbVar7 = DAT_08023640;
  iVar10 = DAT_0800968c;
  pbVar5 = DAT_08007db4;
  pcVar4 = DAT_08007db0;
  pcVar3 = DAT_080039f0;
  switch(*(undefined4 *)(DAT_0800a800 + 4)) {
  default:
    switch(*(undefined4 *)(DAT_0800a778 + 8)) {
    case 1:
      if (*(short *)(DAT_0800a0e0 + 0xb) != 0) {
        *(short *)(DAT_0800a0e0 + 0xb) = *(short *)(DAT_0800a0e0 + 0xb) + -1;
      }
      return;
    case 2:
      if (DAT_08023640[8] != 0) {
        pcVar3 = DAT_08023644;
        if ((DAT_08023644[0x14] != '\x04') &&
           ((iVar10 = FUN_0801a91c(), iVar10 != 1 || (*pcVar8 != '\0')))) {
          iVar10 = FUN_08008aa8();
          if ((iVar10 == 0) && ((iVar10 = FUN_0800a0c0(), iVar10 == 0 && (pcVar8[1] == '\0')))) {
            if (*(short *)(pcVar8 + 9) == 0) {
              uVar14 = FUN_08013dc4();
              uVar15 = (uint)*(byte *)(DAT_0802364c + (uint)*(byte *)(DAT_08023648 + 2));
              if (*pcVar8 == '\x01') {
                uVar15 = uVar15 - 8 & 0xffff;
              }
              if ((uVar15 < uVar14) && (*(ushort *)(pcVar8 + 0xb) = *pbVar7 + 5, *pcVar8 == '\0')) {
                FUN_0801a134();
                return;
              }
            }
          }
          else {
            pcVar3[9] = '\x0f';
            pcVar3[10] = '\0';
          }
          return;
        }
        pcVar3[9] = '\x0f';
        pcVar3[10] = '\0';
      }
      return;
    case 3:
      FUN_080158ac();
      goto LAB_0801a224;
    case 4:
      FUN_0801f458();
      FUN_080239e0();
      FUN_08022658();
      return;
    case 5:
      FUN_080092d4();
      FUN_080062a4();
      pcVar4 = DAT_080070d0;
      iVar10 = DAT_080070cc;
      pcVar3 = DAT_080070c8;
      if (*DAT_080070c8 != '\0') {
        if ((((DAT_080070c8[0x22] == '\x01') && (iVar11 = FUN_0800f2a8(), iVar11 != 0)) &&
            (pcVar4[1] == '\0')) &&
           ((*pcVar4 == '\0' && ((pcVar4[0x1e] == '\0' || (pcVar3[0x1d] == '\x01')))))) {
          *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar10 + 0x1c);
          iVar11 = FUN_08008f30();
          if (iVar11 == 1) {
            return;
          }
        }
        if (((*(char *)(iVar10 + 0xe) == '\x01') && (*(short *)(iVar10 + 0x14) == 0)) &&
           ((*pcVar4 == '\0' && ((pcVar4[0x1e] == '\0' || (pcVar3[0x1d] == '\x01')))))) {
          *(undefined1 *)(iVar10 + 0xf) = 1;
        }
      }
      return;
    case 6:
      cVar1 = *(char *)(DAT_0800968c + 1);
      if ((((cVar1 == '\0') || (cVar1 == '\x02')) || (cVar1 == '\a')) &&
         ((DAT_08009690[1] != 0 && (*DAT_08009690 == 0)))) {
        FUN_0801b334();
        if (*(char *)(iVar10 + 1) == '\x02') {
          FUN_08010e28();
        }
        else if (*(char *)(iVar10 + 1) == '\a') {
          FUN_0800e8d0();
        }
        else {
          FUN_0800b604(0);
        }
        FUN_080073a4(5);
        return;
      }
      return;
    case 7:
      return;
    case 8:
      FUN_08008bc8();
      FUN_08009810();
      FUN_080067a4();
      iVar10 = DAT_08008bc0;
      if ((((*(char *)(DAT_08008bbc + 1) == '\x14') &&
           (sVar2 = *(short *)(DAT_08008bc0 + 6), sVar2 != 0)) &&
          (*(short *)(DAT_08008bc0 + 6) = sVar2 + -1, sVar2 == 1)) &&
         ((*(char *)(iVar10 + 8) != '\0' && (*(char *)(DAT_08008bc4 + 0x78) != '\x05')))) {
        *(undefined1 *)(iVar10 + 8) = 0;
        FUN_0800e88c(1);
        return;
      }
      return;
    case 9:
      FUN_0801f910();
      FUN_0801f458();
      FUN_0801f1e4();
      return;
    }
    break;
  case 1:
    FUN_0801f274();
    FUN_080227d8();
    return;
  case 2:
LAB_0801a224:
    pcVar3 = DAT_0801a37c;
    if ((((*DAT_0801a37c != '\x01') || (iVar10 = FUN_08008aa8(), iVar10 == 1)) &&
        (uVar9 = DAT_0801a380, *pcVar3 != '\x02')) &&
       ((((iVar12 = FUN_08012ace(DAT_0801a380,8), iVar11 = DAT_0801a388, iVar10 = DAT_0801a384,
          iVar12 == 0 || (iVar12 = FUN_08012ace(uVar9,4), iVar12 == 0)) ||
         ((*(char *)(iVar11 + (uint)*(byte *)(iVar10 + 9)) == '\x01' &&
          (iVar12 = FUN_08012ace(uVar9,0x20), iVar12 == 0)))) ||
        (iVar12 = FUN_08012ace(uVar9,0x40), iVar12 == 0)))) {
      pcVar3[0x33] = '\0';
      iVar13 = FUN_08012ace(uVar9,0x40);
      iVar12 = DAT_0801a38c;
      if (iVar13 == 0) {
        pcVar3[0x33] = *(char *)(DAT_0801a38c + 0xfa);
      }
      else if (*(char *)(iVar11 + (uint)*(byte *)(iVar10 + 9)) == '\x01') {
        if (*(char *)(DAT_0801a390 + 0x1f) == '\x01') {
          pcVar3[0x33] = *(char *)(DAT_0801a38c + 0xfa);
        }
        else {
          iVar10 = FUN_08012ace(uVar9,0x20);
          if (iVar10 == 0) {
            pcVar3[0x33] = '\x02';
          }
          else {
            iVar10 = FUN_08012ace(uVar9,4);
            if (iVar10 == 0) {
              pcVar3[0x33] = '\x01';
            }
            else {
              pcVar3[0x33] = '\0';
            }
          }
        }
      }
      else if (*(char *)(DAT_0801a390 + 0x1f) == '\x01') {
        pcVar3[0x33] = *(char *)(DAT_0801a38c + 0xfa);
      }
      else {
        iVar10 = FUN_08012ace(uVar9,4);
        if (iVar10 == 0) {
          pcVar3[0x33] = '\x01';
        }
        else {
          pcVar3[0x33] = '\0';
        }
      }
      *(undefined1 *)(DAT_0801a394 + 3) = 0;
      iVar10 = FUN_08008aa8();
      if (iVar10 == 1) {
        FUN_080039f8(0);
        return;
      }
      FUN_0801b3fc();
      iVar10 = FUN_0800a0c0();
      if (iVar10 != 0) {
        FUN_080207ec(4);
        FUN_0800a8c8(0);
        puVar6 = DAT_08023544;
        *DAT_08023544 = 0;
        puVar6[2] = 0;
        puVar6[1] = 0;
        return;
      }
      if (pcVar3[1] == '\x01') {
        FUN_0800e95c();
      }
      if (pcVar3[0x33] == *(char *)(iVar12 + 0xfa)) {
        FUN_0800da50();
      }
      else {
        FUN_08021d40(0,1);
        pcVar3[0x34] = '\x01';
      }
      FUN_08014964();
      FUN_0801a134();
      if (*pcVar3 != '\x01') {
        FUN_080007de(0);
        return;
      }
    }
    return;
  case 3:
    FUN_08022780();
    FUN_0801b754();
    return;
  case 4:
    FUN_08014990();
    iVar11 = FUN_08012ace(DAT_0800db08,0x8000);
    iVar10 = DAT_0800db14;
    uVar9 = DAT_0800db0c;
    if (iVar11 == 0) {
      if (*(char *)(DAT_0800db10 + 0x4b) == '\0') {
        if (*(byte *)(DAT_0800db14 + 7) < 3) {
          *(byte *)(DAT_0800db14 + 7) = *(byte *)(DAT_0800db14 + 7) + 1;
          return;
        }
        *(undefined1 *)(DAT_0800db10 + 0x4b) = 1;
        FUN_08012ae6(uVar9,2);
        FUN_08012ae6(DAT_0800db18,0x100);
      }
      *(undefined1 *)(iVar10 + 7) = 0;
      return;
    }
    if (*(char *)(DAT_0800db10 + 0x4b) == '\x01') {
      if (2 < *(byte *)(DAT_0800db14 + 7)) {
        *(undefined1 *)(DAT_0800db10 + 0x4b) = 0;
        FUN_08012ae2(uVar9,2);
        return;
      }
      *(byte *)(DAT_0800db14 + 7) = *(byte *)(DAT_0800db14 + 7) + 1;
      return;
    }
    *(undefined1 *)(DAT_0800db14 + 7) = 0;
    return;
  case 5:
    FUN_08010b84();
    FUN_08012438();
    return;
  case 6:
    iVar10 = FUN_08008aa8();
    if (iVar10 != 0) {
      FUN_0801f274();
    }
    FUN_080067a4();
    pcVar3 = DAT_080090cc;
    if ((*(char *)(DAT_080090c8 + 0xf) == '\x01') && (*DAT_080090cc == '\0')) {
      *(undefined1 *)(DAT_080090c8 + 0xd) = 1;
      cVar1 = *(char *)(DAT_080090d4 + 0x1c);
      if (*(char *)(DAT_080090d0 + 0xfa) != cVar1) {
        pcVar3[0x34] = '\x01';
      }
      pcVar3[0x33] = cVar1;
      FUN_0801a134();
      return;
    }
    return;
  case 7:
    FUN_08022818();
    FUN_08022a9c();
    return;
  case 8:
    return;
  case 9:
    if (*DAT_080039f0 != '\0') {
      if (((DAT_080039f0[1] == '\0') && (*DAT_080039f4 == '\0')) && (DAT_080039f4[0x1f] == '\0')) {
        FUN_0800e174();
      }
      else if ((DAT_080039f0[1] == '\x01') && (*DAT_080039f4 == '\0')) {
        FUN_0801a134();
      }
      if (*(short *)(pcVar3 + 2) == 0) {
        if (pcVar3[1] == '\x01') {
          pcVar3[1] = '\0';
          pcVar3[2] = -0x6a;
          pcVar3[3] = '\0';
          return;
        }
        pcVar3[1] = '\x01';
        FUN_0800ea30();
        pcVar3[2] = -0x6a;
        pcVar3[3] = '\0';
      }
    }
    return;
  }
  switch(*(undefined4 *)(DAT_0800a874 + 0xc)) {
  default:
    return;
  case 1:
    FUN_08006ef8();
    break;
  case 2:
    FUN_0801a3a6(0xa3);
    FUN_0801a3a6(0xa1);
    return;
  case 3:
    goto LAB_08007cdc;
  case 5:
    FUN_0800d2a4();
    return;
  case 6:
    FUN_08006ef8();
    break;
  case 7:
    FUN_0801a3a6(0xa1);
    return;
  case 8:
LAB_08007cdc:
    if ((*DAT_08007db0 != '\x01') &&
       ((DAT_08007db0[0x14] == '\x04' || (DAT_08007db0[0x14] == '\x05')))) {
      if (DAT_08007db0[0x1e] == '\0') {
        if (*DAT_08007db4 != 0xff) {
          *DAT_08007db4 = 0xff;
          uVar9 = FUN_0801328c();
          FUN_0800befc(0xffff,uVar9);
          return;
        }
      }
      else {
        uVar14 = FUN_0801a908();
        if ((4 < pbVar5[1]) || (pcVar4[0x14] == '\x04')) {
          uVar15 = 0;
          iVar10 = (uint)*(byte *)(DAT_08007db8 + 0x10a) * 9 + DAT_08007dbc;
          do {
            if (uVar14 <= *(byte *)(iVar10 + (8 - uVar15))) {
              uVar16 = uVar15;
              if (((uVar15 != 0) && (uVar15 == *pbVar5 - 1)) &&
                 (uVar16 = (uint)*pbVar5, (int)uVar14 <= (int)(*(byte *)(iVar10 + (8 - uVar15)) - 5)
                 )) {
                uVar16 = uVar15;
              }
              break;
            }
            uVar15 = uVar15 + 1 & 0xff;
            uVar16 = uVar14;
          } while (uVar15 < 9);
          if (uVar15 == 9) {
            uVar16 = 9;
          }
          uVar9 = FUN_0801328c();
          FUN_0800befc(uVar14,uVar9);
          if (*pbVar5 != uVar16) {
            cVar1 = pcVar4[1];
            if (((cVar1 != '\x0f') && (cVar1 != '\a')) &&
               ((cVar1 != '\v' && ((cVar1 != '\x11' && (cVar1 != '\x14')))))) {
              FUN_0800c098((uVar16 & 0xff) + 1);
            }
            *pbVar5 = (byte)uVar16;
          }
        }
      }
    }
    return;
  case 9:
    FUN_0800d2a4();
    FUN_08022758();
    return;
  }
  iVar10 = _DAT_08009db8;
  if ((*(int *)(_DAT_08009db8 + 0x18) != 0) &&
     (iVar11 = *(int *)(_DAT_08009db8 + 0x18) + -1, *(int *)(_DAT_08009db8 + 0x18) = iVar11,
     iVar11 == 0)) {
    *(undefined4 *)(iVar10 + 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10) = 0;
  }
  return;
}

