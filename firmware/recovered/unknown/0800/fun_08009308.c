/**
 * @brief fun_08009308
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009308, Ghidra name FUN_08009308, 120 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009308(void)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  
  iVar5 = DAT_08009380;
  if (*(char *)(DAT_08009380 + 0x10) != -0x5b) {
    return 0;
  }
  cVar1 = *(char *)(DAT_08009380 + 0x12);
  *(char *)(DAT_08009380 + 0xa1) = cVar1;
  if ((cVar1 == '\x05') || (cVar1 == '\x06')) {
    puVar8 = (ushort *)(iVar5 + 0xa8);
    FUN_08000ee4(*(int *)(iVar5 + 0xac) + (uint)*puVar8,DAT_08009380 + 0x15,0x80);
    *puVar8 = *puVar8 + 0x80;
    return 1;
  }
  *(undefined2 *)(iVar5 + 0xa8) = 0;
  bVar2 = *(byte *)(iVar5 + 0x11);
  uVar7 = (uint)bVar2;
  if (0x83 < uVar7 - 2) {
    return 0;
  }
  uVar6 = FUN_0800a878(DAT_08009380 + 0x12,uVar7 - 2 & 0xffff);
  uVar3 = *(undefined1 *)(iVar5 + uVar7 + 0x10);
  uVar4 = *(undefined1 *)(iVar5 + uVar7 + 0x11);
  if (uVar7 < 6) {
    *(undefined2 *)(iVar5 + 4) = 0;
  }
  else {
    *(ushort *)(iVar5 + 4) = bVar2 - 5;
  }
  if (uVar6 != CONCAT11(uVar3,uVar4)) {
    return 0;
  }
  return 1;
}

