/**
 * @brief fun_08011acc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08011acc, Ghidra name FUN_08011acc, 272 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08011acc(void)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = DAT_08011be0;
  iVar3 = DAT_08011bdc;
  sVar1 = *(short *)(DAT_08011be0 + 2);
  cVar2 = *(char *)(DAT_08011bdc + 0x21);
  if (*(byte *)(DAT_08011bdc + 0x43) == 1) {
    if (cVar2 == '\x01') {
      iVar5 = FUN_0802007e(*(undefined1 *)(DAT_08011bdc + 0x42));
      *(char *)(iVar3 + 0x42) = (char)iVar5;
      if (iVar5 == 0xff) {
        FUN_080073f8(5);
        return;
      }
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar3 + iVar5 * 2 + 0x24);
      puVar4[0x10] = (char)iVar5;
    }
    else {
      *(short *)(DAT_08011be0 + 2) = sVar1 + 1;
      if (*(ushort *)(DAT_08011be4 + (uint)(byte)puVar4[1] * 2) < (ushort)(sVar1 + 1U)) {
        *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(DAT_08011be8 + (uint)(byte)puVar4[1] * 2);
      }
    }
  }
  else if (*(byte *)(DAT_08011bdc + 0x43) < 2) {
    if (cVar2 == '\x01') {
      iVar5 = FUN_0802007e(*(undefined1 *)(DAT_08011bdc + 0x20));
      *(char *)(iVar3 + 0x20) = (char)iVar5;
      if (iVar5 == 0xff) {
        FUN_080073f8(5);
        return;
      }
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar3 + iVar5 * 2 + 2);
      puVar4[0x10] = (char)iVar5;
    }
    else {
      *(short *)(DAT_08011be0 + 2) = sVar1 + 10;
      if (0x2a30 < (ushort)(sVar1 + 10U)) {
        *(undefined2 *)(puVar4 + 2) = 0x1900;
      }
    }
  }
  else if (cVar2 == '\x01') {
    iVar5 = FUN_0802007e(*(undefined1 *)(DAT_08011bdc + 0x95));
    *(char *)(iVar3 + 0x95) = (char)iVar5;
    if (iVar5 == 0xff) {
      FUN_080073f8(5);
      return;
    }
    iVar6 = iVar5 * 5 + iVar3;
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar6 + 0x4a);
    puVar4[0x16] = *(undefined1 *)(iVar6 + 0x4c);
    *(undefined2 *)(puVar4 + 0x18) = *(undefined2 *)(iVar6 + 0x4d);
    puVar4[0x10] = (char)iVar5;
  }
  else {
    *(short *)(DAT_08011be0 + 2) = sVar1 + 1;
    if (30000 < (ushort)(sVar1 + 1U)) {
      *(undefined2 *)(puVar4 + 2) = 0x96;
    }
  }
  *puVar4 = 2;
  *(undefined2 *)(puVar4 + 4) = 10;
  if (*(char *)(iVar3 + 0x21) == '\0') {
    FUN_0801232c();
  }
  if (*(char *)(iVar3 + 0x21) == '\0') {
    FUN_08010e28();
    return;
  }
  FUN_080110fc();
  return;
}

