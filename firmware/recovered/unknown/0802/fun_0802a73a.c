/**
 * @brief fun_0802a73a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802a73a, Ghidra name FUN_0802a73a, 120 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0802a73a(uint param_1,undefined4 param_2,byte *param_3)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_r4;
  int iVar6;
  uint unaff_r5;
  uint uVar7;
  uint uVar8;
  int unaff_r6;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  int unaff_r8;
  uint unaff_r9;
  bool bVar14;
  undefined4 in_cr15;
  char in_stack_0000018c;
  
  coprocessor_storelong(1,in_cr15,unaff_r6);
  *(int *)(param_3 + unaff_r4) = unaff_r6 + -0x35c;
  pbVar2 = DAT_0802a6da;
  puVar5 = (undefined1 *)((int)param_3 >> 0x10);
  puVar3 = (undefined4 *)(param_1 >> 0x1c);
  if (0x61 < unaff_r5) {
    uVar1 = *(ushort *)(puVar5 + 0x10);
    *(short *)(unaff_r6 + -0x34a) = (short)((uint)param_3 >> 0x10);
    *(uint *)unaff_r5 = unaff_r5;
    *(char **)(unaff_r5 + 4) = &stack0x0000018c;
    *(ushort *)(((uint)uVar1 & (uint)puVar3) + unaff_r4 + 0xe) = (ushort)(param_1 >> 0x1c);
    puVar13 = (undefined4 *)puVar3[5];
    *puVar13 = *puVar3;
    puVar13[1] = (int)in_stack_0000018c;
    puVar13[2] = (int)in_stack_0000018c << 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = (uint)*param_3;
  iVar6 = unaff_r5 - 0xfd;
  uVar12 = 0x802a5de;
  puVar4 = &stack0x00000040;
  *(short *)(DAT_0802a6da + 0x802a5de) = (short)iVar6;
  if (0xfc < unaff_r5 && iVar6 != 0) {
    bVar14 = false;
    while( true ) {
      if (!bVar14) {
        uVar12 = uVar12 + 0x20;
      }
      uVar10 = (uVar12 - iVar6) - 0x10;
      uVar7 = uVar8 / 0x40000000 >> (0x20 - (uVar10 & 0x1f) & 0xff);
      uVar12 = uVar7;
      uVar8 = uVar8 / 0x40000000 << (uVar10 & 0x1f);
      if ((int)uVar10 < 0) {
        uVar12 = 0;
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
      if (0x1f < (int)uVar10) {
        uVar7 = 0;
        uVar12 = uVar8;
      }
      if (uVar7 == 0 && uVar12 == 0) {
        uVar7 = 1;
      }
      bVar14 = CARRY4(unaff_r9,uVar7);
      unaff_r9 = unaff_r9 + uVar7;
      pbVar11 = (byte *)((ulonglong)uVar7 * ZEXT48(param_3));
      unaff_r8 = unaff_r8 + uVar12 + bVar14;
      bVar14 = pbVar2 < pbVar11;
      pbVar2 = pbVar2 + -(int)pbVar11;
      puVar4 = puVar4 + (-(uint)bVar14 -
                        (uVar7 * (int)puVar5 +
                        uVar12 * (int)param_3 + (int)((ulonglong)uVar7 * ZEXT48(param_3) >> 0x20)));
      if (puVar4 <= puVar5 && (uint)(param_3 <= pbVar2) <= (uint)((int)puVar4 - (int)puVar5)) break;
      bVar14 = puVar4 == (undefined1 *)0x0;
      if (bVar14) {
        iVar9 = LZCOUNT(pbVar2);
        uVar8 = (int)pbVar2 << iVar9;
      }
      else {
        iVar9 = LZCOUNT(puVar4);
        uVar8 = (int)puVar4 << iVar9;
      }
      uVar12 = 0x20 - iVar9;
      if (!bVar14) {
        uVar8 = uVar8 | (uint)pbVar2 >> (uVar12 & 0xff);
      }
    }
    return CONCAT44(unaff_r8,unaff_r9);
  }
  uVar1 = *(ushort *)(pbVar2 + 0x32);
  *(short *)(unaff_r5 - 0xcb) = (short)pbVar2;
  do {
  } while (!SCARRY4((uint)uVar1,(int)pbVar2));
  *(uint *)(unaff_r5 - 0xf1) = (uint)uVar1;
  return CONCAT44(param_3,param_2);
}

