/**
 * @brief fun_0802cb04
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802cb04, Ghidra name FUN_0802cb04, 150 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0802c98e) overlaps instruction at (ram,0x0802c98c)
    */
/* WARNING: Removing unreachable block (ram,0x0802c71a) */
/* WARNING: Removing unreachable block (ram,0x0802c74c) */
/* WARNING: Removing unreachable block (ram,0x0802c7f8) */
/* WARNING: Removing unreachable block (ram,0x0802c808) */
/* WARNING: Removing unreachable block (ram,0x0802c750) */
/* WARNING: Removing unreachable block (ram,0x0802c758) */
/* WARNING: Removing unreachable block (ram,0x0802c7a0) */
/* WARNING: Removing unreachable block (ram,0x0802c7a4) */
/* WARNING: Removing unreachable block (ram,0x0802c746) */
/* WARNING: Removing unreachable block (ram,0x0802c71e) */
/* WARNING: Removing unreachable block (ram,0x0802c72a) */
/* WARNING: Removing unreachable block (ram,0x0802c712) */
/* WARNING: Removing unreachable block (ram,0x0802c9c4) */
/* WARNING: Removing unreachable block (ram,0x0802c9ea) */
/* WARNING: Removing unreachable block (ram,0x08104440) */
/* WARNING: Removing unreachable block (ram,0x08103746) */
/* WARNING: Removing unreachable block (ram,0x0802c16c) */
/* WARNING: Removing unreachable block (ram,0x0802c172) */
/* WARNING: Removing unreachable block (ram,0x0802c180) */
/* WARNING: Removing unreachable block (ram,0x0802c18a) */
/* WARNING: Removing unreachable block (ram,0x0802c0bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0802cb04(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int extraout_r2;
  undefined4 uVar9;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined1 *puVar10;
  dword dVar11;
  undefined2 extraout_r3;
  undefined4 extraout_r3_00;
  int extraout_r3_01;
  dword *pdVar12;
  dword *pdVar13;
  uint uVar14;
  undefined1 *puVar15;
  int unaff_r4;
  dword dVar16;
  uint unaff_r5;
  uint *puVar17;
  int unaff_r6;
  int iVar18;
  int iVar19;
  int *piVar20;
  undefined4 unaff_r8;
  undefined4 in_r12;
  uint *puVar21;
  uint *puVar22;
  uint *unaff_lr;
  undefined4 unaff_pc;
  char in_ZR;
  char in_OV;
  bool bVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  char cVar27;
  undefined4 in_cr1;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined4 extraout_s12;
  undefined4 in_s12;
  undefined4 extraout_s13;
  uint *in_s13;
  undefined8 unaff_d12;
  undefined8 uVar28;
  uint in_stack_00000044;
  undefined4 in_stack_00000048;
  uint in_stack_000000cc;
  undefined4 in_stack_00000164;
  undefined4 in_stack_00000188;
  undefined4 in_stack_0000019c;
  int in_stack_000001a8;
  uint *in_stack_000001cc;
  int aiStack_6f [23];
  uint uStack_10;
  uint uStack_c;
  
  puVar21 = &uStack_10;
  uVar6 = *(uint *)(param_4 + 0x48);
  if (in_ZR != '\0') {
    in_OV = SBORROW4(unaff_r4,0x10);
    *(uint *)(unaff_r6 + 0x30) = param_2;
    *(uint *)(unaff_r6 + 0x34) = param_3;
    *(int *)(unaff_r6 + 0x38) = unaff_r4;
    unaff_r5 = param_3 >> 0x12;
  }
  piVar20 = (int *)&DAT_00000016;
  *(uint *)(unaff_r4 + 0x28) = param_2;
  puVar10 = &stack0x00000348;
  coprocessor_storelong(9,in_cr15,in_r12);
  uVar14 = param_2;
  if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    bVar24 = 0xffffff9d < uVar6;
    puVar5 = (uint *)(uVar6 + 0x62);
    puVar17 = (uint *)(uint)*(ushort *)(puVar10 + 8);
    if (SCARRY4(uVar6,0x62)) {
      uVar7 = *(uint *)(uVar6 + 0x82);
      bVar26 = true;
      bVar23 = false;
      puVar4 = puVar5;
      if (puVar5 == (uint *)0x0) {
        puVar10[0x10] = (char)_DAT_0000002a;
        DWORD_0802ced0 = (dword)piVar20;
        *(short *)(_DAT_00000016 + 0x1a) = (short)_DAT_00000022;
        goto code_r0x0802ca4c;
      }
    }
    else {
      bVar26 = SCARRY4(uVar14,1);
      puVar17 = (uint *)(uVar14 + 1);
      bVar23 = puVar17 == (uint *)0x0;
      uVar28 = VectorSub(unaff_d12,CONCAT44(in_s13,in_s12),2,0);
      SatQ(uVar28,2,0);
      piVar20 = (int *)(int)*(short *)(unaff_r4 * 2);
      bVar24 = false;
      uVar7 = uVar14;
      puVar4 = puVar17;
      if (0xfffffffe < uVar14) {
        if (puVar17 == (uint *)0x0) {
          coprocessor_store(8,in_cr1,unaff_r4 + -0x308);
        }
        puVar21 = (uint *)&stack0x00000008;
        pdVar13 = (dword *)&LAB_0802cae4;
        puVar5 = *(uint **)(puVar10 + 0x50);
        puVar10[0xe] = (char)param_3;
        DAT_0802cedc = puVar17;
        *puVar5 = param_2;
        puVar5[1] = param_3;
        puVar5[2] = (uint)&LAB_0802cae4;
        puVar5[3] = (uint)unaff_lr;
        puVar5[4] = 0x802cb28;
        cVar27 = (char)puVar5 + '\x14';
        bVar26 = false;
        bVar24 = false;
        bVar23 = false;
        puVar5 = unaff_lr;
        dVar16 = 0x802cb28;
        piVar20 = DAT_0802cb38;
        goto LAB_0802cc84;
      }
    }
    uStack_10 = param_2;
    uStack_c = param_3;
    if (bVar24 && !bVar23) {
      piVar8 = (int *)(uint)*(byte *)(unaff_r4 + 0x1f);
      dVar16 = piVar8[2];
      puVar15 = (undefined1 *)(uint)*(byte *)(*piVar8 + 0x19);
      pdVar12 = (dword *)(piVar8[3] >> 3);
      if ((int)pdVar12 < 0 != SBORROW4(unaff_r5,0x16)) {
code_r0x0802ca4c:
        software_interrupt(0xa8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (pdVar12 != (dword *)0x0 && (int)pdVar12 < 0 == SBORROW4(unaff_r5,0x16)) break;
      iVar18 = 0xae;
      goto code_r0x0802c924;
    }
    if ((int)puVar4 < 0 == bVar26) {
      if (unaff_r4 == 0) {
        *(uint **)(puVar10 + 0x60) = puVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      bVar24 = (uint)puVar10 >> 0x10 != 0;
      if (((uint)puVar10 >> 0xf & 1) != 0 && bVar24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      in_stack_00000044 = unaff_r5;
      if (bVar24) {
        in_stack_000000cc = (uint)(byte)puVar10[0x14];
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0x93,0x802ca00);
        (*pcVar1)();
      }
      puVar17 = (uint *)(uint)*(ushort *)(puVar10 + 0x28);
      puVar10 = (undefined1 *)((int)unaff_r5 >> 0xb);
    }
    iRam0802cea0 = in_stack_000001a8;
    *(short *)(puVar10 + 0x30) = (short)puVar17;
    puVar10 = *(undefined1 **)(in_stack_000001a8 + 8);
    uVar14 = unaff_r5 - 6;
    piVar20 = (int *)0x87;
    uVar6 = 0x802ccec;
    unaff_r4 = iRam0802cb08;
    in_s12 = unaff_pc;
    in_s13 = unaff_lr;
    uRam0802ce9c = uVar7;
    DWORD_0802cea4 = (dword)puVar17;
  } while( true );
LAB_0802cc20:
  if ((int)puVar15 >> 0x1e == 0) {
    *(short *)((int)puVar5 + (int)puVar10) = (short)puVar5;
    puVar15 = puVar10 + 0x65;
    iVar18 = (int)puVar15 * 0x1000;
    *(undefined2 *)(DAT_0802cec0 + 0x34) = 0xcddc;
    uVar14 = *(uint *)(iVar18 + 4);
    iVar18 = *(int *)(iVar18 + 0x10);
    uVar6 = uVar14 & 0xff;
    iVar19 = iVar18 >> uVar6;
    uVar14 = uVar14 & 0xff;
    puVar17 = (uint *)(iVar19 >> uVar14);
    param_2 = *puVar17;
    puVar10 = (undefined1 *)puVar17[1];
    pdVar13 = (dword *)puVar17[2];
    piVar20 = (int *)puVar17[3];
    cVar27 = (char)puVar17 + '\x10';
    bVar23 = false;
    bVar24 = false;
    bVar26 = true;
    puVar5 = _DAT_0802cde0;
    dVar16 = DAT_0802cde4;
    if (SCARRY4((int)pdVar12,0x4f)) goto LAB_0802cc84;
    puVar17[0xe] = (uint)piVar20;
    puVar5 = (uint *)*pdVar13;
    dVar16 = pdVar13[3];
    pdVar12 = pdVar13 + 4;
    if (uVar14 == 0 &&
        (uVar6 == 0 && ((uint)puVar15 & 0x100000) != 0 ||
        uVar6 != 0 && (iVar18 >> uVar6 - 1 & 1U) != 0) ||
        uVar14 != 0 && (iVar19 >> uVar14 - 1 & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  dVar11 = pdVar12[1];
  puVar15 = (undefined1 *)pdVar12[2];
  pdVar13 = pdVar12 + 3;
  puVar15[0xe] = (char)piVar20;
  cVar27 = (char)*(undefined2 *)(dVar11 + 0x30);
  puVar10 = (undefined1 *)(dVar11 - 0xc);
  if ((int)dVar11 < 0xc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pdVar13 != (dword *)0x0) {
    if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_2 = *(uint *)((int)puVar5 * 0x200000 + 0x48);
    if (dVar16 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar10[(int)puVar15] = cVar27;
    bVar26 = SCARRY4(param_2,(int)piVar20);
    bVar24 = (int)(param_2 + (int)piVar20) < 0;
    bVar23 = (undefined1 *)(param_2 + (int)piVar20) == (undefined1 *)0x0;
    puVar5 = in_stack_000001cc;
LAB_0802cc84:
    uVar6 = DAT_0802c7c0;
    if (!bVar23 && bVar24 == bVar26) {
      cVar27 = (char)((int)puVar10 >> 0xc);
      param_2 = (uint)pdVar13 >> 0x19;
    }
    if (pdVar13 == (dword *)0x0) {
      puVar17 = (uint *)(int)(short)puVar10;
      cRam0000000e = cVar27;
      *puVar5 = param_2;
      puVar5[1] = (uint)puVar10;
      puVar5[2] = uVar6;
      puVar5[3] = dVar16;
      puVar5[4] = (uint)piVar20;
      if (bVar26 == false) {
        *piVar20 = (int)(puVar5 + 5) * 0x4000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar6 = uVar6 & 0xffff | 0x3de20000;
      Reserved5 = (undefined1)DAT_0802c480;
      uVar14 = (int)uVar6 >> 1;
      puVar21[-1] = (uint)unaff_lr;
      puVar21[-2] = uVar14;
      puVar21[-3] = (uint)puVar10;
      puVar21[-4] = DAT_0802c480;
      *puVar17 = param_2;
      puVar17[1] = (uint)puVar10;
      puVar17[2] = uVar6;
      puVar17[3] = uVar14;
      puVar17[4] = 0x16;
      puVar17[5] = (uint)puVar17;
      _DAT_0000002e = (short)puVar10;
      *(short *)((int)puVar10 * 0x100) = (short)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar10[0x18] = (char)*(undefined2 *)(puVar10 + 0x38);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar20 = aiStack_6f;
  puVar10 = (undefined1 *)((int)puVar10 >> 0x15);
  *puVar15 = (char)puVar21;
  pdVar12 = (dword *)0x0;
  puVar5 = puVar21;
  goto LAB_0802cc20;
code_r0x0802c924:
  _MasterStackPointer = puVar10;
  _Reset = pdVar12;
  *(undefined4 *)(iVar18 + 0x28) = 0x16;
  uVar28 = func_0x08f23d3e(8,&DAT_0802cb6c);
  uVar6 = uRam0802ca4c;
  uVar14 = (uint)uVar28;
  puVar22 = puVar21 + 0x16;
  cVar27 = 0x15 < uVar14;
  cVar25 = SBORROW4(uVar14,0x16);
  *(undefined2 *)((int)((ulonglong)uVar28 >> 0x20) + 0x1a) = extraout_r3;
  uVar9 = *(undefined4 *)(extraout_r2 + 4);
  *(short *)(*(int *)(extraout_r2 + 8) + 10) = (short)uVar6;
  uVar28 = func_0x084430c0(uVar14 - 0x16,*(undefined2 *)((int)piVar20 + 0x32),uVar9);
  iVar18 = (int)uVar28;
  puVar21[0x35] = uVar6;
  if (cVar25 != '\0') {
    uVar28 = CONCAT44(uRam0802cbac._4_4_,(undefined4)uRam0802cbac);
    if (cVar25 != '\0') {
code_r0x0802c98c:
      uRam0802cbac = uVar28;
      iVar18 = func_0x08f43284();
      coprocessor_store(6,in_cr12,unaff_r8);
      uVar28 = uRam0802cbac;
      if (extraout_r3_01 + -0x72 < 0) {
        uRam0802cc18 = *(undefined4 *)(iVar18 + 0x44);
        uRam0802cbb4._0_3_ =
             CONCAT12((char)*(ushort *)(extraout_r2_01 + 0x10),(undefined2)uRam0802cbb4);
        *(uint *)((int)puVar21 + iVar18 + 0x1a0) = (uint)*(ushort *)(extraout_r2_01 + 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    uRam0802cbac._4_4_ = (undefined4)((ulonglong)uVar28 >> 0x20);
    uRam0802cbac._0_4_ = (undefined4)uVar28;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar27 == '\0') {
    uRam0802cbbc = uRam0802cc78;
    VectorCompareGreaterThanOrEqual
              (CONCAT44(extraout_s13,extraout_s12),CONCAT44(extraout_s13,extraout_s12),4,1);
    uRam0802cbb8 = &uRam0802cbac;
    _LAB_0802cbc0 = 0xd5;
    uRam0802cbb4 = extraout_r3_00;
    goto code_r0x0802c98c;
  }
  *(undefined1 *)(extraout_r2_00 + 4) = 0x3e;
  iVar19 = *(int *)(extraout_r2_00 + 0x10);
  sVar2 = *(short *)(extraout_r2_00 + 0x3e);
  pdVar12 = (dword *)0x417;
  *(char *)((int)&uRam0802cbac + iVar18) = (char)iVar19;
  sVar3 = *(short *)(iVar18 + iVar19);
  if (-0x2f < sVar2) {
    *(int *)iVar18 = iVar18;
    *(undefined4 *)(iVar18 + 4) = 0x417;
    *(int *)(iVar18 + 8) = (int)sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar20 = *(int **)(iVar18 + 0x14);
  puVar10 = (undefined1 *)0x0;
  puVar5 = puVar21 + 0xc4;
  bVar24 = (bool)hasExclusiveAccess(puVar5);
  iVar18 = 1;
  puVar21 = puVar21 + 0x16;
  if (bVar24) {
    iVar18 = 0;
    *puVar5 = 0;
    puVar21 = puVar22;
  }
  goto code_r0x0802c924;
}

