/**
 * @brief fun_0802c596
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802c596, Ghidra name FUN_0802c596, 260 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802c596(uint param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int extraout_r2;
  uint *puVar8;
  uint uVar9;
  int extraout_r3;
  uint unaff_r6;
  uint *puVar10;
  undefined4 *unaff_r7;
  undefined4 *puVar11;
  int unaff_r8;
  uint **ppuVar12;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined8 uVar13;
  uint in_stack_00000028;
  uint *puStack_c;
  
  puVar8 = DAT_0802c8ac;
  ppuVar12 = &puStack_c;
  *DAT_0802c8ac = unaff_r6;
  uVar9 = DAT_0802c7c0;
  if (SCARRY4((int)param_2,0x16)) {
    bVar1 = *(byte *)((int)unaff_r7 + 0x1a);
    puVar10 = (uint *)((int)puVar8 >> 8);
    bVar2 = *(byte *)((int)puVar8 - 0xea);
    *param_2 = (uint)bVar1;
    param_2[1] = (uint)puVar8;
    param_2[2] = uVar9;
    param_2[3] = (int)puVar8 - 0xfd;
    param_2[4] = (uint)bVar2;
    if (!SBORROW4((int)param_2,0xdd)) {
      *(int *)(uint)bVar2 = (int)(param_2 + 5) * 0x4000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar9 = uVar9 & 0xffff | 0x3de20000;
    Reserved5 = (undefined1)DAT_0802c480;
    *puVar10 = (uint)bVar1;
    puVar10[1] = (uint)puVar8;
    puVar10[2] = uVar9;
    puVar10[3] = (int)uVar9 >> 1;
    puVar10[4] = 0x16;
    puVar10[5] = (uint)puVar10;
    _DAT_0000002e = SUB42(puVar8,0);
    *(ushort *)((int)puVar8 * 0x100) = (ushort)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar8[0x19] = param_1;
  uVar9 = unaff_r8 + ((uint)&stack0x00000348 >> 4) + (uint)((uint *)0xffffffe9 < param_2);
  puStack_c = param_2;
  if (param_2 != (uint *)0xffffffea) {
    puVar11 = (undefined4 *)(int)*(char *)((int)puVar8 + ((int)&stack0x00000348 >> 9));
    *(short *)(puVar8 + 0xf) = (short)param_1;
    puVar8[0xe] = param_1;
    coprocessor_movefromRt(0xf,7,in_cr0);
    puVar10 = (uint *)coprocessor_movefromRt2(0xf,7,in_cr0);
    uVar6 = *puVar10;
    uVar7 = puVar10[1];
    param_2 = (uint *)puVar10[2];
    *(uint **)(param_1 + 0x10) = param_2;
    puVar10 = (uint *)(uVar6 ^ (uint)puVar8);
    *puVar11 = puVar10;
    puVar11[1] = uVar7;
    puVar11[2] = param_2;
    *puVar10 = param_1;
    puVar10[1] = in_stack_00000028;
    puVar10[2] = (uint)puVar8;
    puVar10[3] = (uint)(puVar11 + 3);
    if (!SCARRY4(uVar9,0x16)) {
      *(char *)(puVar10[7] + 0x11) = (char)param_1;
      software_bkpt(0xe2);
      return;
    }
    uVar6 = puVar10[5];
    uVar4 = (undefined1)puVar10[6];
    *(undefined1 *)puVar10[4] = uVar4;
    if (uVar9 < 0xffffffea || puVar10 == (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = func_0x07f433d6(param_1,puVar10 + 8,&stack0x00000308,uVar6);
    DAT_0802c9b4 = (undefined4)((ulonglong)uVar13 >> 0x20);
    param_1 = (uint)uVar13;
    ppuVar12 = (uint **)coprocessor_movefromRt(0xf,3,0,in_cr9,in_cr6);
    unaff_r7 = &DAT_0802c9b0;
    DAT_0802c9bc = &DAT_0802c9b0;
    DAT_0802c9b0 = param_1;
    DAT_0802c9b8 = extraout_r3;
    *(undefined1 *)(extraout_r2 + 8) = uVar4;
    *(short *)(extraout_r3 + param_1) = (short)uVar13;
    uVar5 = DAT_0802c710;
    *(undefined1 *)(extraout_r2 + 0xc) = uVar4;
    if (extraout_r2 != 0) {
      *(undefined4 *)((int)ppuVar12 + 0x58) = uVar5;
      if (-1 < extraout_r3 + -0xdc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar9 = (uint)*(byte *)((int)param_2 + 0x17);
    *(uint **)((int)ppuVar12 + 0x204) = param_2;
    puVar8 = (uint *)0x0;
  }
  uVar3 = *(ushort *)((int)unaff_r7 + param_1);
  ppuVar12[0x5d] = puVar8;
  *(char *)((int)unaff_r7 + 2) = (char)param_2;
  if (6 < uVar3) {
    FUN_0802cc0c(uVar3,&DAT_0802c660,puVar8,uVar9);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

