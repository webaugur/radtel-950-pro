/**
 * @brief fun_0802235c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802235c, Ghidra name FUN_0802235c, 1074 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802235c(void)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  FUN_0801b8a8();
  iVar6 = DAT_08022638;
  iVar9 = DAT_08022634;
  puVar4 = DAT_08022630;
  iVar5 = DAT_0802262c;
  pcVar3 = DAT_08022628;
  pcVar1 = DAT_0801a37c;
  switch(DAT_08022628[4]) {
  case '\0':
    if (*DAT_08022628 == '\x01') {
      FUN_0801b6cc();
    }
    if (pcVar3[0x51] == '\x01') {
      FUN_0801ac34(*(undefined4 *)(pcVar3 + 0x54),pcVar3[0x58],*(undefined4 *)(pcVar3 + 0x5c),
                   *(undefined1 *)(iVar5 + 0x21),*puVar4,pcVar3[0x60],*(undefined1 *)(iVar5 + 0x23),
                   *(undefined1 *)(iVar5 + 0x24),*(undefined1 *)(iVar5 + 0x25),1);
    }
    else {
      puVar8 = *(undefined4 **)(iVar5 + 0x1c);
      FUN_0801ac34(*puVar8,*(undefined1 *)(puVar8 + 1),puVar8[2],*(undefined1 *)(iVar5 + 0x21),
                   *puVar4,*(undefined1 *)(iVar5 + 0x22),*(undefined1 *)(iVar5 + 0x23),
                   *(undefined1 *)(iVar5 + 0x24),*(undefined1 *)(iVar5 + 0x25),1);
    }
    FUN_0801ad0c();
    pcVar3[4] = '\x01';
    if (pcVar3[0x4b] == '\0') {
      FUN_08012ae2(DAT_0802263c,0x100);
      return;
    }
    break;
  case '\x01':
    iVar6 = FUN_08009c20();
    if (iVar6 != 0) {
      FUN_08015868(1);
      FUN_0801a9a4(*(undefined1 *)(iVar9 + 0x10b),2);
      *(ushort *)(pcVar3 + 5) = (ushort)(byte)puVar4[5] * 300;
      pcVar3[4] = '\x02';
      iVar9 = FUN_08006814();
      if (iVar9 == 1) {
        pcVar3[4] = '\b';
      }
      else {
        if (*pcVar3 == '\x02') {
          FUN_08012ae6(DAT_0802263c,0x100);
          FUN_08012ae2(DAT_08022640,0x8000);
          return;
        }
        iVar9 = FUN_080201e8();
        if (iVar9 == 0) {
          if (pcVar3[0x36] != '\0') {
            FUN_0800d650(5);
            return;
          }
          if ((*(byte *)(iVar5 + 0x31) & 1) != 0) {
            FUN_0800d650(*(byte *)(DAT_08022644 + 6) & 1);
            return;
          }
        }
      }
    }
    break;
  case '\x02':
    iVar9 = FUN_0802287c();
    if (((((iVar9 != 1) && (iVar9 = FUN_08008aa8(), iVar9 == 0)) && (*(short *)(pcVar3 + 0xb) == 0))
        && ((iVar9 = FUN_08008a94(), uVar2 = DAT_08022650, iVar9 == 0 && (pcVar3[0x51] == '\0'))))
       && (*(char *)(DAT_0802264c + 0x11) == '\0')) {
      if (*pcVar3 == '\x02') {
        pcVar3[4] = '\x03';
      }
      else {
        iVar9 = FUN_08012ace(DAT_08022650,8);
        if ((((iVar9 != 0) && (iVar9 = FUN_08012ace(uVar2,4), iVar9 != 0)) &&
            ((*(char *)(DAT_08022654 + (uint)*(byte *)(iVar6 + 9)) != '\x01' ||
             (iVar9 = FUN_08012ace(uVar2,0x20), iVar9 != 0)))) &&
           ((iVar9 = FUN_08012ace(uVar2,0x40), iVar9 != 0 &&
            (pcVar3[4] = '\x03', (int)((uint)*(byte *)(iVar5 + 0x31) << 0x1e) < 0)))) {
          FUN_0800d650(*(byte *)(DAT_08022644 + 6) & 2);
          return;
        }
      }
    }
    break;
  case '\x03':
    if (DAT_08022628[0x32] != '\x01') {
      FUN_080229a0();
      return;
    }
    break;
  case '\x04':
    if (*(short *)(DAT_08022628 + 7) == 0) {
      FUN_0801ac24();
      FUN_0800ad06(100);
      thunk_FUN_0801c150(0);
      FUN_0801b3fc();
      FUN_080007de(0);
      if ((*pcVar3 == '\x02') || (*(char *)(iVar6 + 0x19) == '\0')) {
        pcVar3[4] = '\0';
      }
      else {
        pcVar3[4] = '\t';
      }
      FUN_0801a9a4(*(undefined1 *)(iVar9 + 0x10a),0);
      *(ushort *)(pcVar3 + 0xd) = (ushort)(byte)puVar4[0x15];
      if (puVar4[0x1d] == '\x01') {
        FUN_08012ae6(DAT_0802263c,0x200);
      }
      FUN_08022ee0();
      if (pcVar3[0x34] == '\0') {
        FUN_0800c940();
      }
      else {
        if ((pcVar3[1] == '\x0f') || (pcVar3[1] == '\x14')) {
          FUN_08021d40(1,0);
        }
        else {
          FUN_08021d40(1);
        }
        pcVar3[0x34] = '\0';
      }
      if (pcVar3[4] == '\t') {
        *pcVar3 = '\x01';
        pcVar3[7] = '2';
        pcVar3[8] = '\0';
      }
    }
    break;
  case '\x05':
    FUN_0800d650(4);
    pcVar3[4] = '\x02';
    break;
  case '\b':
    if (*(char *)(DAT_08022648 + 0xf) == '\0') {
      FUN_080229a0();
      return;
    }
    break;
  case '\t':
    if (*(short *)(DAT_08022628 + 7) != 0) {
      if ((((*DAT_0801a37c != '\x01') || (iVar5 = FUN_08008aa8(), iVar5 == 1)) &&
          (uVar2 = DAT_0801a380, *pcVar1 != '\x02')) &&
         ((((iVar6 = FUN_08012ace(DAT_0801a380,8), iVar9 = DAT_0801a388, iVar5 = DAT_0801a384,
            iVar6 == 0 || (iVar6 = FUN_08012ace(uVar2,4), iVar6 == 0)) ||
           ((*(char *)(iVar9 + (uint)*(byte *)(iVar5 + 9)) == '\x01' &&
            (iVar6 = FUN_08012ace(uVar2,0x20), iVar6 == 0)))) ||
          (iVar6 = FUN_08012ace(uVar2,0x40), iVar6 == 0)))) {
        pcVar1[0x33] = '\0';
        iVar7 = FUN_08012ace(uVar2,0x40);
        iVar6 = DAT_0801a38c;
        if (iVar7 == 0) {
          pcVar1[0x33] = *(char *)(DAT_0801a38c + 0xfa);
        }
        else if (*(char *)(iVar9 + (uint)*(byte *)(iVar5 + 9)) == '\x01') {
          if (*(char *)(DAT_0801a390 + 0x1f) == '\x01') {
            pcVar1[0x33] = *(char *)(DAT_0801a38c + 0xfa);
          }
          else {
            iVar5 = FUN_08012ace(uVar2,0x20);
            if (iVar5 == 0) {
              pcVar1[0x33] = '\x02';
            }
            else {
              iVar5 = FUN_08012ace(uVar2,4);
              if (iVar5 == 0) {
                pcVar1[0x33] = '\x01';
              }
              else {
                pcVar1[0x33] = '\0';
              }
            }
          }
        }
        else if (*(char *)(DAT_0801a390 + 0x1f) == '\x01') {
          pcVar1[0x33] = *(char *)(DAT_0801a38c + 0xfa);
        }
        else {
          iVar5 = FUN_08012ace(uVar2,4);
          if (iVar5 == 0) {
            pcVar1[0x33] = '\x01';
          }
          else {
            pcVar1[0x33] = '\0';
          }
        }
        *(undefined1 *)(DAT_0801a394 + 3) = 0;
        iVar5 = FUN_08008aa8();
        if (iVar5 == 1) {
          FUN_080039f8(0);
          return;
        }
        FUN_0801b3fc();
        iVar5 = FUN_0800a0c0();
        if (iVar5 != 0) {
          FUN_080207ec(4);
          FUN_0800a8c8(0);
          puVar4 = DAT_08023544;
          *DAT_08023544 = 0;
          puVar4[2] = 0;
          puVar4[1] = 0;
          return;
        }
        if (pcVar1[1] == '\x01') {
          FUN_0800e95c();
        }
        if (pcVar1[0x33] == *(char *)(iVar6 + 0xfa)) {
          FUN_0800da50();
        }
        else {
          FUN_08021d40(0,1);
          pcVar1[0x34] = '\x01';
        }
        FUN_08014964();
        FUN_0801a134();
        if (*pcVar1 != '\x01') {
          FUN_080007de(0);
          return;
        }
      }
      return;
    }
    *DAT_08022628 = '\0';
    pcVar3[4] = '\0';
  }
  return;
}

