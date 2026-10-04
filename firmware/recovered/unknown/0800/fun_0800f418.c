/**
 * @brief fun_0800f418
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f418, Ghidra name FUN_0800f418, 222 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f418(void)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_94 [126];
  ushort local_16;
  uint local_14;
  
  bVar1 = false;
  FUN_08001016(auStack_94,0x80);
  uVar4 = FUN_0800f378(0x10000);
  puVar2 = DAT_0800f4f8;
  if (uVar4 < 0x1f) {
    FUN_08021824(DAT_0800f4fc + uVar4 * 0x80,auStack_94,0x80);
    local_14 = (uint)local_16;
    uVar4 = FUN_0800a878(auStack_94,0x79);
    if (uVar4 == (local_14 & 0xffff)) {
      FUN_08000ee4(puVar2,auStack_94,0x79);
      if (5 < (byte)puVar2[0x78]) {
        puVar2[0x78] = 1;
      }
      if (2 < (byte)puVar2[0x1c]) {
        puVar2[0x1c] = 0;
      }
      if (puVar2[0x4d] != '\x01') {
        puVar2[0x4d] = 0;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_08000ee4(DAT_0800f4f8,DAT_0800f500,0x79);
  }
  iVar5 = 0;
  do {
    if (puVar2[iVar5 + 0x11] == -1) {
      puVar2[iVar5 + 0x11] = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  iVar5 = 0;
  do {
    if (puVar2[iVar5 + 0x4f] == -1) {
      puVar2[iVar5 + 0x4f] = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x28);
  FUN_08007194();
  FUN_0800f580();
  iVar5 = DAT_0800f508;
  uVar3 = DAT_0800f504;
  *(undefined4 *)(DAT_0800f508 + 0x2c) = DAT_0800f504;
  *(undefined4 *)(iVar5 + 0x30) = uVar3;
  *(undefined4 *)(iVar5 + 0x34) = uVar3;
  *(undefined2 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  if (*(char *)(DAT_0800f50c + 0x19) != '\0') {
    *puVar2 = 0;
  }
  return;
}

