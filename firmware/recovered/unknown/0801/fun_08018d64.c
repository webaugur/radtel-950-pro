/**
 * @brief fun_08018d64
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018d64, Ghidra name FUN_08018d64, 438 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018d64(undefined1 *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  puVar3 = DAT_08018de8;
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0x13) {
    iVar6 = 0;
  }
  else {
    if (iVar6 < 0x14) {
      if ((iVar6 != 5) && (iVar6 != 6)) {
        if (iVar6 == 0x10) {
          *(undefined1 *)((int)DAT_08018de8 + DAT_08018de8[1] + 0x12) = *param_1;
          *puVar3 = 0x32;
          if ((uint)puVar3[1] < 0x40) {
            puVar3[1] = puVar3[1] + 1;
          }
          puVar3 = DAT_08018de8;
          iVar6 = DAT_080085bc;
          if (*(char *)(DAT_08018dec + (uint)*(byte *)(DAT_08018dec + 0xfa) * 0x58 + 0x130) !=
              '\x01') {
            FUN_0801b564();
            FUN_0800bbb4();
            uVar8 = *(byte *)((int)puVar3 + puVar3[1] + 0x11) - 0x30 & 0xff;
            if (*(char *)(DAT_080232fc + 7) == '\0') {
              FUN_080073a4(0);
            }
            else {
              FUN_08008000(uVar8);
            }
            if (puVar3[1] == 6) {
              FUN_0800da50();
              *(undefined1 *)((int)puVar3 + puVar3[1] + 0x12) = 0;
              iVar6 = 0;
              uVar7 = 0;
              do {
                iVar6 = iVar6 * 10 + -0x30 + (uint)*(byte *)((int)puVar3 + uVar7 + 0x12);
                uVar7 = uVar7 + 1 & 0xff;
              } while (uVar7 < 6);
              puVar3[1] = 0;
              iVar2 = DAT_08023304;
              if (uVar8 == 9) {
                uVar8 = -(uint)*(byte *)(DAT_08023300 + 9);
              }
              else {
                uVar8 = (uint)*(byte *)(DAT_08023300 + uVar8);
              }
              iVar9 = uVar8 + iVar6 * 100;
              iVar6 = FUN_0800a07c(iVar9,*(undefined1 *)(DAT_08023304 + 0xfa));
              if (iVar6 == 0) {
                FUN_080234f8(0x48,5);
              }
              else {
                *(int *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58 + 0x110) = iVar9;
                FUN_08007dc0();
                *(undefined1 *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x24 + 0x2e2) =
                     *(undefined1 *)(iVar2 + 0x10a);
                FUN_080231e8();
              }
              FUN_0801c9a0();
              FUN_0800d1f4();
              return;
            }
            return;
          }
          if (((DAT_08018de8[1] == 1) && (*(char *)(DAT_080085bc + 6) == '\0')) &&
             (pbVar1 = (byte *)((int)DAT_08018de8 + 0x12), 0x39 < *pbVar1)) {
            DAT_08018de8[1] = 2;
            *(byte *)((int)puVar3 + 0x13) = *pbVar1;
            *(undefined1 *)((int)puVar3 + 0x12) = 0x30;
          }
          FUN_0800b9a8();
          if (*(char *)(DAT_080085c0 + 7) == '\0') {
            FUN_080073a4(0);
          }
          else {
            FUN_08008000(*(char *)((int)puVar3 + puVar3[1] + 0x11) + -0x30);
          }
          if (((puVar3[1] != 2) || (*(char *)(iVar6 + 6) != '\0')) &&
             ((puVar3[1] != 3 || (*(char *)(iVar6 + 6) == '\0')))) {
            return;
          }
          FUN_0800da50();
          *(undefined1 *)((int)puVar3 + puVar3[1] + 0x12) = 0;
          uVar8 = FUN_08000bb0();
          iVar2 = DAT_080085c4;
          if (*(char *)(iVar6 + 6) == '\0') {
            uVar5 = 99;
            uVar7 = (uint)*(byte *)((uint)*(byte *)(DAT_080085c4 + 0xfa) + DAT_080085bc + 0xd) * 99
                    + uVar8;
          }
          else {
            uVar5 = 0x3de;
            uVar7 = uVar8;
          }
          if (((uVar8 == 0) || (uVar5 < uVar8)) ||
             (iVar6 = FUN_080090ec(uVar7 - 1 & 0xffff,0), iVar6 == 0)) {
            FUN_080073a4(0);
            FUN_0801b334();
          }
          else {
            *(short *)(iVar2 + 0x108) = (short)uVar8 + -1;
            FUN_08008488(0,1);
          }
          FUN_0800af94(1);
          return;
        }
        if (iVar6 != 0x12) {
          return;
        }
      }
      FUN_0800ea30();
      return;
    }
    if (iVar6 != 0x14) {
      if (iVar6 == 0x15) {
        iVar6 = 0;
      }
      else {
        if (iVar6 != 0x16) {
          return;
        }
        iVar6 = 1;
      }
      FUN_0801b334();
      pcVar4 = DAT_0801921c;
      if ((iVar6 != 0) && (*DAT_0801921c == '\0')) {
        FUN_0800beb4();
        *pcVar4 = '\x01';
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
    }
    iVar6 = 1;
  }
  FUN_0801b334();
  pcVar4 = DAT_080194cc;
  if ((iVar6 != 0) && (*DAT_080194cc == '\0')) {
    FUN_0800beb4();
    *pcVar4 = '\x01';
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
}

