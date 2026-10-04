/**
 * @brief fun_0801ad64
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ad64, Ghidra name FUN_0801ad64, 1154 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ad64(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  iVar7 = FUN_0800a0c0();
  if (iVar7 != 0) {
    return;
  }
  iVar7 = FUN_08008aa8();
  if (iVar7 != 0) {
    return;
  }
  FUN_0801b880();
  iVar2 = DAT_0801b178;
  iVar1 = DAT_0801b174;
  iVar10 = DAT_0801b170;
  iVar7 = DAT_0801b16c;
  switch(*(undefined1 *)(DAT_0801b16c + 0x14)) {
  case 0:
    FUN_0801b6cc();
    FUN_080089e8();
    *(undefined2 *)(iVar7 + 7) = 0;
    *(undefined1 *)(iVar7 + 0x14) = 1;
  case 1:
    FUN_080207ec(6);
    FUN_0801b3f0();
    iVar9 = DAT_0801b17c;
    if (*(char *)(iVar7 + 1) == '\v') {
      FUN_0802387c(*(undefined1 *)(iVar10 + 5));
      FUN_080093dc();
    }
    else {
      FUN_0800a07c(**(undefined4 **)(DAT_0801b17c + 0x18),*(undefined1 *)(iVar1 + 0xfa));
    }
    if (*(char *)(iVar7 + 1) == '\v') {
      FUN_08023888(*(undefined1 *)(iVar10 + 5));
    }
    else {
      puVar8 = *(undefined4 **)(iVar9 + 0x18);
      FUN_0801ac34(*puVar8,*(undefined1 *)(puVar8 + 1),puVar8[2],*(undefined1 *)(iVar9 + 0x21),
                   *DAT_0801b180,*(undefined1 *)(iVar9 + 0x22),*(undefined1 *)(iVar9 + 0x23),
                   *(undefined1 *)(iVar9 + 0x24),*(undefined1 *)(iVar9 + 0x25),0);
    }
    iVar9 = FUN_08009d74();
    if (iVar9 == 1) {
      FUN_08020418();
    }
    FUN_0801ab3c();
    if (*(char *)(iVar7 + 0x1f) != '\0') {
      FUN_08015824(1);
      FUN_0801ad58();
      FUN_0801acce(1);
      FUN_0801ac32(1);
      FUN_080207ec(5);
      FUN_0801a9a4(*(undefined1 *)(iVar1 + 0x10a),1);
      *(undefined1 *)(iVar7 + 0x14) = 5;
      *(undefined1 *)(iVar7 + 0x1e) = 1;
      FUN_0800cb78(*(undefined1 *)(iVar1 + 0xfa),0);
      return;
    }
    if ((*(char *)(iVar7 + 0x29) == '\0') &&
       (((cVar6 = *(char *)(iVar7 + 1), cVar6 == '\0' || (cVar6 == '\x0f')) || (cVar6 == '\x14'))))
    {
      FUN_0800da78();
    }
    *(undefined1 *)(iVar7 + 0x14) = 2;
switchD_0801ad9c_caseD_2:
    iVar9 = FUN_08009c20();
    if (iVar9 == 1) {
      FUN_0801a9a4(*(undefined1 *)(iVar1 + 0x10a),1);
      FUN_08015824(0);
      *(undefined1 *)(iVar7 + 0x15) = 0;
      *(undefined1 *)(iVar7 + 0x14) = 3;
      FUN_0801b310();
      *(undefined1 *)(iVar2 + 1) = 0;
      *(undefined1 *)(iVar2 + 6) = 0;
      *(undefined2 *)(iVar7 + 0x16) = 0;
      FUN_08003384();
switchD_0801ad9c_caseD_3:
      iVar9 = FUN_0801a91c();
      if (iVar9 == 1) {
        bVar4 = *(char *)(iVar2 + 1) + 1;
        *(byte *)(iVar2 + 1) = bVar4;
        if (2 < bVar4) {
          FUN_08015824(1);
          *(undefined1 *)(iVar2 + 6) = 1;
          pcVar3 = DAT_0801b184;
          if ((*(char *)(iVar10 + 0x25) != '\0') || (*(char *)(iVar7 + 1) != '\x02')) {
            if ((*(char *)(iVar7 + 0x15) == '\0') &&
               ((*(undefined1 *)(iVar7 + 0x15) = 1, *(char *)(iVar7 + 1) != '\x11' &&
                (*pcVar3 != '\0')))) {
              FUN_0801acce(1);
              FUN_0800339c();
            }
            FUN_0801b3fc();
            FUN_0801b310();
            FUN_0801ad58();
            iVar10 = FUN_0801a818();
            if (iVar10 == 0) {
              iVar10 = FUN_08009694();
              if ((iVar10 == 1) && (*(char *)(iVar7 + 0x68) == '\0')) {
                FUN_0801c9a0();
                return;
              }
            }
            else {
              iVar10 = FUN_08009694();
              if (iVar10 == 1) {
                FUN_0800e754();
                FUN_08014964();
                return;
              }
              FUN_08021e54();
              FUN_08015824(1);
              *(undefined1 *)(iVar2 + 6) = 1;
              *(undefined1 *)(iVar2 + 1) = 0;
              FUN_08011928(1);
              iVar10 = FUN_08009f48();
              if (iVar10 == 1) {
                FUN_0800c570();
              }
              else {
                cVar6 = *(char *)(iVar7 + 1);
                if ((((cVar6 != '\x01') && (DAT_0801b180[4] != '\0')) && (cVar6 != '\v')) &&
                   (((cVar6 != '\a' && (cVar6 != '\x0f')) &&
                    ((cVar6 != '\x11' && (cVar6 != '\x03')))))) {
                  FUN_0800c980(0);
                }
              }
              FUN_08014964();
              if (*pcVar3 == '\0') {
                FUN_0801acce(1);
              }
              iVar10 = DAT_0801b188;
              if (*(char *)(iVar7 + 1) == '\x01') {
                *(undefined1 *)(DAT_0801b188 + 9) = *(undefined1 *)(iVar1 + 0xfa);
              }
              else {
                uVar5 = FUN_0801328c();
                *(undefined1 *)(iVar10 + 9) = uVar5;
              }
              if ((*(char *)(iVar7 + 1) != '\x11') && (iVar10 = FUN_08008b5c(), iVar10 == 1)) {
                FUN_080207ec(5);
              }
              *(undefined1 *)(iVar7 + 0x1e) = 1;
              *(undefined1 *)(iVar2 + 5) = 0;
              *(undefined1 *)(iVar2 + 7) = 0;
              *(undefined1 *)(iVar2 + 8) = 3;
              *(undefined1 *)(iVar2 + 2) = 4;
              *(undefined2 *)(iVar7 + 0x16) = 0x14;
              *(undefined1 *)(iVar7 + 0x15) = 0;
              *(undefined1 *)(iVar7 + 0x14) = 4;
            }
          }
        }
      }
      else {
        *(undefined1 *)(iVar2 + 1) = 0;
        if (*(short *)(iVar7 + 0xd) == 0) {
          if (*(char *)(iVar7 + 0x15) == '\x01') {
            *(undefined1 *)(iVar7 + 0x15) = 0;
            FUN_0801ac32(0);
            FUN_0801acce(0);
            FUN_080207ec(6);
            FUN_08015824(0);
            FUN_080033c8();
            if (*(char *)(iVar7 + 0x28) == '\x01') {
              FUN_0800da50();
            }
          }
          else if ((*(char *)(iVar2 + 6) != '\0') && (iVar10 = FUN_08008aa8(), iVar10 == 0)) {
            FUN_0801c8fc();
          }
        }
        else if (*(char *)(iVar7 + 0x15) == '\x01') {
          FUN_0801ac32(1);
          FUN_0801acce(1);
          FUN_080207ec(5);
        }
        cVar6 = *(char *)(iVar7 + 1);
        if ((((cVar6 != '\x03') && (cVar6 != '\x02')) && (cVar6 != '\v')) && (cVar6 != '\x11')) {
          iVar10 = FUN_08009694();
          if (iVar10 != 1) {
            FUN_080199a8();
            iVar7 = DAT_0800da40;
            if ((*(char *)(DAT_0800da40 + 0x29) != '\0') && (*(char *)(DAT_0800da40 + 0x2a) == '\0')
               ) {
              iVar10 = FUN_08009804();
              if (iVar10 == 1) {
                *(undefined1 *)(iVar7 + 0x2a) = 0x46;
                return;
              }
              *(undefined1 *)(iVar7 + 0x2a) = 0x46;
              iVar10 = DAT_0800da44;
              uVar12 = 0;
              if (*(char *)(iVar7 + 0x28) == '\x01') {
                if (*(char *)(iVar7 + 0x4a) == -0x5b) {
                  *(undefined1 *)(iVar7 + 0x28) = 0;
                  *(undefined1 *)(iVar10 + 0xfb) = *(undefined1 *)(iVar10 + 0xfa);
                }
                else if (*(char *)(DAT_0800da44 + 0xfc) == '\0') {
                  uVar11 = *(byte *)(DAT_0800da44 + 0xfb) + 1;
                  uVar12 = uVar11 / 3;
                  *(byte *)(DAT_0800da44 + 0xfb) = (char)uVar11 + (char)uVar12 * -3;
                  *(undefined1 *)(iVar10 + 0xfc) = 1;
                }
                else {
                  *(undefined1 *)(iVar7 + 0x28) = 0;
                  *(undefined1 *)(iVar10 + 0xfb) = *(undefined1 *)(iVar10 + 0xfa);
                }
              }
              else {
                *(undefined1 *)(iVar7 + 0x28) = 1;
                if (*(char *)(iVar7 + 0x4a) == -0x5b) {
                  *(byte *)(iVar10 + 0xfb) = ~*(byte *)(iVar10 + 0xfa) & 1;
                }
                else {
                  uVar11 = *(byte *)(iVar10 + 0xfa) + 1;
                  *(char *)(iVar10 + 0xfb) = (char)uVar11 + (char)(uVar11 / 3) * -3;
                  *(undefined1 *)(iVar10 + 0xfc) = 0;
                }
              }
              FUN_08000f6e(DAT_0800da48,iVar10 + (uint)*(byte *)(iVar10 + 0xfb) * 0x58 + 0x110,0x58,
                           uVar12,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
              FUN_08008a48();
              *(undefined1 *)(iVar7 + 0x14) = 1;
              if ((*(char *)(DAT_0800da4c + 1) != '\0') && (*(ushort *)(iVar7 + 0x24) < 9)) {
                *(undefined2 *)(iVar7 + 0x24) = 9;
              }
            }
            return;
          }
          if (*(char *)(iVar7 + 0x68) == '\0') {
            FUN_0801c9a0();
            return;
          }
        }
      }
    }
    break;
  case 2:
    goto switchD_0801ad9c_caseD_2;
  case 3:
    goto switchD_0801ad9c_caseD_3;
  case 4:
    iVar10 = FUN_0801a948();
    if (iVar10 == 1) {
      if (*(char *)(iVar2 + 2) == '\0') {
        if (*(short *)(iVar7 + 0xd) == 0) {
          FUN_0801ac32(0);
          FUN_0801c8fc();
        }
        else {
          FUN_0801ac32(1);
        }
        FUN_0801b3fc();
        return;
      }
      *(char *)(iVar2 + 2) = *(char *)(iVar2 + 2) + -1;
    }
    else {
      *(undefined1 *)(iVar2 + 2) = 4;
      iVar10 = thunk_FUN_0801bd5c();
      if (iVar10 == 0) {
        iVar10 = FUN_0801a974();
        if (iVar10 == 1) {
          cVar6 = *(char *)(iVar2 + 8) + -1;
          *(char *)(iVar2 + 8) = cVar6;
          if ((cVar6 == '\0') && (*(undefined1 *)(iVar2 + 5) = 1, *(char *)(iVar2 + 7) == '\0')) {
            *(undefined1 *)(iVar2 + 7) = 1;
            *(undefined2 *)(iVar7 + 0x16) = 8;
            FUN_0801b218();
            return;
          }
        }
        else {
          *(undefined1 *)(iVar2 + 8) = 3;
        }
      }
      else {
        iVar10 = FUN_0801a974();
        if (iVar10 == 1) {
          if (*(char *)(iVar2 + 8) != '\0') {
            *(char *)(iVar2 + 8) = *(char *)(iVar2 + 8) + -1;
          }
          if ((*(char *)(iVar2 + 8) == '\0') &&
             (*(undefined1 *)(iVar2 + 5) = 1, *(char *)(iVar2 + 7) == '\0')) {
            *(undefined2 *)(iVar7 + 0x16) = 10;
            *(undefined1 *)(iVar2 + 7) = 1;
            FUN_0801b218();
            return;
          }
        }
        else {
          *(undefined1 *)(iVar2 + 8) = 3;
          iVar10 = FUN_0801a8ac();
          if (iVar10 == 1) {
            if ((*(short *)(iVar7 + 0x16) == 0) && (*(char *)(iVar2 + 5) == '\0')) {
              *(undefined1 *)(iVar2 + 5) = 1;
              *(undefined2 *)(iVar7 + 0x16) = 8;
              FUN_0801b218();
            }
          }
          else {
            *(undefined1 *)(iVar2 + 5) = 0;
            *(undefined2 *)(iVar7 + 0x16) = 0x14;
          }
        }
      }
      if (((*(char *)(iVar2 + 5) != '\x01') && (*(char *)(iVar7 + 1) != '\x11')) &&
         (iVar10 = FUN_08008b5c(), iVar10 == 1)) {
        FUN_080207ec(5);
      }
      if ((*(short *)(iVar7 + 0x16) == 0) && (*(char *)(iVar2 + 5) == '\x01')) {
        FUN_0801c8fc();
        return;
      }
    }
    break;
  case 5:
    *(undefined1 *)(DAT_0801b178 + 1) = 5;
    break;
  case 6:
    iVar10 = FUN_0801a948();
    if (iVar10 == 1) {
      if (*(char *)(iVar2 + 1) == '\0') {
        if (*(short *)(iVar7 + 0xd) == 0) {
          FUN_0801ac32(0);
          FUN_0801c8fc();
        }
        else {
          FUN_0801ac32(1);
        }
        FUN_0801b3fc();
        return;
      }
      *(char *)(iVar2 + 1) = *(char *)(iVar2 + 1) + -1;
    }
    else {
      *(undefined1 *)(iVar2 + 1) = 10;
    }
  }
  return;
}

