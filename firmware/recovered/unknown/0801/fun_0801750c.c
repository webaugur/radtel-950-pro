/**
 * @brief fun_0801750c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801750c, Ghidra name FUN_0801750c, 636 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801750c(void)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_r3;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  byte local_38 [32];
  undefined4 local_18;
  
  local_18 = in_r3;
  FUN_0800a1a8();
  FUN_08018514();
  iVar5 = DAT_08017654;
  iVar7 = DAT_08017654 + 8;
  switch(*(undefined1 *)(DAT_08017650 + 3)) {
  case 2:
    if (*(int *)(DAT_08017658 + 4) != 0) {
      FUN_0801b334();
      local_18 = 0;
      FUN_08027990(0xdc,0x50,0x4f,0x1b);
    }
  case 0:
  case 1:
    FUN_080203e4(0x11,0);
    iVar7 = DAT_0801765c;
    uVar8 = 0;
    do {
      if (*(char *)(iVar7 + uVar8) != '\0') {
        FUN_08000838(&DAT_08017660);
      }
      FUN_08000838(s______s_08017664,0x10,0x10,iVar5 + uVar8 * 0x48 + 8);
      if (*(char *)(iVar7 + uVar8) != '\0') {
        FUN_08000838(&DAT_08017660);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    FUN_080203e4(0x20,0);
    return;
  default:
    return;
  case 4:
    FUN_080203e4(0x14,0);
    FUN_08000838(s_____s_08017684,0x10,0x10,DAT_08017658 + 0x12);
    FUN_080203e4(0x60,0);
    return;
  case 5:
  case 6:
    break;
  case 7:
    FUN_080203e4(0x14,0);
    FUN_08000838(&DAT_08017670,0xb,8,iVar7);
    FUN_080203e4(0xa0,0);
    return;
  case 8:
    FUN_080203e4(0x11,0);
    uVar8 = 0;
    do {
      FUN_08000838(&LAB_0801768c,iVar5 + uVar8 * 0x48 + 8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    FUN_080203e4(0xe0,0);
    return;
  case 9:
    FUN_080203e4(0x14,0);
    FUN_08000838(s_____s_08017684,0xc,0xc,iVar7);
    FUN_080203e4(0x60,0);
    return;
  case 10:
    FUN_080203e4(0x14,0);
    FUN_08000838(s_____s_0801767c,0x10,0x10,iVar7);
    FUN_080203e4(0xa0,0);
    return;
  }
  FUN_0800d544();
  FUN_0800bb38();
  pcVar3 = DAT_08018cb4;
  if (*DAT_08018cb4 != '\0') {
    FUN_0800c2c0();
  }
  iVar5 = DAT_08018cb8;
  if (*(uint *)(DAT_08018cb8 + 8) < 0x11) {
    iVar5 = DAT_08018cbc + 0x44;
    FUN_08000850(iVar5,s_____s_08018cc0,0x10,0x10,DAT_08018cb8 + 0x12);
    FUN_080154a4(0,0xf0,0xfe,0x116,1,0);
    FUN_08014f44(0xfe,0xe,iVar5,0x18,0,0xffff,0);
    FUN_08015500();
    return;
  }
  if (*pcVar3 == '\0') {
    uVar12 = (*(ushort *)(DAT_08018cb8 + 4) >> 4) + 1 & 0xff;
  }
  else {
    uVar12 = 1;
  }
  uVar11 = 0;
  sVar9 = 0x9d;
  uVar8 = 0;
  uVar10 = 0;
  do {
    if (uVar12 <= uVar10) {
      return;
    }
    local_38[0x10] = 0;
    uVar6 = 0;
    bVar2 = false;
    uVar4 = 0;
    uVar13 = *(uint *)(iVar5 + 4);
    do {
      bVar1 = *(byte *)(uVar8 + iVar5 + 0x12);
      uVar8 = uVar8 + 1 & 0xff;
      local_38[uVar4] = bVar1;
      if (0x7f < bVar1) {
        if (bVar2) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          uVar6 = uVar4;
        }
      }
      if (uVar13 <= uVar8) {
        uVar4 = uVar4 + 1 & 0xff;
        local_38[uVar4] = 0;
        break;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 0x10);
    if ((uVar4 == 0x10) && ((uVar6 & 1) != 0)) {
      local_38[0xf] = 0;
      uVar8 = uVar8 - 1 & 0xff;
    }
    iVar7 = uVar11 * 0x11 + DAT_08018cbc;
    FUN_08000850(iVar7,local_38);
    FUN_080154a4(0,0xf0,sVar9,sVar9 + 0x18,1,0);
    FUN_08014f44(sVar9,0xe,iVar7,0x18,0,0xffff,0);
    FUN_08015500();
    sVar9 = sVar9 + 0x20;
    uVar11 = uVar11 + 1 & 0xff;
    uVar10 = uVar10 + 1 & 0xff;
  } while( true );
}

