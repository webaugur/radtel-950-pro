/**
 * @brief fun_08012200
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012200, Ghidra name FUN_08012200, 292 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08012200(void)

{
  char cVar1;
  byte bVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = DAT_08012328;
  puVar3 = DAT_08012324;
  cVar1 = *(char *)((int)DAT_08012324 + 0x21);
  if (*(byte *)((int)DAT_08012324 + 0x43) == 1) {
    if ((*(char *)(DAT_08012328 + 0xf) == '\0') && (cVar1 == '\x01')) {
      *(undefined1 *)((int)DAT_08012324 + 0x21) = 0;
    }
    bVar2 = *(byte *)(DAT_08012324 + 0x21);
    if (*(char *)((int)puVar3 + 0x21) == '\x01') {
      *(undefined2 *)(iVar4 + 2) = puVar3[bVar2 + 0x12];
    }
    else {
      *(undefined2 *)(iVar4 + 2) = puVar3[0x11];
    }
    *(undefined1 *)(iVar4 + 0x17) = *(undefined1 *)(puVar3 + 0x22);
    uVar5 = (uint)*(ushort *)(iVar4 + 2);
    if (uVar5 - 0x208 < 0x4a7) {
      *(undefined1 *)(iVar4 + 1) = 1;
    }
    else if (uVar5 - 0x8fc < 0x6c35) {
      *(undefined1 *)(iVar4 + 1) = 2;
    }
    else if (uVar5 - 0x99 < 0x7f) {
      *(undefined1 *)(iVar4 + 1) = 0;
    }
    else {
      *(undefined1 *)(iVar4 + 1) = 2;
      *(undefined2 *)(iVar4 + 2) = 0x8fc;
    }
    *(byte *)(iVar4 + 0x10) = bVar2;
    return;
  }
  if (*(byte *)((int)DAT_08012324 + 0x43) < 2) {
    if ((*(char *)(DAT_08012328 + 10) == '\0') && (cVar1 == '\x01')) {
      *(undefined1 *)((int)DAT_08012324 + 0x21) = 0;
    }
    bVar2 = *(byte *)(DAT_08012324 + 0x10);
    if (*(char *)((int)puVar3 + 0x21) == '\x01') {
      *(undefined2 *)(iVar4 + 2) = puVar3[bVar2 + 1];
    }
    else {
      *(undefined2 *)(iVar4 + 2) = *puVar3;
    }
    if (0x1130 < *(ushort *)(iVar4 + 2) - 0x1900) {
      *(undefined2 *)(iVar4 + 2) = 0x1900;
    }
    *(byte *)(iVar4 + 0x10) = bVar2;
    return;
  }
  if ((*(char *)(DAT_08012328 + 0x15) == '\0') && (cVar1 == '\x01')) {
    *(undefined1 *)((int)DAT_08012324 + 0x21) = 0;
  }
  bVar2 = *(byte *)((int)DAT_08012324 + 0x95);
  if (*(char *)((int)puVar3 + 0x21) == '\x01') {
    *(undefined2 *)(iVar4 + 2) = *(undefined2 *)((int)puVar3 + (uint)bVar2 * 5 + 0x4a);
    *(undefined1 *)(iVar4 + 0x16) = *(undefined1 *)((int)puVar3 + (uint)bVar2 * 5 + 0x4c);
    *(undefined2 *)(iVar4 + 0x18) = *(undefined2 *)((int)puVar3 + (uint)bVar2 * 5 + 0x4d);
  }
  else {
    *(undefined2 *)(iVar4 + 2) = *(undefined2 *)((int)puVar3 + 0x45);
    *(undefined2 *)(iVar4 + 0x18) = puVar3[0x24];
    *(undefined1 *)(iVar4 + 0x16) = 4;
  }
  *(undefined1 *)(iVar4 + 0x17) = *(undefined1 *)(puVar3 + 0x4c);
  if (0x749a < *(ushort *)(iVar4 + 2) - 0x96) {
    *(undefined2 *)(iVar4 + 2) = 0x96;
  }
  *(byte *)(iVar4 + 0x10) = bVar2;
  return;
}

