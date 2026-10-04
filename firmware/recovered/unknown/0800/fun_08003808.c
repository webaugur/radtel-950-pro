/**
 * @brief fun_08003808
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003808, Ghidra name FUN_08003808, 372 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08003808(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = DAT_0800397c;
  FUN_08022194(DAT_0800397c);
  FUN_0802211a(uVar2,3,0);
  FUN_080222f8(uVar2,0x30d);
  FUN_080222e8(uVar2,0x20);
  FUN_08022102(uVar2,1);
  *(undefined4 *)(DAT_08003980 + 0xc) = 0;
  puVar3 = DAT_08003988;
  uVar13 = ((uint)*(byte *)(DAT_08003984 + 0x1e) % 9 + 2) * 10;
  uVar1 = *DAT_08003988;
  for (uVar8 = 0; uVar8 < uVar13; uVar8 = uVar8 + 1 & 0xffff) {
    puVar3[uVar8 + 0x14e] = uVar1;
  }
  FUN_08000ee4(puVar3 + uVar13 + 0x14e,DAT_08003988,*(undefined2 *)(puVar3 + 0x14c));
  uVar12 = (uint)*(ushort *)(puVar3 + 0x14c);
  uVar8 = uVar12 + uVar13;
  uVar11 = 0;
  uVar1 = puVar3[uVar12 - 1];
  do {
    uVar9 = uVar8 & 0xffff;
    uVar8 = uVar9 + 1;
    puVar3[uVar9 + 0x14e] = uVar1;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 5);
  uVar8 = uVar12 * 8 + (uVar13 + 5) * 8;
  *(short *)(puVar3 + 0x352) = (short)uVar8;
  *(undefined2 *)(puVar3 + 0x350) = 0;
  puVar4 = DAT_0800398c;
  *(undefined1 *)(DAT_0800398c + 2) = 2;
  *puVar4 = uVar8 & 0xffff;
  puVar4[3] = 0;
  *(undefined1 *)((int)puVar4 + 9) = 0;
  *(undefined1 *)(puVar4 + 5) = 1;
  *(undefined1 *)((int)puVar4 + 0x15) = 0;
  *(undefined1 *)((int)puVar4 + 0x16) = 0;
  puVar4[4] = 0;
  puVar10 = puVar4 + 6;
  FUN_08003780(puVar10,0x800);
  uVar5 = DAT_08003990;
  FUN_08003780(DAT_08003990,0x800);
  uVar6 = DAT_08003994;
  FUN_08012ae6(DAT_08003994,0x1000);
  uVar7 = DAT_08003998;
  FUN_0800aa44(DAT_08003998,2,1);
  FUN_0800a9d4(DAT_0800399c);
  FUN_0800d518(uVar7,puVar10,0x800);
  FUN_0800a8c8(0,1);
  FUN_0800a8e8(0,1);
  while (*(char *)((int)puVar4 + 9) != '\x01') {
    if (*(char *)((int)puVar4 + 0x15) != '\0') {
      FUN_08003780(puVar10,0x800);
      *(undefined1 *)((int)puVar4 + 0x15) = 0;
    }
    if (*(char *)((int)puVar4 + 0x16) != '\0') {
      FUN_08003780(uVar5,0x800);
      *(undefined1 *)((int)puVar4 + 0x16) = 0;
    }
  }
  *(undefined1 *)(DAT_080039a0 + 1) = 0;
  FUN_08022102(uVar2,0);
  FUN_0802211a(uVar2,0x77,0);
  FUN_080222f8(uVar2,0x7d);
  FUN_080222e8(uVar2,0x20);
  FUN_08022102(uVar2,1);
  FUN_08012ae2(uVar6,0x1000);
  return;
}

