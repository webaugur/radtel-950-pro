/**
 * @brief fun_080071c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080071c0, Ghidra name FUN_080071c0, 456 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080071c0(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint unaff_r9;
  ushort uVar12;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  
  local_30 = DAT_08007388;
  local_2c = param_1;
  puStack_28 = param_2;
  FUN_08000fd2(param_2,0x80);
  *param_2 = 0x60;
  iVar5 = DAT_0800738c;
  if (*(char *)(DAT_0800738c + 0x19) == '\0') {
    uVar12 = *(ushort *)(DAT_0800738c + 8) >> 8;
    uVar1 = (undefined1)*(ushort *)(DAT_0800738c + 8);
    uVar10 = (uint)((short)(ushort)*(byte *)(DAT_0800738c + 10) * 100) / 0x3c;
    uVar11 = *(undefined1 *)(DAT_0800738c + 7);
    uVar9 = *(ushort *)(DAT_0800738c + 0xc) >> 8;
    bVar2 = (byte)*(ushort *)(DAT_0800738c + 0xc);
    cVar7 = (char)((uint)((short)(ushort)*(byte *)(DAT_0800738c + 0xe) * 100) / 0x3c);
    uVar3 = *(undefined1 *)(DAT_0800738c + 0xb);
    unaff_r9 = (uint)*(ushort *)(DAT_0800738c + 0xf);
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar12 = (ushort)*(byte *)(DAT_08007390 + 4);
    uVar1 = *(undefined1 *)(DAT_08007390 + 5);
    uVar10 = *(uint *)(DAT_08007390 + 6) / 100 & 0xffff;
    uVar11 = *(undefined1 *)(DAT_08007390 + 3);
    if (99 < uVar10) {
      uVar10 = 99;
    }
    uVar9 = (ushort)*(byte *)(DAT_08007390 + 0xb);
    bVar2 = *(byte *)(DAT_08007390 + 0xc);
    uVar8 = *(uint *)(DAT_08007390 + 0xd) / 100 & 0xffff;
    uVar3 = *(undefined1 *)(DAT_08007390 + 10);
    if (99 < uVar8) {
      uVar8 = 99;
    }
    cVar7 = (char)uVar8;
    uVar6 = *(ushort *)(DAT_08007390 + 0x15) / 100;
    uVar8 = *(ushort *)(DAT_08007390 + 0x17) / 100;
  }
  cVar4 = (char)uVar9;
  if (uVar9 < 10) {
    param_2[1] = cVar4 + 'v';
  }
  else if (uVar9 < 100) {
    param_2[1] = cVar4 + '\x1c';
  }
  else if (uVar9 < 0x6e) {
    param_2[1] = cVar4 + '\b';
  }
  else {
    param_2[1] = cVar4 + -0x48;
  }
  if (bVar2 < 10) {
    param_2[2] = bVar2 + 0x58;
  }
  else {
    param_2[2] = bVar2 + 0x1c;
  }
  param_2[3] = cVar7 + '\x1c';
  if (799 < uVar8) {
    uVar8 = 799;
  }
  if (0x168 < uVar6) {
    uVar6 = 0;
  }
  param_2[4] = (char)(uVar8 / 10) + '\x1c';
  param_2[5] = (char)(uVar6 / 100) + ((char)uVar8 + (char)(uVar8 / 10) * -10) * '\n' + '\x1c';
  param_2[6] = (char)uVar6 + (char)(uVar6 / 100) * -100 + '\x1c';
  if (*(byte *)(iVar5 + 0x1a) < 4) {
    uVar8 = (uint)*(byte *)((int)&local_30 + (uint)*(byte *)(iVar5 + 0x1a));
  }
  else {
    uVar8 = FUN_08012d50(*(undefined1 *)(iVar5 + 0x1b));
  }
  if (uVar8 == 0x20) {
    param_2[7] = 0x4b;
    param_2[8] = 0x44;
  }
  else {
    param_2[7] = (char)uVar8;
    param_2[8] = 0x2f;
  }
  if (*(char *)(iVar5 + 0x19) == '\x01') {
    unaff_r9 = *(int *)(DAT_08007390 + 0x11) / 10;
  }
  param_2[0xc] = 0x7d;
  FUN_0800354a(param_2 + 9,3,unaff_r9 + 10000 & 0xffff);
  if (*(char *)(iVar5 + 0x4e) == '\x01') {
    FUN_08001064(param_2 + 0xd,DAT_0800738c + 0x4f,0x28);
  }
  FUN_08026824(local_2c,uVar12,uVar1,uVar10,uVar11,uVar9,uVar3,*(undefined1 *)(iVar5 + 0x26));
  return;
}

