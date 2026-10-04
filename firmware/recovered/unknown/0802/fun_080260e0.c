/**
 * @brief fun_080260e0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080260e0, Ghidra name FUN_080260e0, 1586 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080260e0(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint local_28;
  uint local_24;
  
  bVar2 = false;
  local_24 = 0;
  local_28 = 0;
  sVar4 = FUN_080273a8(*(undefined1 *)(param_1 + 7),4,&local_24,&local_28);
  *(short *)(param_2 + 2) = sVar4 * 1000;
  sVar4 = FUN_080273a8(*(undefined1 *)(param_1 + 8),2,&local_24,&local_28);
  *(short *)(param_2 + 2) = *(short *)(param_2 + 2) + sVar4 * 100;
  sVar4 = FUN_080273a8(*(undefined1 *)(param_1 + 9),1,&local_24,&local_28);
  *(short *)(param_2 + 2) = *(short *)(param_2 + 2) + sVar4 * 10;
  sVar4 = FUN_080273a8(*(undefined1 *)(param_1 + 10),0,&local_24,&local_28);
  *(short *)(param_2 + 2) = sVar4 + *(short *)(param_2 + 2);
  cVar3 = FUN_080273a8(*(undefined1 *)(param_1 + 0xb),0,&local_24,&local_28);
  *(char *)(param_2 + 4) = cVar3 * '\n';
  cVar3 = FUN_080273a8(*(undefined1 *)(param_1 + 0xc),0,&local_24,&local_28);
  *(char *)(param_2 + 4) = cVar3 + *(char *)(param_2 + 4);
  if ((*(byte *)(param_1 + 10) - 0x30 < 10) || (*(byte *)(param_1 + 10) == 0x4c)) {
    *(undefined1 *)(param_2 + 1) = 0x53;
  }
  else {
    *(undefined1 *)(param_2 + 1) = 0x4e;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0xb);
  if (((9 < uVar5 - 0x30) && (uVar5 != 0x4c)) && (uVar5 - 0x50 < 0xb)) {
    bVar2 = true;
  }
  bVar1 = *(byte *)(param_1 + 0x66);
  if (((bVar2) && (0x75 < bVar1)) && (bVar1 < 0x80)) {
    *(ushort *)(param_2 + 6) = bVar1 - 0x76;
  }
  else if (((bVar2) || (bVar1 < 0x26)) || (0x7f < bVar1)) {
    if (((bVar2) && (0x6b < bVar1)) && (bVar1 < 0x76)) {
      *(ushort *)(param_2 + 6) = bVar1 - 8;
    }
    else {
      if (((!bVar2) || (bVar1 < 0x26)) || (0x6b < bVar1)) {
        *(undefined2 *)(param_2 + 6) = 0xffff;
        return 0;
      }
      *(ushort *)(param_2 + 6) = bVar1 + 0x48;
    }
  }
  else {
    *(ushort *)(param_2 + 6) = bVar1 - 0x1c;
  }
  bVar1 = *(byte *)(param_1 + 0x67);
  sVar4 = *(short *)(param_2 + 6) * 100;
  *(short *)(param_2 + 6) = sVar4;
  uVar5 = bVar1 - 0x58;
  if (uVar5 < 10) {
    *(short *)(param_2 + 6) = sVar4 + (short)uVar5;
  }
  else {
    if (0x31 < bVar1 - 0x26) {
      *(undefined2 *)(param_2 + 6) = 0xffff;
      return 0;
    }
    *(ushort *)(param_2 + 6) = (bVar1 - 0x1c) + sVar4;
  }
  uVar5 = *(byte *)(param_1 + 0x68) - 0x1c;
  if (uVar5 < 100) {
    *(char *)(param_2 + 8) = (char)uVar5;
    uVar5 = (uint)*(byte *)(param_1 + 0xc);
    if ((uVar5 - 0x30 < 10) || (uVar5 == 0x4c)) {
      *(undefined1 *)(param_2 + 5) = 0x45;
    }
    else if (uVar5 - 0x50 < 0xb) {
      *(undefined1 *)(param_2 + 5) = 0x57;
    }
    *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_1 + 0x6c);
    cVar3 = *(char *)(param_1 + 0x6d);
    *(char *)(param_1 + 0x4d) = cVar3;
    if ((((cVar3 != '/') && (cVar3 != '\\')) && (iVar6 = FUN_08026ea6(), iVar6 == 0)) &&
       (iVar6 = FUN_08026e7c(*(undefined1 *)(param_1 + 0x4d)), iVar6 == 0)) {
      *(undefined1 *)(param_1 + 0x4d) = 0x2f;
    }
    uVar5 = local_24 & 0xff;
    uVar8 = local_28 & 0xff;
    iVar6 = param_1 + 0x4e;
    if ((char)local_24 == '\0' && (char)local_28 == '\0') {
      FUN_08000d78(iVar6,s_Emergency_08026684,0xb);
    }
    else if ((uVar5 == 0) && (uVar8 != 0)) {
      FUN_08000d78(iVar6,*(undefined4 *)(_DAT_08026690 + uVar8 * 4),0xb);
    }
    else if ((uVar5 == 0) || (uVar8 != 0)) {
      FUN_08000d78(iVar6,s_Unknown_08026693 + 1,0xb);
    }
    else {
      FUN_08000d78(iVar6,*(undefined4 *)(_DAT_08026690 + -0x20 + uVar5 * 4),0xb);
    }
    uVar5 = (int)(*(byte *)(param_1 + 0x6a) - 0x1c) / 10 + (*(byte *)(param_1 + 0x69) - 0x1c) * 10;
    sVar4 = (short)uVar5;
    if (799 < (uVar5 & 0xffff)) {
      sVar4 = sVar4 + -800;
    }
    *(short *)(param_2 + 0xd) = sVar4;
    uVar5 = ((int)(*(byte *)(param_1 + 0x6a) - 0x1c) % 10) * 100 + -0x1c +
            (uint)*(byte *)(param_1 + 0x6b) & 0xffff;
    if (399 < uVar5) {
      uVar5 = uVar5 - 400 & 0xffff;
    }
    if (uVar5 == 0) {
      *(undefined2 *)(param_2 + 0xb) = 0xffff;
    }
    else if (uVar5 == 0x168) {
      *(undefined2 *)(param_2 + 0xb) = 0;
    }
    else {
      *(short *)(param_2 + 0xb) = (short)uVar5;
    }
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      if (*(char *)(param_1 + uVar5 + 0x65) == '\0') break;
      uVar5 = uVar5 + 1 & 0xff;
      uVar8 = 0;
    } while (uVar5 < 0x80);
    pbVar10 = (byte *)(param_1 + 0x6e);
    pbVar9 = (byte *)(param_1 + uVar8 + 99);
    if (*pbVar9 == 0xd) {
      pbVar9 = (byte *)(param_1 + uVar8 + 0x62);
    }
    iVar6 = FUN_08026e8a(*pbVar10);
    if (iVar6 != 0) {
      bVar1 = *pbVar10;
      iVar6 = param_1 + 0x59;
      if (bVar1 == 0x20) {
        FUN_08000d78(iVar6,s_OMIC_E_080266a0,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
      }
      else if ((bVar1 == 0x3e) && (*pbVar9 == 0x3d)) {
        FUN_08000d78(iVar6,s_TH_D72_080266a8,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -1;
      }
      else if ((bVar1 == 0x3e) && (*pbVar9 == 0x5e)) {
        FUN_08000d78(iVar6,s_TH_D74_080266b0,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -1;
      }
      else if ((bVar1 == 0x3e) && (*pbVar9 == 0x26)) {
        FUN_08000d78(iVar6,s_TH_D75_080266b8,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -1;
      }
      else if (bVar1 == 0x3e) {
        FUN_08000d78(iVar6,s_TH_D7A_080266c0,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
      }
      else if ((bVar1 == 0x5d) && (*pbVar9 == 0x3d)) {
        FUN_08000d78(iVar6,s_TM_D710_080266c8,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -1;
      }
      else if (bVar1 == 0x5d) {
        FUN_08000d78(iVar6,s_TM_D700_080266d0,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x20)) {
        FUN_08000d78(iVar6,&DAT_080266d8,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x22)) {
        FUN_08000d78(iVar6,s_FTM_350_080266e0,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x23)) {
        FUN_08000d78(iVar6,s_VX_8G_080266e8,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x24)) {
        FUN_08000d78(iVar6,&DAT_080266f0,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x25)) {
        FUN_08000d78(iVar6,s_FTM_400DR_080266f8,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x29)) {
        FUN_08000d78(iVar6,s_FTM_100D_08026704,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x28)) {
        FUN_08000d78(iVar6,&DAT_08026710,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x30)) {
        FUN_08000d78(iVar6,&DAT_08026718,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x33)) {
        FUN_08000d78(iVar6,&DAT_08026720,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x31)) {
        FUN_08000d78(iVar6,s_FTM_300D_08026728,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x5f)) && (*pbVar9 == 0x34)) {
        FUN_08000d78(iVar6,s_FTM_500D_08026734,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x20)) && (*pbVar9 == 0x58)) {
        FUN_08000d78(iVar6,s_AP510_08026740,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x60) && (pbVar9[-1] == 0x28)) && (*pbVar9 == 0x35)) {
        FUN_08000d78(iVar6,s_D578UV_08026748,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (bVar1 == 0x60) {
        FUN_08000d78(iVar6,s_GMic_Emsg_08026750,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
      }
      else if (((bVar1 == 0x27) && (pbVar9[-1] == 0x28)) && (*pbVar9 == 0x35)) {
        FUN_08000d78(iVar6,s_D578UV_08026748,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x27) && (pbVar9[-1] == 0x28)) && (*pbVar9 == 0x38)) {
        FUN_08000d78(iVar6,s_D878UV_0802675c,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x27) && (pbVar9[-1] == 0x7c)) && (*pbVar9 == 0x33)) {
        FUN_08000d78(iVar6,s_TinyTrack3_08026764,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x27) && (pbVar9[-1] == 0x7c)) && (*pbVar9 == 0x34)) {
        FUN_08000d78(iVar6,s_TinyTrack4_08026770,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x27) && (pbVar9[-1] == 0x3a)) && (*pbVar9 == 0x34)) {
        FUN_08000d78(iVar6,s_DR_7400_0802680c,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (((bVar1 == 0x27) && (pbVar9[-1] == 0x3a)) && (*pbVar9 == 0x38)) {
        FUN_08000d78(iVar6,s_DR_7800_08026814,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
      else if (pbVar9[-1] == 0x7e) {
        FUN_08000d78(iVar6,s_Unknown_0802681c,0xc);
        pbVar10 = (byte *)(param_1 + 0x6f);
        pbVar9 = pbVar9 + -2;
      }
    }
    *(undefined2 *)(param_2 + 9) = 0;
    if (((pbVar10 < pbVar9) && (pbVar10[3] == 0x7d)) &&
       ((*pbVar10 - 0x21 < 0x5b && ((pbVar10[1] - 0x21 < 0x5b && (pbVar10[2] - 0x21 < 0x5b)))))) {
      sVar4 = FUN_0800352c(pbVar10,3);
      *(short *)(param_2 + 9) = sVar4 + -10000;
    }
    uVar7 = 1;
  }
  else {
    *(undefined1 *)(param_2 + 8) = 0xff;
    uVar7 = 0;
  }
  return uVar7;
}

