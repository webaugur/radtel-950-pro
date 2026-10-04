/**
 * @brief fun_080109b0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080109b0, Ghidra name FUN_080109b0, 460 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080109b0(void)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = DAT_08010b80;
  puVar2 = DAT_08010b7c;
  bVar1 = *(byte *)((int)DAT_08010b7c + 0x43);
  *(undefined1 *)(DAT_08010b80 + 10) = 0;
  uVar7 = 0;
  do {
    if (puVar2[uVar7 + 1] - 0x1900 < 0x1131) {
      FUN_080158b0(iVar3 + 6,uVar7 & 0xffff,1);
      *(undefined1 *)(iVar3 + 10) = 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xf);
  if (0xe < (byte)puVar2[0x10]) {
    *(undefined1 *)(puVar2 + 0x10) = 0;
  }
  if (0x1130 < *puVar2 - 0x1900) {
    *puVar2 = 0x1900;
  }
  if (*(char *)(iVar3 + 10) != '\0') {
    *(undefined1 *)((int)puVar2 + 0x43) = 0;
    iVar5 = FUN_08009384((char)puVar2[0x10]);
    if (iVar5 == 0) {
      uVar4 = FUN_0802007e((char)puVar2[0x10]);
      *(undefined1 *)(puVar2 + 0x10) = uVar4;
    }
  }
  *(undefined1 *)(iVar3 + 0xf) = 0;
  uVar7 = 0;
  do {
    uVar6 = (uint)puVar2[uVar7 + 0x12];
    if (((uVar6 - 0x99 < 0x7f) || (uVar6 - 0x208 < 0x4a7)) || (uVar6 - 0x8fc < 0x6c35)) {
      FUN_080158b0(iVar3 + 0xb,uVar7 & 0xffff,1);
      *(undefined1 *)(iVar3 + 0xf) = 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xf);
  if (0xe < (byte)puVar2[0x21]) {
    *(undefined1 *)(puVar2 + 0x21) = 0;
  }
  uVar7 = (uint)puVar2[0x11];
  if (((0x7e < uVar7 - 0x99) && (0x4a6 < uVar7 - 0x208)) && (0x6c34 < uVar7 - 0x8fc)) {
    puVar2[0x11] = 0x8fc;
  }
  if (*(char *)(iVar3 + 0xf) != '\0') {
    *(undefined1 *)((int)puVar2 + 0x43) = 1;
    iVar5 = FUN_08009384((char)puVar2[0x21]);
    if (iVar5 == 0) {
      uVar4 = FUN_0802007e((char)puVar2[0x21]);
      *(undefined1 *)(puVar2 + 0x21) = uVar4;
    }
  }
  *(undefined1 *)(iVar3 + 0x15) = 0;
  uVar7 = 0;
  do {
    if (*(ushort *)((int)puVar2 + uVar7 * 5 + 0x4a) - 0x96 < 0x749b) {
      FUN_080158b0(iVar3 + 0x11,uVar7 & 0xffff,1);
      *(undefined1 *)(iVar3 + 0x15) = 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xf);
  if (0xe < *(byte *)((int)puVar2 + 0x95)) {
    *(undefined1 *)((int)puVar2 + 0x95) = 0;
  }
  if (*(char *)(iVar3 + 0x15) != '\0') {
    *(undefined1 *)((int)puVar2 + 0x43) = 2;
    iVar5 = FUN_08009384(*(undefined1 *)((int)puVar2 + 0x95));
    if (iVar5 == 0) {
      uVar4 = FUN_0802007e(*(undefined1 *)((int)puVar2 + 0x95));
      *(undefined1 *)((int)puVar2 + 0x95) = uVar4;
    }
  }
  *(byte *)((int)puVar2 + 0x43) = bVar1;
  if (bVar1 == 1) {
    if (*(char *)(iVar3 + 0xf) == '\0') {
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
    }
    *(char *)(iVar3 + 0x10) = (char)puVar2[0x21];
  }
  else if (bVar1 < 2) {
    if (*(char *)(iVar3 + 10) == '\0') {
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
    }
    *(char *)(iVar3 + 0x10) = (char)puVar2[0x10];
  }
  else {
    if (*(char *)(iVar3 + 0x15) == '\0') {
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
    }
    *(undefined1 *)(iVar3 + 0x10) = *(undefined1 *)((int)puVar2 + 0x95);
  }
  return;
}

