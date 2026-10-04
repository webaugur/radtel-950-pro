/**
 * @brief fun_08011d3c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08011d3c, Ghidra name FUN_08011d3c, 300 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08011d3c(void)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = DAT_08011e78;
  puVar5 = DAT_08011e6c;
  iVar4 = DAT_08011e68;
  uVar1 = *(ushort *)(DAT_08011e6c + 2);
  cVar2 = *(char *)(DAT_08011e68 + 0x21);
  if (*(byte *)(DAT_08011e68 + 0x43) == 1) {
    if (cVar2 == '\x01') {
      iVar6 = FUN_0802004c(*(undefined1 *)(DAT_08011e68 + 0x42));
      *(char *)(iVar4 + 0x42) = (char)iVar6;
      if (iVar6 == 0xff) {
        FUN_080073f8(5);
        return;
      }
      *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(iVar4 + iVar6 * 2 + 0x24);
      puVar5[0x10] = (char)iVar6;
    }
    else {
      uVar7 = (uint)(byte)DAT_08011e6c[1];
      uVar3 = *(ushort *)(DAT_08011e74 + uVar7 * 2);
      if (uVar3 < uVar1) {
        *(ushort *)(DAT_08011e6c + 2) = uVar1 - 1;
        if ((ushort)(uVar1 - 1) < uVar3) {
          *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(iVar6 + uVar7 * 2);
        }
      }
      else {
        *(undefined2 *)(DAT_08011e6c + 2) = *(undefined2 *)(DAT_08011e78 + uVar7 * 2);
      }
    }
  }
  else if (*(byte *)(DAT_08011e68 + 0x43) < 2) {
    if (cVar2 == '\x01') {
      iVar6 = FUN_0802004c(*(undefined1 *)(DAT_08011e68 + 0x20));
      *(char *)(iVar4 + 0x20) = (char)iVar6;
      if (iVar6 == 0xff) {
        FUN_080073f8(5);
        return;
      }
      *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(iVar4 + iVar6 * 2 + 2);
      puVar5[0x10] = (char)iVar6;
    }
    else if (uVar1 < 0x1901) {
      *(undefined2 *)(DAT_08011e6c + 2) = 0x2a30;
    }
    else {
      *(ushort *)(DAT_08011e6c + 2) = uVar1 - 10;
    }
  }
  else if (cVar2 == '\x01') {
    iVar6 = FUN_0802004c(*(undefined1 *)(DAT_08011e68 + 0x95));
    *(char *)(iVar4 + 0x95) = (char)iVar6;
    if (iVar6 == 0xff) {
      FUN_080073f8(5);
      return;
    }
    iVar8 = iVar6 * 5 + iVar4;
    *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(iVar8 + 0x4a);
    puVar5[0x16] = *(undefined1 *)(iVar8 + 0x4c);
    *(undefined2 *)(puVar5 + 0x18) = *(undefined2 *)(iVar8 + 0x4d);
    puVar5[0x10] = (char)iVar6;
  }
  else if ((uVar1 < 0x97) ||
          (uVar1 <= *(ushort *)(DAT_08011e70 + (uint)*(byte *)(DAT_08011e68 + 0x96) * 2))) {
    *(undefined2 *)(DAT_08011e6c + 2) = 30000;
  }
  else {
    *(ushort *)(DAT_08011e6c + 2) = uVar1 - 1;
    if ((ushort)(uVar1 - 1) < 0x96) {
      *(undefined2 *)(puVar5 + 2) = 30000;
    }
  }
  *puVar5 = 2;
  *(undefined2 *)(puVar5 + 4) = 10;
  if (*(char *)(iVar4 + 0x21) == '\0') {
    FUN_0801232c();
  }
  if (*(char *)(iVar4 + 0x21) != '\0') {
    FUN_080110fc();
    return;
  }
  FUN_08010e28();
  return;
}

