/**
 * @brief fun_08011990
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08011990, Ghidra name FUN_08011990, 296 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08011990(void)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = DAT_08011abc;
  iVar3 = DAT_08011ab8;
  sVar1 = *(short *)(DAT_08011abc + 2);
  cVar2 = *(char *)(DAT_08011ab8 + 0x21);
  if (*(byte *)(DAT_08011ab8 + 0x43) == 1) {
    if (cVar2 == '\x01') {
      iVar6 = FUN_0802007e(*(undefined1 *)(DAT_08011ab8 + 0x42));
      *(char *)(iVar3 + 0x42) = (char)iVar6;
      if (iVar6 == 0xff) {
        FUN_080073f8(5);
        return;
      }
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar3 + iVar6 * 2 + 0x24);
      puVar4[0x10] = (char)iVar6;
    }
    else {
      uVar5 = sVar1 + (ushort)*(byte *)(DAT_08011ac0 + -6 + (uint)*(byte *)(DAT_08011ab8 + 0x97));
      *(ushort *)(DAT_08011abc + 2) = uVar5;
      if (*(ushort *)(DAT_08011ac4 + (uint)(byte)puVar4[1] * 2) < uVar5) {
        *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(DAT_08011ac8 + (uint)(byte)puVar4[1] * 2);
      }
    }
  }
  else if (*(byte *)(DAT_08011ab8 + 0x43) < 2) {
    if (cVar2 == '\x01') {
      iVar6 = FUN_0802007e(*(undefined1 *)(DAT_08011ab8 + 0x20));
      *(char *)(iVar3 + 0x20) = (char)iVar6;
      if (iVar6 == 0xff) {
        FUN_080073f8(5);
        return;
      }
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar3 + iVar6 * 2 + 2);
      puVar4[0x10] = (char)iVar6;
    }
    else {
      *(ushort *)(DAT_08011abc + 2) = sVar1 + 10U;
      if (0x2a30 < (ushort)(sVar1 + 10U)) {
        *(undefined2 *)(puVar4 + 2) = 0x1900;
      }
    }
  }
  else if (cVar2 == '\x01') {
    iVar6 = FUN_0802007e(*(undefined1 *)(DAT_08011ab8 + 0x95));
    *(char *)(iVar3 + 0x95) = (char)iVar6;
    if (iVar6 == 0xff) {
      FUN_080073f8(5);
      return;
    }
    iVar7 = iVar6 * 5 + iVar3;
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar7 + 0x4a);
    puVar4[0x16] = *(undefined1 *)(iVar7 + 0x4c);
    *(undefined2 *)(puVar4 + 0x18) = *(undefined2 *)(iVar7 + 0x4d);
    puVar4[0x10] = (char)iVar6;
  }
  else {
    uVar5 = sVar1 + *(short *)(DAT_08011ac0 + (uint)*(byte *)(DAT_08011ab8 + 0x96) * 2);
    *(ushort *)(DAT_08011abc + 2) = uVar5;
    if (30000 < uVar5) {
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

