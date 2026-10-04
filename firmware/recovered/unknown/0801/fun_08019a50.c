/**
 * @brief fun_08019a50
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019a50, Ghidra name FUN_08019a50, 848 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08019a50(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_20;
  
  FUN_08018340();
  pbVar6 = (byte *)FUN_08012fe8();
  if (*(code **)(pbVar6 + 8) != (code *)0x0) {
    (**(code **)(pbVar6 + 8))(pbVar6[2]);
  }
  if (*(code **)(pbVar6 + 0xc) != (code *)0x0) {
    (**(code **)(pbVar6 + 0xc))();
  }
  iVar11 = DAT_08019ae4;
  if ((*pbVar6 & 1) != 0) {
    *(undefined1 *)(DAT_08019ae4 + 3) = 8;
  }
  FUN_080136dc();
  puVar1 = DAT_08019ae8;
  *DAT_08019ae8 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = DAT_0802063c;
  iVar10 = DAT_08017b88;
  iVar9 = DAT_08017b08;
  switch(*(undefined1 *)(iVar11 + 3)) {
  case 0:
  case 3:
    *(undefined2 *)(DAT_08019aec + 0x4c) =
         *(undefined2 *)(DAT_08019aec + *(int *)(DAT_08019aec + 8) * 4 + 0x34);
    iVar11 = DAT_08020748;
    uVar12 = *(uint *)(DAT_08020748 + *(int *)(DAT_08020748 + 8) * 4 + 0xc);
    iVar9 = FUN_08012fe8();
    iVar10 = uVar12 * -0x21 + iVar9;
    for (uVar5 = 0; uVar5 <= *(uint *)(iVar11 + *(int *)(iVar11 + 8) * 4 + 0xc); uVar5 = uVar5 + 1)
    {
      iVar16 = FUN_08027402(iVar10);
      if (iVar16 == 0) {
        uVar12 = uVar12 - 1;
      }
      iVar10 = iVar10 + 0x21;
    }
    iVar15 = *(int *)(iVar11 + *(int *)(iVar11 + 8) * 4 + 0x20);
    iVar10 = iVar15;
    uVar5 = uVar12;
    iVar16 = iVar9;
    while (puVar1 = DAT_0802074c, iVar10 != 0) {
      iVar16 = iVar16 + -0x21;
      iVar8 = FUN_08027402(iVar16);
      if (iVar8 == 1) {
        iVar10 = iVar10 + -1;
        uVar5 = uVar5 - 1;
        FUN_08016670(iVar10,uVar5 & 0xff,iVar16);
      }
    }
    *DAT_0802074c = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    if (*(char *)(DAT_08020750 + 3) == '\x03') {
      uVar3 = FUN_08016670(iVar15,0,iVar9);
      *(undefined1 *)((int)puVar1 + iVar15 + 2) = uVar3;
    }
    else {
      uVar3 = FUN_08016670(iVar15,uVar12 & 0xff,iVar9);
      *(undefined1 *)((int)puVar1 + iVar15) = uVar3;
    }
    uVar12 = uVar12 + 1;
    iVar9 = iVar9 + 0x21;
    uVar5 = iVar15 + 1;
    uVar4 = FUN_08012f6c();
    *(undefined2 *)(iVar11 + 0x4a) = uVar4;
    *(undefined1 *)(iVar11 + 0x48) = 1;
    while (uVar5 < 4) {
      iVar10 = FUN_080146cc(iVar9);
      if ((iVar10 == 0) && (uVar5 < *(ushort *)(iVar11 + 0x4a))) {
        iVar10 = FUN_08027402(iVar9);
        if (iVar10 == 1) {
          FUN_08016670(uVar5,uVar12 & 0xff,iVar9);
          uVar12 = uVar12 + 1;
          uVar5 = uVar5 + 1;
        }
        iVar9 = iVar9 + 0x21;
      }
      else {
        FUN_08016670(uVar5,0);
        uVar5 = uVar5 + 1;
      }
    }
    FUN_0801750c();
    return;
  case 1:
  case 2:
    uStack_20 = 0;
    *DAT_0802063c = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    pcVar2 = DAT_08020640;
    uVar12 = (uint)*(ushort *)(DAT_08020640 + 9);
    uVar5 = *(uint *)(DAT_08020640 + 3);
    *(undefined1 *)((int)puVar1 + uVar12) = 1;
    break;
  case 4:
  case 5:
  case 6:
    FUN_0800ba44(1);
    return;
  case 7:
    uStack_20 = 0;
    if (*(char *)(DAT_08017b08 + 0x11) == -0x56) {
      FUN_0800a1c4(4);
    }
    iVar11 = 0;
    uVar12 = *(uint *)(iVar9 + 4);
    for (uVar5 = 0; uVar5 < uVar12; uVar5 = uVar5 + 1) {
      iVar10 = iVar11;
      if (uVar5 == 3) {
        iVar10 = iVar11 + 1;
        *(undefined1 *)((int)&uStack_20 + iVar11) = 0x2e;
      }
      iVar11 = iVar10 + 1;
      *(undefined1 *)((int)&uStack_20 + iVar10) = *(undefined1 *)(iVar9 + uVar5 + 0x12);
    }
    *(undefined1 *)((int)&uStack_20 + iVar11) = 0;
    FUN_08015ea0(0,0,&uStack_20);
    FUN_0801750c();
    return;
  case 8:
    iVar9 = FUN_08012fe8();
    uVar12 = (uint)*(byte *)(*(int *)(DAT_080207e8 + 8) + DAT_080207e8 + -0xa3);
    uVar5 = uVar12;
    iVar11 = iVar9;
    while (uVar5 != 0) {
      iVar11 = iVar11 + -0x21;
      iVar10 = FUN_08027402(iVar11);
      if (iVar10 == 1) {
        uVar5 = uVar5 - 1;
        FUN_080166bc(uVar5,iVar11,0);
      }
    }
    FUN_080166bc(uVar12,iVar9,1);
    FUN_08016670(0,0,iVar9);
    iVar9 = iVar9 + 0x21;
    uVar12 = uVar12 + 1;
    uVar5 = FUN_08012f6c();
    while (uVar12 < 0xc) {
      iVar11 = FUN_080146cc(iVar9);
      if ((iVar11 == 0) && (uVar12 < uVar5)) {
        iVar11 = FUN_08027402(iVar9);
        if (iVar11 == 1) {
          FUN_080166bc(uVar12,iVar9,0);
          uVar12 = uVar12 + 1;
        }
        iVar9 = iVar9 + 0x21;
      }
      else {
        FUN_080166bc(uVar12,0);
        uVar12 = uVar12 + 1;
      }
    }
    FUN_0801750c();
    return;
  case 9:
    uStack_20 = 0;
    uVar5 = 0;
    uVar14 = *(uint *)(DAT_08017b88 + 4);
    for (uVar12 = 0; uVar12 < uVar14; uVar12 = uVar12 + 1 & 0xff) {
      *(undefined1 *)((int)&uStack_20 + uVar5) = *(undefined1 *)(DAT_08017b88 + uVar12 + 0x12);
      uVar5 = uVar5 + 1 & 0xff;
      if (uVar5 == 3) {
        uVar5 = 4;
        uStack_20 = CONCAT13(0x2d,(undefined3)uStack_20);
      }
    }
    *(undefined1 *)((int)&uStack_20 + uVar5) = 0;
    FUN_08015ea0(0,0,&uStack_20);
    if (*(char *)(iVar10 + 0x11) == -0x56) {
      FUN_0800a1c4(4);
    }
    FUN_0801750c();
    return;
  case 10:
    FUN_08015ea0(0,0,DAT_08017b34);
    if (*(char *)(DAT_08017b34 + -1) == -0x56) {
      FUN_0800a1c4(4);
    }
    FUN_0801750c();
    return;
  default:
    return;
  }
  while (uVar12 != 0) {
    uVar12 = uVar12 - 1;
    uVar14 = uVar5 - 1;
    if (*pcVar2 == '\0') {
      FUN_08000850(&uStack_20,&DAT_08020644,*(undefined4 *)(pcVar2 + 3));
      if (*(ushort *)(pcVar2 + 7) == uVar14) {
        uVar7 = 2;
      }
      else {
        uVar7 = 1;
      }
      FUN_08015ea0(uVar12,uVar5 & 0xff,&uStack_20,uVar7);
      uVar5 = uVar14;
    }
    else if (*pcVar2 == '\x01') {
      if (*(ushort *)(pcVar2 + 7) == uVar14) {
        uVar7 = 2;
      }
      else {
        uVar7 = 1;
      }
      FUN_08015ea0(uVar12,uVar5 & 0xff,*(undefined4 *)(*(int *)(pcVar2 + 0x13) + uVar14 * 4),uVar7);
      uVar5 = uVar14;
    }
    else {
      uVar7 = (**(code **)(pcVar2 + 0xf))(uVar14);
      if (*(ushort *)(pcVar2 + 7) == uVar14) {
        uVar13 = 2;
      }
      else {
        uVar13 = 1;
      }
      FUN_08015ea0(uVar12,uVar5 & 0xff,uVar7,uVar13);
      uVar5 = uVar14;
    }
  }
  uVar5 = *(uint *)(pcVar2 + 3);
  for (uVar12 = (uint)*(ushort *)(pcVar2 + 9); uVar12 < 4; uVar12 = uVar12 + 1) {
    if (uVar5 < *(ushort *)(pcVar2 + 1)) {
      if (*pcVar2 == '\0') {
        FUN_08000850(&uStack_20,&DAT_08020644,*(undefined4 *)(pcVar2 + 3));
        if (*(ushort *)(pcVar2 + 7) == uVar5) {
          uVar7 = 2;
        }
        else {
          uVar7 = 1;
        }
        FUN_08015ea0(uVar12,uVar5 + 1 & 0xff,&uStack_20,uVar7);
      }
      else if (*pcVar2 == '\x01') {
        if (*(ushort *)(pcVar2 + 7) == uVar5) {
          uVar7 = 2;
        }
        else {
          uVar7 = 1;
        }
        FUN_08015ea0(uVar12,uVar5 + 1 & 0xff,*(undefined4 *)(*(int *)(pcVar2 + 0x13) + uVar5 * 4),
                     uVar7);
      }
      else {
        uVar7 = (**(code **)(pcVar2 + 0xf))(uVar5);
        if (*(ushort *)(pcVar2 + 7) == uVar5) {
          uVar13 = 2;
        }
        else {
          uVar13 = 1;
        }
        FUN_08015ea0(uVar12,uVar5 + 1 & 0xff,uVar7,uVar13);
      }
      uVar5 = uVar5 + 1;
    }
    else {
      FUN_08015ea0(uVar12,uVar5 + 1 & 0xff,&DAT_08020648,0);
    }
  }
  FUN_0801750c();
  return;
}

