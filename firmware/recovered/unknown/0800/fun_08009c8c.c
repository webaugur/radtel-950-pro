/**
 * @brief fun_08009c8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009c8c, Ghidra name FUN_08009c8c, 86 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009c8c(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  
  puVar4 = DAT_08009ce8;
  iVar3 = DAT_08009ce4;
  pcVar5 = *(char **)(DAT_08009ce4 + 0xc);
  if (*pcVar5 != -0x5b) {
    FUN_08021a54(0xee,1);
    return 1;
  }
  uVar7 = (uint)CONCAT11(pcVar5[4],pcVar5[5]);
  *(ushort *)(DAT_08009ce8 + 10) = CONCAT11(pcVar5[4],pcVar5[5]);
  bVar1 = pcVar5[uVar7 + 7];
  bVar2 = pcVar5[uVar7 + 6];
  iVar6 = FUN_0800a878(pcVar5 + 1,uVar7 + 5 & 0xffff);
  if ((uint)bVar1 + (uint)bVar2 * 0x100 != iVar6) {
    FUN_08021a54(0xee,4);
    return 1;
  }
  *puVar4 = *(undefined1 *)(*(int *)(iVar3 + 0xc) + 1);
  return 0;
}

