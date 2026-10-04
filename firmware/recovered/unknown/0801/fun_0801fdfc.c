/**
 * @brief fun_0801fdfc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801fdfc, Ghidra name FUN_0801fdfc, 342 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801fdfc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined2 local_30;
  undefined2 local_2e;
  byte local_29;
  uint local_28;
  
  iVar3 = DAT_0801ff58;
  iVar2 = DAT_0801ff54;
  uVar7 = *(int *)(DAT_0801ff54 + 3) + (uint)*(byte *)(DAT_0801ff58 + 1) * 99;
  FUN_08001016(auStack_38,0x20);
  iVar4 = DAT_0801ff5c;
  local_29 = local_29 & 0x7f;
  local_2e = 0;
  uVar6 = *(uint *)(DAT_0801ff5c + 0x10);
  uVar5 = local_2e;
  if (*(char *)(DAT_0801ff5c + 0x14) == '\x01') {
    if (599 < uVar6) {
      uVar5 = (short)uVar6;
    }
  }
  else if ((*(char *)(DAT_0801ff5c + 0x14) == '\x02') &&
          (uVar5 = (short)uVar6, *(char *)(DAT_0801ff5c + 0xc) != '\x01')) {
    local_28 = uVar6 & 0x7fffff | 0xa0000000;
    local_29 = local_29 | 0x80;
    uVar5 = local_2e;
  }
  local_2e = uVar5;
  local_29 = local_29 & 0xfc;
  local_30 = local_2e;
  FUN_08017124(auStack_38,*(undefined4 *)(DAT_0801ff5c + 4));
  FUN_08017124(auStack_34,*(undefined4 *)(iVar4 + 4));
  FUN_08021824(uVar7 * 0x20 + 0x14,auStack_44,0xc);
  FUN_0800f3c0(uVar7 & 0xffff,auStack_38,auStack_44);
  iVar4 = DAT_0801ff60;
  iVar8 = DAT_0801ff60 + 0x7e;
  cVar1 = *(char *)(iVar3 + 1);
  if (*(char *)((uint)*(byte *)(DAT_0801ff60 + 0xfa) + DAT_0801ff64) == cVar1) {
    FUN_080158b0(iVar8,uVar7 & 0xffff,1);
    if (*(char *)(iVar4 + (uint)*(byte *)(iVar4 + 0xfa) * 0x58 + 0x130) == '\x01') {
      if (*(uint *)(iVar2 + 3) == (uint)*(ushort *)(iVar4 + 0x108)) {
        FUN_08000f6e(iVar4 + (uint)*(byte *)(iVar4 + 0xfa) * 0x20 + 0x270,auStack_38,0x20);
      }
      FUN_0800864c((uint)*(byte *)(iVar4 + 0xfa),0,
                   *(undefined2 *)(iVar4 + (uint)*(byte *)(iVar4 + 0xfa) * 2 + 0x102));
    }
  }
  else {
    FUN_080158b0(DAT_0801ff60,cVar1,1);
    FUN_080158b0(iVar8,uVar7 & 0xffff,1);
    FUN_080158b0(DAT_0801ff60 + 0xfe,*(undefined1 *)(iVar3 + 1),1);
  }
  FUN_0801c9a0();
  FUN_08018038();
  return 5;
}

