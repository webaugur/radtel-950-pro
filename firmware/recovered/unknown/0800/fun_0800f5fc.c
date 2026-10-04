/**
 * @brief fun_0800f5fc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f5fc, Ghidra name FUN_0800f5fc, 960 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f5fc(void)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_08021824(0xf0e0,&local_38,1);
  if ((char)local_38 != -1) {
    FUN_08021824(0xf000,DAT_0800f9bc,0x10);
    FUN_08021824(0xf010,DAT_0800f9c0,0x10);
    FUN_08021824(0xf020,DAT_0800f9c4,0x10);
    FUN_08021824(0xf030,DAT_0800f9c8,0x10);
    FUN_08021824(0xf040,DAT_0800f9cc,0x10);
    FUN_08021824(0xf050,DAT_0800f9d0,0x10);
    FUN_08021824(0xf060,DAT_0800f9d4,0x10);
    FUN_08021824(0xf070,DAT_0800f9d8,0x10);
    FUN_08021824(0xf080,DAT_0800f9dc,0x10);
    FUN_08021824(0xf090,DAT_0800f9e0,0x10);
    FUN_08021824(0xf0a0,DAT_0800f9e4,0x10);
    FUN_08021824(0xf0b0,DAT_0800f9e8,0x10);
    FUN_08021824(0xf0c0,DAT_0800f9ec,10);
    FUN_08021824(0xf0d0,DAT_0800f9f0,10);
    FUN_08021824(0xf0e0,DAT_0800f9f4,0x10);
    FUN_08021824(0xf0f0,DAT_0800f9f8,0x10);
    FUN_08021824(0xf100,DAT_0800f9fc,0x10);
    FUN_08021824(0xf110,DAT_0800fa00,0x10);
    FUN_08021824(0xf210,DAT_0800fa04,0x10);
    FUN_08021824(0xf170,DAT_0800fa08,0x20);
    FUN_08021824(0xf190,DAT_0800fa0c,0x10);
    FUN_08021824(0xf1a0,DAT_0800fa10,0x10);
    FUN_08021824(0xf1b0,DAT_0800fa14,0x10);
  }
  iVar2 = DAT_0800fa04;
  *(undefined1 *)(DAT_0800fa04 + 3) = 0x2b;
  *(undefined1 *)(iVar2 + 4) = 0x2b;
  iVar2 = DAT_0800fa18;
  if (*(char *)(DAT_0800fa18 + 0x49) == -0x5b) {
    FUN_08000ee4(&local_24,DAT_0800fa1c,0x10);
    local_34 = *DAT_0800fa1c;
    local_30 = DAT_0800fa1c[1];
  }
  else {
    FUN_08021824(62000,&local_24,0x10);
    FUN_08021824(0xf240,&local_34,0x10);
  }
  if ((char)local_24 == -1) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0x1360101;
    local_20 = 0x40174;
    local_1c = 0x2012005;
    local_18 = 0x600220;
    local_34 = 0x3500300;
    local_30 = 0x90;
  }
  cVar1 = *(char *)(iVar2 + 0x62);
  if (cVar1 == '\0') {
    local_1c = *(undefined4 *)(DAT_0800fa20 + 0x14);
    local_18 = *(undefined4 *)(DAT_0800fa20 + 0x18);
    local_24 = *(undefined4 *)(DAT_0800fa20 + 0xc);
    local_20 = *(undefined4 *)(DAT_0800fa20 + 0x10);
    local_34 = *(undefined4 *)(DAT_0800fa20 + 0xc);
    local_30 = *(undefined4 *)(DAT_0800fa20 + 0x10);
  }
  *(char *)(iVar2 + 0xf) = (char)local_24;
  *(undefined1 *)(iVar2 + 0x10) = local_20._1_1_;
  *(undefined1 *)(iVar2 + 0x11) = local_1c._2_1_;
  *(undefined1 *)(iVar2 + 0x12) = (undefined1)local_34;
  puVar3 = DAT_0800fa24;
  local_38 = 0;
  do {
    *(byte *)((int)&local_24 + local_38) =
         (*(byte *)((int)&local_24 + local_38) & 0xf) +
         (*(byte *)((int)&local_24 + local_38) >> 4) * '\n';
    local_38 = local_38 + 1 & 0xff;
  } while (local_38 < 0x10);
  uVar5 = (ushort)local_24._1_1_ * 1000 + (ushort)local_24._2_1_ * 10;
  *DAT_0800fa24 = uVar5;
  uVar6 = (ushort)local_24._3_1_ * 1000 + (ushort)(byte)local_20 * 10;
  puVar3[1] = uVar6;
  *(uint *)(puVar3 + 10) = (uint)uVar5 * 10000;
  *(uint *)(puVar3 + 0xc) = (uint)uVar6 * 10000;
  uVar5 = (ushort)local_20._2_1_ * 1000 + (ushort)local_20._3_1_ * 10;
  puVar3[2] = uVar5;
  uVar6 = (ushort)(byte)local_1c * 1000 + (ushort)local_1c._1_1_ * 10;
  puVar3[3] = uVar6;
  *(uint *)(puVar3 + 0xe) = (uint)uVar5 * 10000;
  *(uint *)(puVar3 + 0x10) = (uint)uVar6 * 10000;
  uVar5 = (ushort)local_1c._3_1_ * 1000 + (ushort)(byte)local_18 * 10;
  puVar3[4] = uVar5;
  uVar6 = (ushort)local_18._1_1_ * 1000 + (ushort)local_18._2_1_ * 10;
  puVar3[5] = uVar6;
  *(uint *)(puVar3 + 0x12) = (uint)uVar5 * 10000;
  *(uint *)(puVar3 + 0x14) = (uint)uVar6 * 10000;
  local_38 = 0;
  do {
    *(byte *)((int)&local_34 + local_38) =
         (*(byte *)((int)&local_34 + local_38) & 0xf) +
         (*(byte *)((int)&local_34 + local_38) >> 4) * '\n';
    local_38 = local_38 + 1 & 0xff;
  } while (local_38 < 8);
  uVar5 = (ushort)local_34._1_1_ * 1000 + (ushort)local_34._2_1_ * 10;
  puVar3[6] = uVar5;
  uVar6 = (ushort)local_34._3_1_ * 1000 + (ushort)(byte)local_30 * 10;
  puVar3[7] = uVar6;
  *(uint *)(puVar3 + 0x16) = (uint)uVar5 * 10000;
  *(uint *)(puVar3 + 0x18) = (uint)uVar6 * 10000;
  uVar4 = DAT_0800fa28;
  if (cVar1 == '\0') {
    *(undefined4 *)(puVar3 + 0x1c) = DAT_0800fa28;
    *(undefined4 *)(puVar3 + 0x1a) = DAT_0800fa30;
    puVar3[9] = 0x280;
    puVar3[8] = 0xb4;
    *(undefined1 *)(iVar2 + 0x13) = 1;
  }
  else {
    *(undefined4 *)(puVar3 + 0x1c) = DAT_0800fa2c;
    *(undefined4 *)(puVar3 + 0x1a) = uVar4;
    puVar3[9] = 0x438;
    puVar3[8] = 0x280;
    *(undefined1 *)(iVar2 + 0x13) = 1;
  }
  FUN_0801b70c(0);
  return;
}

