/**
 * @brief fun_0800a994
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a994, Ghidra name FUN_0800a994, 148 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a994(void)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = FUN_0800aa20(DAT_0800a9b0);
  if (iVar3 == 0) {
    return;
  }
  FUN_0800a9d4(DAT_0800a9b4);
  puVar2 = DAT_0800d50c;
  cVar1 = (char)DAT_0800d50c[2];
  uVar4 = DAT_0800d50c[4];
  if (cVar1 == '\0') {
    DAT_0800d50c[4] = uVar4 + 0x400;
  }
  else if (cVar1 == '\x02') {
    DAT_0800d50c[4] = uVar4 + 0x40;
  }
  else {
    DAT_0800d50c[4] = uVar4 + 0x800;
  }
  iVar3 = DAT_0800d510;
  uVar4 = *puVar2;
  if ((puVar2[4] < uVar4) && (*(char *)((int)puVar2 + 9) != '\x01')) {
    iVar5 = DAT_0800d510 >> 0x13;
    if ((cVar1 == '\0') && (uVar4 < puVar2[4] + 0x400)) {
      iVar5 = (uVar4 & 0x3ff) << 1;
    }
    if ((char)puVar2[5] == '\x01') {
      *(undefined1 *)(puVar2 + 5) = 0;
      *(undefined1 *)((int)puVar2 + 0x15) = 1;
      FUN_0800d518(iVar3,DAT_0800d514,iVar5);
      return;
    }
    *(undefined1 *)(puVar2 + 5) = 1;
    *(undefined1 *)((int)puVar2 + 0x16) = 1;
    FUN_0800d518(iVar3,DAT_0800d50c + 6,iVar5);
    return;
  }
  *(undefined1 *)((int)puVar2 + 9) = 1;
  *(undefined1 *)(puVar2 + 2) = 0;
  FUN_0800a9b8(iVar3,0);
  return;
}

