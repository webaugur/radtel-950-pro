/**
 * @brief fun_08006a78
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006a78, Ghidra name FUN_08006a78, 402 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006a78(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_3b0 [56];
  int local_378;
  undefined1 auStack_374 [112];
  byte *local_304;
  undefined1 auStack_2fc [68];
  byte local_2b8 [340];
  undefined2 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [170];
  short local_a6;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [55];
  byte bStack_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined4 local_59;
  undefined1 local_55;
  undefined1 uStack_54;
  undefined1 local_53;
  undefined4 local_52;
  undefined2 local_4e;
  undefined1 local_4c [44];
  ushort local_20;
  
  local_2b8[0] = 0;
  local_2b8[1] = 0;
  local_2b8[2] = 0;
  local_2b8[3] = 0;
  local_2b8[4] = 0;
  local_2b8[5] = 0;
  local_2b8[6] = 0;
  local_2b8[7] = 0;
  FUN_08001064(local_2b8,param_1 + 7,7);
  puVar3 = (undefined4 *)FUN_08025e84(local_2b8,1);
  local_60 = *puVar3;
  local_5c = *(undefined2 *)(puVar3 + 1);
  local_5a = *(undefined1 *)((int)puVar3 + 6);
  FUN_08001064(local_2b8,param_1,6);
  bVar2 = FUN_08000ea6(local_2b8);
  uVar4 = (uint)bVar2;
  bVar2 = *(byte *)(param_1 + 6);
  uVar5 = bVar2 - 1;
  if (uVar5 < 0xf) {
    uVar6 = uVar4 + 1 & 0xff;
    local_2b8[uVar4] = 0x2d;
    local_2b8[uVar6] = bVar2;
    local_2b8[uVar6 + 1 & 0xff] = 0;
  }
  else {
    local_2b8[uVar4] = 0;
  }
  puVar3 = (undefined4 *)FUN_08025e84(local_2b8,1);
  local_59 = *puVar3;
  local_55 = (undefined1)*(undefined2 *)(puVar3 + 1);
  uStack_54 = (undefined1)((ushort)*(undefined2 *)(puVar3 + 1) >> 8);
  local_53 = *(undefined1 *)((int)puVar3 + 6);
  local_20 = 0xe;
  if (uVar5 < 0xf) {
    uVar4 = 0;
    do {
      iVar1 = uVar4 * 7;
      iVar7 = iVar1 + param_1;
      if ((*(char *)(iVar7 + 0xe) == '\0') || (*(char *)(iVar7 + 0xe) == -1)) break;
      FUN_08001064(local_2b8,iVar7 + 0xe,6);
      bVar2 = FUN_08000ea6(local_2b8);
      local_2b8[bVar2] = 0;
      local_2b8[6] = *(undefined1 *)(iVar7 + 0x14);
      puVar3 = (undefined4 *)FUN_08025e84(local_2b8,0);
      *(undefined4 *)((int)&local_52 + iVar1) = *puVar3;
      *(undefined2 *)((int)&local_4e + iVar1) = *(undefined2 *)(puVar3 + 1);
      local_4c[iVar1] = *(undefined1 *)((int)puVar3 + 6);
      local_20 = local_20 + 7;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 8);
  }
  (&bStack_61)[local_20] = (&bStack_61)[local_20] | 1;
  FUN_08000f6e(auStack_3b0,&uStack_54,0x36);
  FUN_08026b70(auStack_2fc,local_60,CONCAT13((undefined1)local_59,CONCAT12(local_5a,local_5c)),
               CONCAT13(local_55,local_59._1_3_));
  FUN_08000f6e(&local_a4,auStack_2fc,0x44);
  local_378 = param_1 + 0x65;
  FUN_08000f6e(auStack_3b0,auStack_98,0x36);
  FUN_08025f60(auStack_374,local_a4,uStack_a0,uStack_9c);
  FUN_08000f6e(&local_160,auStack_374,0xbc);
  if (((*(char *)(DAT_08006c0c + 0x27) == '\x01') || (*(char *)(DAT_08006c0c + 0x27) == '\x02')) &&
     ((*(char *)(DAT_08006c0c + 0x77) == '\x02' || (*(char *)(DAT_08006c0c + 0x77) == '\x03')))) {
    FUN_08014854((int)&local_160 + 1,local_a6 + -4);
  }
  local_304 = local_2b8 + 8;
  FUN_08000f6e(auStack_3b0,auStack_150,0xac);
  FUN_08027d40(local_160,uStack_15c,uStack_158,uStack_154);
  FUN_08027418(DAT_08006c10,local_2b8 + 8,local_164);
  return;
}

