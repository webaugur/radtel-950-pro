/**
 * @brief fun_08011bec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08011bec, Ghidra name FUN_08011bec, 316 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08011bec(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = DAT_08011d38;
  puVar4 = DAT_08011d2c;
  iVar3 = DAT_08011d28;
  uVar5 = *(ushort *)(DAT_08011d2c + 2);
  cVar1 = *(char *)(DAT_08011d28 + 0x21);
  if (*(byte *)(DAT_08011d28 + 0x43) == 1) {
    if (cVar1 == '\x01') {
      iVar6 = FUN_0802004c(*(undefined1 *)(DAT_08011d28 + 0x42));
      *(char *)(iVar3 + 0x42) = (char)iVar6;
      if (iVar6 == 0xff) {
        FUN_080073f8(5);
        return;
      }
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar3 + iVar6 * 2 + 0x24);
      puVar4[0x10] = (char)iVar6;
    }
    else {
      uVar7 = (uint)(byte)DAT_08011d2c[1];
      uVar2 = *(ushort *)(DAT_08011d34 + uVar7 * 2);
      if (uVar2 < uVar5) {
        uVar5 = uVar5 - *(byte *)(DAT_08011d30 + -6 + (uint)*(byte *)(DAT_08011d28 + 0x97));
        *(ushort *)(DAT_08011d2c + 2) = uVar5;
        if (uVar5 < uVar2) {
          *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar6 + uVar7 * 2);
        }
      }
      else {
        *(undefined2 *)(DAT_08011d2c + 2) = *(undefined2 *)(DAT_08011d38 + uVar7 * 2);
      }
    }
  }
  else if (*(byte *)(DAT_08011d28 + 0x43) < 2) {
    if (cVar1 == '\x01') {
      iVar6 = FUN_0802004c(*(undefined1 *)(DAT_08011d28 + 0x20));
      *(char *)(iVar3 + 0x20) = (char)iVar6;
      if (iVar6 == 0xff) {
        FUN_080073f8(5);
        return;
      }
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar3 + iVar6 * 2 + 2);
      puVar4[0x10] = (char)iVar6;
    }
    else if (uVar5 < 0x1901) {
      *(undefined2 *)(DAT_08011d2c + 2) = 0x2a30;
    }
    else {
      *(ushort *)(DAT_08011d2c + 2) = uVar5 - 10;
    }
  }
  else if (cVar1 == '\x01') {
    iVar6 = FUN_0802004c(*(undefined1 *)(DAT_08011d28 + 0x95));
    *(char *)(iVar3 + 0x95) = (char)iVar6;
    if (iVar6 == 0xff) {
      FUN_080073f8(5);
      return;
    }
    iVar8 = iVar6 * 5 + iVar3;
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar8 + 0x4a);
    puVar4[0x16] = *(undefined1 *)(iVar8 + 0x4c);
    *(undefined2 *)(puVar4 + 0x18) = *(undefined2 *)(iVar8 + 0x4d);
    puVar4[0x10] = (char)iVar6;
  }
  else if ((uVar5 < 0x97) ||
          (uVar2 = *(ushort *)(DAT_08011d30 + (uint)*(byte *)(DAT_08011d28 + 0x96) * 2),
          uVar5 <= uVar2)) {
    *(undefined2 *)(DAT_08011d2c + 2) = 30000;
  }
  else {
    uVar5 = uVar5 - uVar2;
    *(ushort *)(DAT_08011d2c + 2) = uVar5;
    if (uVar5 < 0x96) {
      *(undefined2 *)(puVar4 + 2) = 30000;
    }
  }
  *puVar4 = 2;
  *(undefined2 *)(puVar4 + 4) = 10;
  if (*(char *)(iVar3 + 0x21) == '\0') {
    FUN_0801232c();
  }
  if (*(char *)(iVar3 + 0x21) != '\0') {
    FUN_080110fc();
    return;
  }
  FUN_08010e28();
  return;
}

